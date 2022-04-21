/****************************************************************************
**				ÖÐRENCÝ ADI: MUHAMMET TALHA ERGÜN
**				ÖÐRENCÝ NUMARASI: G191210002
**				DERS GRUBU: C GRUBU
****************************************************************************/
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <iomanip>

using namespace std;

void koordinat(int x, int y) // Ýmleci belirtilen koordinata götüren fonksiyon.
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void kursoruGizle() // Ýmlecin görünmesini gizleyen fonksiyon.
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO    cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = false;
	SetConsoleCursorInfo(out, &cursorInfo);
}

void renkVer(int n) // Yazýlara renk vermeyi saðlayan fonksiyon.
{
	HANDLE renkVer;

	renkVer = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(renkVer, n);
}

struct Sahne // Sahnenin özelliklerini tanýmlayan yapý.
{
	int genislik;
	int yukseklik;
	string sahneKarakteri;
}sahneboyut;

struct LSekli // L þeklinin özelliklerini tanýmlayan yapý.
{
	int CoordX;
	int CoordY;
	int boyut;
	string Karakter;
	int renk;
}sekil;

LSekli lSekliOlustur() // L þeklinin özelliklerini oluþturan fonksiyon.
{
	char randomSekilKarakteri[5] = { '*','#','$','+','@' };
	sekil.Karakter = randomSekilKarakteri[rand() % 5];
	sekil.CoordX = rand() % 21 + 5;
	sekil.CoordY = 3;
	sekil.boyut = rand() % 6 + 2;
	sekil.renk = rand() % 2;
	return sekil;
}

int renk[2] = { 9,11 };

int asagi = sekil.CoordY; // Þekli aþaðý kaydýrmak için deðerleri tutan deðiþken.
void lSekliCiz(LSekli Lharf) // L þeklini ekrana çizdiren fonksiyon.
{
	int tut; // Þekli çizerken belli koordinatlarý kaydeden deðiþken.
	koordinat(Lharf.CoordX, asagi);
	renkVer(renk[sekil.renk]);

	for (int q = 0; q < Lharf.boyut; q++) // L þeklinin üst tabanýný çizdiren döngü.
	{
		cout << Lharf.Karakter;
	}

	for (int w = 0; w < Lharf.boyut; w++) // L þeklinin sol üst boþluðunu çizdiren döngü.
	{
		koordinat(Lharf.CoordX, asagi + w + 1);
		cout << Lharf.Karakter << setw(Lharf.boyut - 1) << Lharf.Karakter;
		tut = asagi + w + 1;
	}

	for (int e = 0; e < Lharf.boyut; e++) // L þeklindeki alt boþluðun üstünü çizdiren döngü.
	{
		cout << Lharf.Karakter;
	}

	for (int r = 0; r < Lharf.boyut - 1; r++) // L þeklinin alt boþluðunu çizdiren döngü.
	{
		koordinat(Lharf.CoordX, tut + 1);
		if (Lharf.boyut == 2) // L þeklinin boyutu 2 olunca þekildeki bozulmayý düzelten koþul.
		{
			koordinat(Lharf.CoordX, asagi + 3 + r);
		}
		cout << Lharf.Karakter << setw((Lharf.boyut * 2) - 1) << Lharf.Karakter;
		tut++;
	}

	koordinat(Lharf.CoordX, tut + 1);
	for (int t = 0; t < Lharf.boyut * 2; t++) // L þeklinin alt tabanýný çizdiren for döngüsü.
	{
		cout << Lharf.Karakter;
	}
}

LSekli lSekliAsagiGotur(LSekli Lharf) // L þeklini aþaðý indiren fonksiyon.
{
	asagi++;

	return Lharf;
}

Sahne sahneOlustur() // Sahnenin özelliklerini oluþturan fonksiyon.
{
	char randomSahneKarakteri[5] = { '*','#','$','+','@' };
	sahneboyut.sahneKarakteri = randomSahneKarakteri[rand() % 5];
	int randomGenislik[3] = { 30,40,50 };
	sahneboyut.genislik = randomGenislik[rand() % 3];
	sahneboyut.yukseklik = rand() % 11 + 20;

	return sahneboyut;
}

void sahneCiz(Sahne shn) // Sahnenin sýnýrlarýný çizdiren fonksiyon.
{
	koordinat(0, 0);
	for (int i = 0; i <= shn.genislik; i++) // Sahnenin alt ve üst tabanýný çizdiren döngü.
	{

		renkVer(renk[rand() % 2]);
		koordinat(i, 0);
		cout << shn.sahneKarakteri;

		renkVer(renk[rand() % 2]);
		koordinat(i, shn.yukseklik - 1);
		cout << shn.sahneKarakteri;
	}
	for (int j = 1; j < shn.yukseklik; j++) // Sahnenin sað ve sol sýnýrýný çizdiren döngü.
	{
		renkVer(renk[rand() % 2]);
		koordinat(0, j);
		cout << shn.sahneKarakteri;

		renkVer(renk[rand() % 2]);
		koordinat(shn.genislik, j);
		cout << shn.sahneKarakteri;
	}
}

int main()
{
	srand(time(0));
	kursoruGizle();
	sahneOlustur();
	while (true)
	{
		lSekliOlustur();
		asagi = sekil.CoordY; // Döngü her döndüðünde þekil tekrar Y koordinatýnda oluþturulur.

		while (true)
		{
			if (sahneboyut.genislik == 30 && sekil.CoordX > 16) // Þeklin sahnenin sað sýnýrýndan dýþarý taþmasýný engelleyen koþul.
			{
				break;
			}
			system("cls");
			sahneCiz(sahneboyut);
			lSekliCiz(sekil);
			lSekliAsagiGotur(sekil);
			Sleep(100);
			if (asagi == sahneboyut.yukseklik - (sekil.boyut * 2) - 1) // Þeklin tabaný sahnenin alt sýnýrýna geldiðinde döngüyü sonlandýran koþul.
			{
				break;
			}
		}
	}
	system("pause");
}
