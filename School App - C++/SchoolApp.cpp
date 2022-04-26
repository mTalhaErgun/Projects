/****************************************************************************				
**				ÖÐRENCÝ ADI: MUHAMMET TALHA ERGÜN
**				ÖÐRENCÝ NUMARASI: G191210002
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

void koordinatAta(int x, int y) // Kursörü istenilen koordinata götüren fonksiyon.
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void ustYazdir(int elemanSayisi) // Þeklin üst kýsmýný çizdiren fonksiyon.
{
	cout << solUstKose;
	for (int i = 0; i < elemanSayisi; i++)
	{
		cout << duz;
	}
	cout << sagUstKose;
}
void solOrtaYazdir() // Þeklin sol kýsmýný çizdiren fonksiyon.
{
	for (int i=0;i<1;i++)
	{
		cout << dikey;
	}
}
void sagOrtaYazdir() // Þeklin sað kýsmýný çizdiren fonksiyon.
{
	for (int i=0;i<1;i++)
	{
		cout << dikey;
	}
}
void altYazdir(int elemanSayisi) // Þeklin alt kýsmýný çizdiren fonksiyon.
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

class Ogrenci // Öðrenci bilgilerini oluþturan sýnýf.
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
		
		string isimSec() // Ýsimler dosyasýndan rastgele isim seçen fonksiyon.
		{
			isimDosyasi.open("isimler.txt");

			int i=0;
			while(!isimDosyasi.eof()) // Dosya sonuna kadar isimleri okuyan döngü.
			{
				isimDosyasi >> isim;
				isimDizisi[i] = isim;
				i++;
			}

			isimDosyasi.close();
			m_isim = isimDizisi[rand()%4900];
			return m_isim;
		}
		
		string soyisimSec() // Soyisimler dosyasýndan rastgele soyisim seçen fonksiyon.
		{
			soyisimDosyasi.open("soyisimler.txt");
			int j=0;
			while (!soyisimDosyasi.eof()) // Dosya sonuna kadar soyisimleri okuyan döngü.
			{
				soyisimDosyasi >> isim;
				soyisimDizisi[j] = isim;
				j++;
			}
			soyisimDosyasi.close();
			m_soyisim = soyisimDizisi[rand()%270];
			return m_soyisim;
		}
		
		int numaraSec() // Rastgele öðrenci numarasý oluþturan fonksiyon.
		{
			m_numara = rand()%9999+1;
			return m_numara;
		}
};

string secim;

class Sinif // Sýnýf bilgilerini oluþturan sýnýf.
{
	public:
		string harf[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","R","S","T","U","V","X","Y","W","Z","Q"};
		Ogrenci ogrenciler[100];
		int ogrenciSayisi;
		int ogrSayiDizisi[100];
		int sinifSayisi = 4;
		
		void ogrenciEkle () // Sýnýflara öðrenci ekleyen fonksiyon.
		{
			koordinatAta(0,44);
			cout << "Ogrenci ekleyeceginiz sinifin ismini giriniz: ";
			cin >> secim;
		}
};

int menuSecim;

class Okul // Okul bilgilerini oluþturan sýnýf.
{
	public:
		Sinif snf;
		Sinif sinif[100];
		Ogrenci o;
		int orSayisi = 0;
		string sinifIsmi[10];
		
		void sinifOlustur() // Sýnýflarý oluþturan fonksiyon.
		{
			for (int i=0;i<10;i++) // Sýnýf ismini integer deðerden stringe dönüþtüren döngü.
			{	
				sinifIsmi[i] = to_string(i+1) + snf.harf[rand()%26];
			}
			
			for (int i=0;i<10;i++) 
			{
				for (int j=0;j<30;j++) // Öðrenci isim, soyisim ve numaralarýný oluþturan döngü.
				{
					sinif[i].ogrenciler[j].ogrIsim = o.isimSec();
					sinif[i].ogrenciler[j].ogrSoyisim = o.soyisimSec();
					sinif[i].ogrenciler[j].ogrNumara = o.numaraSec();
				}
			}
			
			for (int i=0;i<snf.sinifSayisi;i++) // Sýnýflara rastgele öðrenci oluþturan döngü.
			{
				snf.ogrenciSayisi = rand()%5+1;
				snf.ogrSayiDizisi[i] = snf.ogrenciSayisi;
			}
		}
		
		void sinifEkle() // Sýnýf ekleyen fonksiyon.
		{
			snf.sinifSayisi++;
		}
			
		void ogrenciDegistir() // Seçilen iki öðrenciyi birbiriyle deðiþtiren fonksiyon.
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
				for (int j=0;j<100;j++) // Seçilen öðrencilerin numarasýndan öðrenciyi bulan döngü.
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
				
		void ekranaCikart() // Tüm sýnýflarý ve öðrencileri ekrana yazdýran fonksiyon.
		{
			int dongudenCik = 0;
			int x=0;
			int y=0;
			int z=0;
			int t=0;
			
			string oku;
			
			kayitlarDosyasi.open("kayitlar.txt");
			kayitlarDosyasi >> oku;
			
			while(!kayitlarDosyasi.eof()) // Kayýtlar dosyasýnýn sonuna gelene kadar dosyayý okuyan fonksiyon.
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
				while (!kayitlarDosyasi.eof()) // Kayýtlar dosyasýnýn sonuna gelene kadar dosyayý okuyan fonksiyon.
				{
					for(int i=0;i<snf.sinifSayisi;i++) // Dosyayý okurken sýnýf ismine gelip gelmediðini kontrol eden döngü.
					{
						if (oku == sinifIsmi[i])
						{
							dongudenCik++;
							break;
						}
					}
					
					if (dongudenCik) // Dosyayý okurken sýnýf ismine geldiðinde döngüden çýkaran koþul.
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
	
		void kayitlaraYazdir() // Tüm sýnýflarý, öðrenci sayýlarýný ve öðrencileri kayýtlar dosyasýna yazdýran fonksiyon.
		{
			int iSayisiKaydet;
			int yedekteTut;
			kayitlarDosyasi.open("kayitlar.txt",ios::out);
			
			for (int i=0;i<snf.sinifSayisi;i++) // Bilgileri yazdýran genel döngü.
			{			
				kayitlarDosyasi << sinifIsmi[i] << endl;

				if (secim == sinifIsmi[i] && menuSecim == 1) /* Öðrenci ekleme seçeneði seçildiðinde, seçilen sýnýfýn döngü anýndaki sýnýf ismine
				eþit olup olmadýðýný kontrol eden ve öðrenci sayýsýný 1 arttýran koþul. */
				{
					snf.ogrSayiDizisi[i]++;
				}
	
				kayitlarDosyasi << snf.ogrSayiDizisi[i] << endl;
				for (int j=0;j<snf.ogrSayiDizisi[i];j++) // Kayýtlar dosyasýna öðrenci bilgilerini yazdýran döngü.
				{
					kayitlarDosyasi << sinif[i].ogrenciler[j].ogrIsim << " ";
					kayitlarDosyasi << sinif[i].ogrenciler[j].ogrSoyisim << " ";
					kayitlarDosyasi << sinif[i].ogrenciler[j].ogrNumara << endl;
					
					iSayisiKaydet = i;
				}
			}
			
			if (snf.sinifSayisi != 4 && menuSecim == 2) // Sýnýf ekle seçeneði seçildiðinde sýnýf sayýsýnýn farklý olup olmadýðýný kontrol eden koþul.
			{
				if (secim == sinifIsmi[iSayisiKaydet+1]) // Öðrenci eklendiðinde sýnýf isminin seçilen sýnýf isminde olup olmadýðýný kontrol eden koþul.
				{
					orSayisi++;
				}
				
				for (int k=0;k<orSayisi;k++) // Eklenen sýnýfýn öðrencilerini kayýtlar dosyasýna yazdýran döngü.
				{
					kayitlarDosyasi << sinif[iSayisiKaydet].ogrenciler[k].ogrIsim << " ";
					kayitlarDosyasi << sinif[iSayisiKaydet].ogrenciler[k].ogrSoyisim << " ";
					kayitlarDosyasi << sinif[iSayisiKaydet].ogrenciler[k].ogrNumara << endl;
				}
			}
			kayitlarDosyasi.close();
		}
};


