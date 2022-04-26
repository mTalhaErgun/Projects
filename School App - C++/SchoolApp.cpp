/****************************************************************************				
**				��RENC� ADI: MUHAMMET TALHA ERG�N
**				��RENC� NUMARASI: G191210002
**				DERS GRUBU: C
****************************************************************************/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <Windows.h>
#include <ctime>
#include <cstring>
#include <string>

using namespace std;

fstream isimDosyasi,soyisimDosyasi,kayitlarDosyasi;

char solUstKose = 201;
char duz = 205;
char sagUstKose = 187;
char solAltKose = 200;
char sagAltKose = 188;
char dikey = 186;

void koordinatAta(int x, int y) // Kurs�r� istenilen koordinata g�t�ren fonksiyon.
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void ustYazdir(int elemanSayisi) // �eklin �st k�sm�n� �izdiren fonksiyon.
{
	cout << solUstKose;
	for (int i = 0; i < elemanSayisi; i++)
	{
		cout << duz;
	}
	cout << sagUstKose;
}
void solOrtaYazdir() // �eklin sol k�sm�n� �izdiren fonksiyon.
{
	for (int i=0;i<1;i++)
	{
		cout << dikey;
	}
}
void sagOrtaYazdir() // �eklin sa� k�sm�n� �izdiren fonksiyon.
{
	for (int i=0;i<1;i++)
	{
		cout << dikey;
	}
}
void altYazdir(int elemanSayisi) // �eklin alt k�sm�n� �izdiren fonksiyon.
{
	cout << solAltKose;
	for (int i = 0; i < elemanSayisi; i++)
	{
		cout << duz;
	}
	cout << sagAltKose;
}

string isimDizisi[5000];
string soyisimDizisi[300];

class Ogrenci // ��renci bilgilerini olu�turan s�n�f.
{
	private:
		string m_isim;
		string m_soyisim;
		int m_numara;
	
	public:
		string ogrIsim;
		string ogrSoyisim;
		int ogrNumara;
		string isim;
		
		string isimSec() // �simler dosyas�ndan rastgele isim se�en fonksiyon.
		{
			isimDosyasi.open("isimler.txt");

			int i=0;
			while(!isimDosyasi.eof()) // Dosya sonuna kadar isimleri okuyan d�ng�.
			{
				isimDosyasi >> isim;
				isimDizisi[i] = isim;
				i++;
			}

			isimDosyasi.close();
			m_isim = isimDizisi[rand()%4900];
			return m_isim;
		}
		
		string soyisimSec() // Soyisimler dosyas�ndan rastgele soyisim se�en fonksiyon.
		{
			soyisimDosyasi.open("soyisimler.txt");
			int j=0;
			while (!soyisimDosyasi.eof()) // Dosya sonuna kadar soyisimleri okuyan d�ng�.
			{
				soyisimDosyasi >> isim;
				soyisimDizisi[j] = isim;
				j++;
			}
			soyisimDosyasi.close();
			m_soyisim = soyisimDizisi[rand()%270];
			return m_soyisim;
		}
		
		int numaraSec() // Rastgele ��renci numaras� olu�turan fonksiyon.
		{
			m_numara = rand()%9999+1;
			return m_numara;
		}
};

string secim;

class Sinif // S�n�f bilgilerini olu�turan s�n�f.
{
	public:
		string harf[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","R","S","T","U","V","X","Y","W","Z","Q"};
		Ogrenci ogrenciler[100];
		int ogrenciSayisi;
		int ogrSayiDizisi[100];
		int sinifSayisi = 4;
		
		void ogrenciEkle () // S�n�flara ��renci ekleyen fonksiyon.
		{
			koordinatAta(0,44);
			cout << "Ogrenci ekleyeceginiz sinifin ismini giriniz: ";
			cin >> secim;
		}
};

int menuSecim;

class Okul // Okul bilgilerini olu�turan s�n�f.
{
	public:
		Sinif snf;
		Sinif sinif[100];
		Ogrenci o;
		int orSayisi = 0;
		string sinifIsmi[10];
		
