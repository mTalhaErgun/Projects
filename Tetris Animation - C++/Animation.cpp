/****************************************************************************
**				��RENC� ADI: MUHAMMET TALHA ERG�N
**				��RENC� NUMARASI: G191210002
**				DERS GRUBU: C GRUBU
****************************************************************************/
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <iomanip>

using namespace std;

void koordinat(int x, int y) // �mleci belirtilen koordinata g�t�ren fonksiyon.
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void kursoruGizle() // �mlecin g�r�nmesini gizleyen fonksiyon.
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO    cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = false;
	SetConsoleCursorInfo(out, &cursorInfo);
}

void renkVer(int n) // Yaz�lara renk vermeyi sa�layan fonksiyon.
{
	HANDLE renkVer;

	renkVer = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(renkVer, n);
}

struct Sahne // Sahnenin �zelliklerini tan�mlayan yap�.
{
	int genislik;
	int yukseklik;
	string sahneKarakteri;
}sahneboyut;

struct LSekli // L �eklinin �zelliklerini tan�mlayan yap�.
{
	int CoordX;
	int CoordY;
	int boyut;
	string Karakter;
	int renk;
}sekil;

LSekli lSekliOlustur() // L �eklinin �zelliklerini olu�turan fonksiyon.
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

int asagi = sekil.CoordY; // �ekli a�a�� kayd�rmak i�in de�erleri tutan de�i�ken.
void lSekliCiz(LSekli Lharf) // L �eklini ekrana �izdiren fonksiyon.
{
	int tut; // �ekli �izerken belli koordinatlar� kaydeden de�i�ken.
	koordinat(Lharf.CoordX, asagi);
	renkVer(renk[sekil.renk]);

	for (int q = 0; q < Lharf.boyut; q++) // L �eklinin �st taban�n� �izdiren d�ng�.
	{
		cout << Lharf.Karakter;
	}

	for (int w = 0; w < Lharf.boyut; w++) // L �eklinin sol �st bo�lu�unu �izdiren d�ng�.
	{
		koordinat(Lharf.CoordX, asagi + w + 1);
		cout << Lharf.Karakter << setw(Lharf.boyut - 1) << Lharf.Karakter;
		tut = asagi + w + 1;
	}

	for (int e = 0; e < Lharf.boyut; e++) // L �eklindeki alt bo�lu�un �st�n� �izdiren d�ng�.
	{
		cout << Lharf.Karakter;
	}

	for (int r = 0; r < Lharf.boyut - 1; r++) // L �eklinin alt bo�lu�unu �izdiren d�ng�.
	{
		koordinat(Lharf.CoordX, tut + 1);
		if (Lharf.boyut == 2) // L �eklinin boyutu 2 olunca �ekildeki bozulmay� d�zelten ko�ul.
		{
			koordinat(Lharf.CoordX, asagi + 3 + r);
		}
		cout << Lharf.Karakter << setw((Lharf.boyut * 2) - 1) << Lharf.Karakter;
		tut++;
	}

	koordinat(Lharf.CoordX, tut + 1);
	for (int t = 0; t < Lharf.boyut * 2; t++) // L �eklinin alt taban�n� �izdiren for d�ng�s�.
	{
		cout << Lharf.Karakter;
	}
}

LSekli lSekliAsagiGotur(LSekli Lharf) // L �eklini a�a�� indiren fonksiyon.
{
	asagi++;

	return Lharf;
}

Sahne sahneOlustur() // Sahnenin �zelliklerini olu�turan fonksiyon.
{
	char randomSahneKarakteri[5] = { '*','#','$','+','@' };
	sahneboyut.sahneKarakteri = randomSahneKarakteri[rand() % 5];
	int randomGenislik[3] = { 30,40,50 };
	sahneboyut.genislik = randomGenislik[rand() % 3];
	sahneboyut.yukseklik = rand() % 11 + 20;

	return sahneboyut;
}

void sahneCiz(Sahne shn) // Sahnenin s�n�rlar�n� �izdiren fonksiyon.
{
	koordinat(0, 0);
	for (int i = 0; i <= shn.genislik; i++) // Sahnenin alt ve �st taban�n� �izdiren d�ng�.
	{

		renkVer(renk[rand() % 2]);
		koordinat(i, 0);
		cout << shn.sahneKarakteri;

		renkVer(renk[rand() % 2]);
		koordinat(i, shn.yukseklik - 1);
		cout << shn.sahneKarakteri;
	}
	for (int j = 1; j < shn.yukseklik; j++) // Sahnenin sa� ve sol s�n�r�n� �izdiren d�ng�.
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
		asagi = sekil.CoordY; // D�ng� her d�nd���nde �ekil tekrar Y koordinat�nda olu�turulur.

		while (true)
		{
			if (sahneboyut.genislik == 30 && sekil.CoordX > 16) // �eklin sahnenin sa� s�n�r�ndan d��ar� ta�mas�n� engelleyen ko�ul.
			{
				break;
			}
			system("cls");
			sahneCiz(sahneboyut);
			lSekliCiz(sekil);
			lSekliAsagiGotur(sekil);
			Sleep(100);
			if (asagi == sahneboyut.yukseklik - (sekil.boyut * 2) - 1) // �eklin taban� sahnenin alt s�n�r�na geldi�inde d�ng�y� sonland�ran ko�ul.
			{
				break;
			}
		}
	}
	system("pause");
}
