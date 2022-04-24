/************************************************************************
                                  32.Grup
                         2B İşletim Sistemleri Proje Odevi

                           G191210068 Ömer Faruk Güzel 
                           G191210002 Muhammet Talha Ergün
                           G211210385 Ahmet Karamanoğlu
                           B191210086 Emre Özel 



*************************************************************************/

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"

int cd(char** args)//cd buildin
{
    if (args[1] == NULL) {
        printf("arguman bekleniyor..\n");
    }
    else {
        if (chdir(args[1]) != 0) {
            printf("boyle bir dizin yok..\n");
        }
    }
    return 1;
}
int exit_()//exit buildin
{
    exit(0);
}

int show_pid()//showpid buildin 
{
    int status;
    for (int i = 0; i < 5; i++)//min 5 child process yazdirma
    {
        pid_t pid;
        pid = fork();

        if (pid == 0)//child process
        {
            printf("%d\n", getpid());
        }
        else if (pid > 0)//parent process
        {
            do {
                waitpid(pid, &status, WUNTRACED);
            } while (!WIFEXITED(status) && !WIFSIGNALED(status));
        }
        else {
            printf("fork hatasi");
        }
    }
}
int run_execvp(char** args)//execvp ile dışarıdan program yukleme
{
    pid_t pid;
    int status;

    pid = fork();
    if (pid == 0)// Child process
    {
        if (execvp(args[0], args) == -1) {
            printf("komut icra edilemiyor..\n");
        }
        exit(EXIT_FAILURE);
    }
    else if (pid < 0)// Fork Olusturma hatası
    {
        printf("fork hatasi..\n");
    }
    else // Parent process
    {
        do {
            waitpid(pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }
    return 1;
}

int run(char** args)//buldin komutlarini icra etme
{
    if (args[0] == NULL) //Komut boş
    {
        return 1;
    }

    if (strcmp(args[0], "cd") == 0)//cd buldin komutu
    {
        return cd(args);
    }

    if (strcmp(args[0], "exit") == 0)//exit buldin komutu
    {
        return exit_();
    }
    if (strcmp(args[0], "showpid") == 0)//showpid buldin komutu
    {
        return show_pid();
    }

    return run_execvp(args);
}

char* read_line(void)//komut satirini okuma
{
    char* satir = NULL;
    ssize_t bufsize = 0;
    getline(&satir, &bufsize, stdin);
    return satir;
}
char** split_line(char* line)//komut satirini uygun kosullara gore argumana bolme 
{
    int bufsize = LSH_TOK_BUFSIZE, position = 0;
    char** tokens = malloc(bufsize * sizeof(char*)); //her bir bolunen arguman
    char* token, ** tokens_backup;
    if (!tokens)//arguman boş
    {
        printf("tahsis edilemedi..");
        exit(EXIT_FAILURE);
    }
    token = strtok(line, LSH_TOK_DELIM);
    while (token != NULL)//arguman boş değil ise
    {
        tokens[position] = token;
        position++;

        if (position >= bufsize)
        {
            bufsize += LSH_TOK_BUFSIZE;
            tokens_backup = tokens;
            tokens = realloc(tokens, bufsize * sizeof(char*));
            if (!tokens) {
                free(tokens_backup);
                fprintf(stderr, "lsh: allocation error\n");
                exit(EXIT_FAILURE);
            }
        }
        token = strtok(NULL, LSH_TOK_DELIM);
    }
    tokens[position] = NULL;
    return tokens;
}
int main(int argc, char** argv)
{
    char* satir;
    char** args;
    int status;
    char location[100];

    do {
        getcwd(location, 100);//getcwd ile o andaki bulunan konumu alma
        printf("\033[1;33m%s/: sau > \033[0m", location);//farklı renkde location bilgisi
        satir = read_line();//okunan satir
        args = split_line(satir);//satirin bolundugu argumanlar
        status = run(args);//durum bilgisi

        free(satir);//olusturulan satiri bellekten silme
        free(args);//olusturulan argumanı bellekten silme
    } while (status);//durum değişkeni=1 olduğu surece kullanıcıdan girdi alan dongu (0 olursa exit yapılmıs demek)  

    return EXIT_SUCCESS;
}