		void sinifOlustur() // S�n�flar� olu�turan fonksiyon.
		{
			for (int i=0;i<10;i++) // S�n�f ismini integer de�erden stringe d�n��t�ren d�ng�.
			{	
				sinifIsmi[i] = to_string(i+1) + snf.harf[rand()%26];
			}
			
			for (int i=0;i<10;i++) 
			{
				for (int j=0;j<30;j++) // ��renci isim, soyisim ve numaralar�n� olu�turan d�ng�.
				{
					sinif[i].ogrenciler[j].ogrIsim = o.isimSec();
					sinif[i].ogrenciler[j].ogrSoyisim = o.soyisimSec();
					sinif[i].ogrenciler[j].ogrNumara = o.numaraSec();
				}
			}
			
			for (int i=0;i<snf.sinifSayisi;i++) // S�n�flara rastgele ��renci olu�turan d�ng�.
			{
				snf.ogrenciSayisi = rand()%5+1;
				snf.ogrSayiDizisi[i] = snf.ogrenciSayisi;
			}
		}
		
		void sinifEkle() // S�n�f ekleyen fonksiyon.
		{
			snf.sinifSayisi++;
		}
			
		void ogrenciDegistir() // Se�ilen iki ��renciyi birbiriyle de�i�tiren fonksiyon.
		{
			int numara1;
			int numara2;
			string isimYedek;
			string soyisimYedek;
			int numaraYedek;
			int iKaydet1, jKaydet1, iKaydet2, jKaydet2;
			
			koordinatAta(0,44);
			cout << "Degistireceginiz 2 ogrencinin numarasini giriniz.." << endl;
			cout << "Numara1: ";
			cin >> numara1;
			cout << "Numara2: ";
			cin >> numara2;
			
			for (int i=0;i<snf.sinifSayisi;i++)
			{
				for (int j=0;j<100;j++) // Se�ilen ��rencilerin numaras�ndan ��renciyi bulan d�ng�.
				{
					if (sinif[i].ogrenciler[j].ogrNumara == numara1)
					{						
						iKaydet1 = i;
						jKaydet1 = j;
					}
					
					if (sinif[i].ogrenciler[j].ogrNumara == numara2)
					{
						iKaydet2 = i;
						jKaydet2 = j;
					}
				}
			}
			
			cout << endl;
			cout << "Ogrenci Adi: " << sinif[iKaydet1].ogrenciler[jKaydet1].ogrIsim << endl;
			cout << "Ogrenci Soyadi: " << sinif[iKaydet1].ogrenciler[jKaydet1].ogrSoyisim << endl;
			cout << "Ogrenci Numarasi: " << sinif[iKaydet1].ogrenciler[jKaydet1].ogrNumara << endl;
			
			cout << endl;
			cout << "Ogrenci Adi: " << sinif[iKaydet2].ogrenciler[jKaydet2].ogrIsim << endl;
			cout << "Ogrenci Soyadi: " << sinif[iKaydet2].ogrenciler[jKaydet2].ogrSoyisim << endl;
			cout << "Ogrenci Numarasi: " << sinif[iKaydet2].ogrenciler[jKaydet2].ogrNumara << endl;
			
			system("pause");
			
			isimYedek = sinif[iKaydet1].ogrenciler[jKaydet1].ogrIsim;
			sinif[iKaydet1].ogrenciler[jKaydet1].ogrIsim = sinif[iKaydet2].ogrenciler[jKaydet2].ogrIsim;
			sinif[iKaydet2].ogrenciler[jKaydet2].ogrIsim = isimYedek;
			
			soyisimYedek = sinif[iKaydet1].ogrenciler[jKaydet1].ogrSoyisim;
			sinif[iKaydet1].ogrenciler[jKaydet1].ogrSoyisim = sinif[iKaydet2].ogrenciler[jKaydet2].ogrSoyisim;
			sinif[iKaydet2].ogrenciler[jKaydet2].ogrSoyisim = soyisimYedek;
			
			numaraYedek = sinif[iKaydet1].ogrenciler[jKaydet1].ogrNumara;
			sinif[iKaydet1].ogrenciler[jKaydet1].ogrNumara = sinif[iKaydet2].ogrenciler[jKaydet2].ogrNumara;
			sinif[iKaydet2].ogrenciler[jKaydet2].ogrNumara = numaraYedek;
		}
				