class DosyaYonetim // Dosyalardaki bilgileri okuyan ve dosyalara bilgi yazan sýnýf.
{
	public:
		Ogrenci og;
		Sinif sinif[100];
		
/*		string isimGetir() // Rastgele isim seçen fonksiyon.
		{
			string ogrenciIsmi[100];
			for (int i=0;i<100;i++) // Öðrenci isimlerini diziye aktaran döngü.
			{
				ogrenciIsmi[i] = og.isimSec();
			}
			return ogrenciIsmi[rand()%100];
		}
		
		string soyisimGetir() // Rastgele soyisim seçen fonksiyon.
		{
			string ogrenciSoyismi[100];
			for (int i=0;i<100;i++) // Öðrenci soyisimlerini diziye aktaran döngü.
			{
				ogrenciSoyismi[i] = og.soyisimSec();
			}
			return ogrenciSoyismi[rand()%100];
		}
		
		int numaraGetir() // Rastgele numara seçen fonksiyon.
		{
			int ogrenciNo[100];
			for (int i=0;i<100;i++) // Numaralarý diziye aktaran döngü.
			{
				ogrenciNo[100] = og.numaraSec();
			}
			return ogrenciNo[rand()%100];
		}
*/	
};

class Program // Programýn çalýþýrken döngü halinde kalmasýný saðlayan ve menüyü oluþturan sýnýf.
{
	public:
		Okul okul;
		Sinif sinif;
		Ogrenci ogr;
		void calistir() // Programý çalýþtýran özellikleri barýndýran fonksiyon.
		{
			srand(time(0));
			int donguSon = 1;
			okul.sinifOlustur();
			while(donguSon) // Programý kapatana kadar açýk býrakan döngü.
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
				switch(menuSecim) // Kullanýcýnýn hangi seçeneði seçtiðini kontrol edip iþlemi yaptýrýr.
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