		void ekranaCikart() // T�m s�n�flar� ve ��rencileri ekrana yazd�ran fonksiyon.
		{
			int dongudenCik = 0;
			int x=0;
			int y=0;
			int z=0;
			int t=0;
			
			string oku;
			
			kayitlarDosyasi.open("kayitlar.txt");
			kayitlarDosyasi >> oku;
			
			while(!kayitlarDosyasi.eof()) // Kay�tlar dosyas�n�n sonuna gelene kadar dosyay� okuyan fonksiyon.
			{		
				koordinatAta(x,y);
				ustYazdir(13);
				koordinatAta(x,y+1);
				solOrtaYazdir();
				cout << setw(7) << oku << setw(7);
				sagOrtaYazdir();
				koordinatAta(x,y+2);
				altYazdir(13);
				kayitlarDosyasi >> oku;
				
				x+=16;
				kayitlarDosyasi >> oku;
				while (!kayitlarDosyasi.eof()) // Kay�tlar dosyas�n�n sonuna gelene kadar dosyay� okuyan fonksiyon.
				{
					for(int i=0;i<snf.sinifSayisi;i++) // Dosyay� okurken s�n�f ismine gelip gelmedi�ini kontrol eden d�ng�.
					{
						if (oku == sinifIsmi[i])
						{
							dongudenCik++;
							break;
						}
					}
					
					if (dongudenCik) // Dosyay� okurken s�n�f ismine geldi�inde d�ng�den ��karan ko�ul.
					{
						dongudenCik--;
						break;
					}
				
					koordinatAta(t+1,z+3);
					ustYazdir(11);
					koordinatAta(t+1,z+4);
					solOrtaYazdir();
					cout << oku;
					koordinatAta(t+13,z+4);
					sagOrtaYazdir();
					kayitlarDosyasi >> oku;
					koordinatAta(t+1,z+5);
					solOrtaYazdir();
					cout << oku;
					koordinatAta(t+13,z+5);
					sagOrtaYazdir();
					kayitlarDosyasi >> oku;
					koordinatAta(t+1,z+6);
					solOrtaYazdir();
					cout << oku;
					koordinatAta(t+13,z+6);
					sagOrtaYazdir();
					koordinatAta(t+1,z+7);
					altYazdir(11);
					z = z+5;
					
					kayitlarDosyasi >> oku;
				}
				t+=16;
				z=0;
			}
			kayitlarDosyasi.close();
		}
	
		void kayitlaraYazdir() // T�m s�n�flar�, ��renci say�lar�n� ve ��rencileri kay�tlar dosyas�na yazd�ran fonksiyon.
		{
			int iSayisiKaydet;
			int yedekteTut;
			kayitlarDosyasi.open("kayitlar.txt",ios::out);
			
			for (int i=0;i<snf.sinifSayisi;i++) // Bilgileri yazd�ran genel d�ng�.
			{			
				kayitlarDosyasi << sinifIsmi[i] << endl;

				if (secim == sinifIsmi[i] && menuSecim == 1) /* ��renci ekleme se�ene�i se�ildi�inde, se�ilen s�n�f�n d�ng� an�ndaki s�n�f ismine
				e�it olup olmad���n� kontrol eden ve ��renci say�s�n� 1 artt�ran ko�ul. */
				{
					snf.ogrSayiDizisi[i]++;
				}
	
				kayitlarDosyasi << snf.ogrSayiDizisi[i] << endl;
				for (int j=0;j<snf.ogrSayiDizisi[i];j++) // Kay�tlar dosyas�na ��renci bilgilerini yazd�ran d�ng�.
				{
					kayitlarDosyasi << sinif[i].ogrenciler[j].ogrIsim << " ";
					kayitlarDosyasi << sinif[i].ogrenciler[j].ogrSoyisim << " ";
					kayitlarDosyasi << sinif[i].ogrenciler[j].ogrNumara << endl;
					
					iSayisiKaydet = i;
				}
			}
			
			if (snf.sinifSayisi != 4 && menuSecim == 2) // S�n�f ekle se�ene�i se�ildi�inde s�n�f say�s�n�n farkl� olup olmad���n� kontrol eden ko�ul.
			{
				if (secim == sinifIsmi[iSayisiKaydet+1]) // ��renci eklendi�inde s�n�f isminin se�ilen s�n�f isminde olup olmad���n� kontrol eden ko�ul.
				{
					orSayisi++;
				}
				
				for (int k=0;k<orSayisi;k++) // Eklenen s�n�f�n ��rencilerini kay�tlar dosyas�na yazd�ran d�ng�.
				{
					kayitlarDosyasi << sinif[iSayisiKaydet].ogrenciler[k].ogrIsim << " ";
					kayitlarDosyasi << sinif[iSayisiKaydet].ogrenciler[k].ogrSoyisim << " ";
					kayitlarDosyasi << sinif[iSayisiKaydet].ogrenciler[k].ogrNumara << endl;
				}
			}
			kayitlarDosyasi.close();
		}
};


class DosyaYonetim // Dosyalardaki bilgileri okuyan ve dosyalara bilgi yazan s�n�f.
{
	public:
		Ogrenci og;
		Sinif sinif[100];
		
/*		string isimGetir() // Rastgele isim se�en fonksiyon.
		{
			string ogrenciIsmi[100];
			for (int i=0;i<100;i++) // ��renci isimlerini diziye aktaran d�ng�.
			{
				ogrenciIsmi[i] = og.isimSec();
			}
			return ogrenciIsmi[rand()%100];
		}
		
		string soyisimGetir() // Rastgele soyisim se�en fonksiyon.
		{
			string ogrenciSoyismi[100];
			for (int i=0;i<100;i++) // ��renci soyisimlerini diziye aktaran d�ng�.
			{
				ogrenciSoyismi[i] = og.soyisimSec();
			}
			return ogrenciSoyismi[rand()%100];
		}
		
		int numaraGetir() // Rastgele numara se�en fonksiyon.
		{
			int ogrenciNo[100];
			for (int i=0;i<100;i++) // Numaralar� diziye aktaran d�ng�.
			{
				ogrenciNo[100] = og.numaraSec();
			}
			return ogrenciNo[rand()%100];
		}
*/	
};

class Program // Program�n �al���rken d�ng� halinde kalmas�n� sa�layan ve men�y� olu�turan s�n�f.
{
	public:
		Okul okul;
		Sinif sinif;
		Ogrenci ogr;
		void calistir() // Program� �al��t�ran �zellikleri bar�nd�ran fonksiyon.
		{
			srand(time(0));
			int donguSon = 1;
			okul.sinifOlustur();
			while(donguSon) // Program� kapatana kadar a��k b�rakan d�ng�.
			{
				system("cls");
				okul.kayitlaraYazdir();
				okul.ekranaCikart();


				koordinatAta(0,35);
				cout << "1. Ogrenci Ekle" << endl;
				cout << "2. Sinif Ekle" << endl;
				cout << "3. Ogrenci Degistir" << endl;
				cout << "4. Cikis" << endl << endl;
				cout << "Yapacaginiz islemi secin: ";
				
				cin >> menuSecim;
				switch(menuSecim) // Kullan�c�n�n hangi se�ene�i se�ti�ini kontrol edip i�lemi yapt�r�r.
				{
					case 1:
						sinif.ogrenciEkle();
						break;
					case 2:
						okul.sinifEkle();
						break;
					case 3:
						okul.ogrenciDegistir();
						break;
					case 4:
						donguSon = 0;
						break;
					default:
						cout << endl << "Lutfen menudeki seceneklerden birisini seciniz." << endl << endl;
						system("pause");
						break;	
				}	
			}
		}
};


int main()
{
	Program prog;
	prog.calistir();
	return 0;
}
