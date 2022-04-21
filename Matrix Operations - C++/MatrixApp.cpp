/****************************************************************************				
**				��RENC� ADI: MUHAMMET TALHA ERG�N
**				��RENC� NUMARASI: G191210002
**				DERS GRUBU: C GRUBU
****************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int cagirMatris (int matrisboyut,int matris[25][25])
{
	cout << endl << "    ";
	for (int k=1;k<=matrisboyut;k++) // Matrisin s�tunlar�n�n �st�ne ka��nc� s�tun oldu�unu yazan for d�ng�s�.
	{
		if (k/10>=1) // E�er say� iki basamakl� olursa kaymay� engellemek i�in olu�turulan ko�ul.
		{
			cout << "   " << k;
			continue;
		}
		cout << "    " << k;
	}
	cout << endl;
	
	cout << "    ";
	for (int t=0;t<matrisboyut;t++) // S�tun say�lar�n�n alt�na alt �izgi (_) olu�turan for d�ng�s�.
	{
		cout << "    _";
	}
	cout << endl << endl << endl;
	
	for (int i=0;i<matrisboyut;i++) 
	{
		if ((i+1)/10>=1) // E�er sat�r say�s� iki basamakl� olursa kaymay� engellemek i�in olu�turulan ko�ul.
		{
			cout << i+1 << "| ";
		}
		else
		{
			cout << i+1 << " | ";  // Matrisin sat�rlar�n�n ka��nc� sat�r oldu�unu yazar ve '|' i�aretini olu�turur.
		}
		
		for (int j=0;j<matrisboyut;j++) // Matris elemanlar�na rastgele de�erler atayan ve ekrana yazd�ran for d�ng�s�.
		{
			if (matris[i][j]/10>=100) // E�er bir eleman d�rt basamakl� olursa kaymay� engellemek i�in olu�turulan ko�ul.
			{
				cout << " " << matris[i][j];
				continue;
			}
			else if (matris[i][j]/10>=10 && matris[i][j]/10<100) // E�er bir eleman �� basamakl� olursa kaymay� engellemek i�in olu�turulan ko�ul.
			{
				cout << "  " << matris[i][j];
				continue;
			}
			else if (matris[i][j]/10>=1 && matris[i][j]/10<10) // E�er bir eleman iki basamakl� olursa kaymay� engellemek i�in olu�turulan ko�ul.
			{
				cout << "   " << matris[i][j];
				continue;
			}
			else // E�er bir eleman bir basamakl� olursa kaymay� engellemek i�in olu�turulan ko�ul.
			{
				cout << "    " << matris[i][j];
				continue;
			}
		}
		cout << endl << endl << endl;
	}
	return matris[25][25];
}

int main()
{
	srand(time(0));
	int matrisboyut,satir,sutun,islemSecimi,yedek,yedek1,yedek2,yedek3;
	cout << "Matris boyutu girin: ";
	cin >> matrisboyut;
	int matris[25][25];
	
	while(matrisboyut<5 || matrisboyut>25) // Matris do�ru girilene kadar kontrol eden while d�ng�s�.
	{
		cout << endl << "Matris boyutu 5'ten buyuk, 25'den kucuk olmalidir. Lutfen farkli bir deger girin" << endl;
		cout << "Matris boyutu girin: ";
		cin >> matrisboyut;
	}
	
	cout << endl << "    ";
	for (int k=1;k<=matrisboyut;k++) // Matrisin s�tunlar�n�n �st�ne ka��nc� s�tun oldu�unu yazan for d�ng�s�.
	{
		if (k/10>=1) // E�er say� iki basamakl� olursa kaymay� engellemek i�in olu�turulan ko�ul.
		{
			cout << "   " << k;
			continue;
		}
		cout << "    " << k;
	}
	cout << endl;
	
	cout << "    ";
	for (int t=0;t<matrisboyut;t++) // S�tun say�lar�n�n alt�na alt �izgi (_) olu�turan for d�ng�s�.
	{
		cout << "    _";
	}
	cout << endl << endl << endl;
	
	for (int i=0;i<matrisboyut;i++) 
	{
		if ((i+1)/10>=1) // E�er sat�r say�s� iki basamakl� olursa kaymay� engellemek i�in olu�turulan ko�ul.
		{
			cout << i+1 << "| ";
		}
		else
		{
			cout << i+1 << " | ";  // Matrisin sat�rlar�n�n ka��nc� sat�r oldu�unu yazar ve '|' i�aretini olu�turur.
		}
		
		for (int j=0;j<matrisboyut;j++) // Matris elemanlar�na rastgele de�erler atayan ve ekrana yazd�ran for d�ng�s�.
		{
			matris[i][j]=rand()%9 + 1;
			cout << "    " << matris[i][j];
		}
		cout << endl << endl << endl;
	}
	
	cout << "1. Satir ile Sutun Degistir" << endl;
	cout << "2. Tek Sayilari Basa Al (Satir)" << endl;
	cout << "3. Ters Cevir (Sutun)" << endl;
	cout << "4. Toplamlari Yazdir" << endl << endl;
	cout << "1 ila 4 arasinda bir deger girin: ";
	cin >> islemSecimi;
	cout << endl;
	
	for (int i=0;i<1;) // ��lemler i�inde istenilen de�erlerden yanl�� girilen olursa tekrar i�lem se�tirmek i�in olu�turulan for d�ng�s�.
	{
		switch(islemSecimi) // Men�den i�lem se�tirir.
		{
			case 1: // S�tun ile sat�r de�i�im i�lemi.
				cout << "Satir ve Sutun degerlerini girin." << endl;
				cout << "Satir: ";
				cin >> satir;
				cout << "Sutun: ";
				cin >> sutun;
				if (satir>matrisboyut || sutun>matrisboyut) // Sat�r�n ve sutunun matris boyutundan b�y�k olup olmad���n� kontrol eder.
				{
					cout << "Satir veya Sutun matris boyutundan buyuk olamaz." << endl << endl;
					
					cagirMatris(matrisboyut, matris);
					
					cout << "1. Sutun ile Satir Degistir" << endl;
					cout << "2. Tek Sayilari Basa Al (Satir)" << endl;
					cout << "3. Ters Cevir (Sutun)" << endl;
					cout << "4. Toplamlari Yazdir" << endl << endl;
					cout << "1 ila 4 arasinda bir deger girin: ";
					cin >> islemSecimi;
					continue;
				}
					
				yedek3=matris[satir-1][sutun-1]; // Kesi�en eleman� yedekte tutan de�i�ken.
				yedek2=matris[satir-1][satir-1]+matris[sutun-1][sutun-1]; // Kesi�en eleman�n yerine yaz�lacak olan elemanlar�n toplam�n� yedekte tutan de�i�ken.
				for (int u=0;u<matrisboyut;u++) // Sat�r elemanlar�yla s�tun elemanlar�n� de�i�tiren for d�ng�s�.	
				{
					yedek1=matris[satir-1][u];
					matris[satir-1][u]=matris[u][sutun-1];
					matris[u][sutun-1]=yedek1;
				}
				matris[satir-1][sutun-1]=yedek2;
				matris[sutun-1][sutun-1]=yedek3;
					
				if (satir==sutun)
				{
					matris[satir-1][satir-1]=2*matris[satir-1][satir-1];
				}
					
				cagirMatris(matrisboyut, matris);
				break;
				
				case 2: // Tek say�lar� ba�a alma i�lemi.
					cout << "Satir degeri girin: ";
					cin >> satir;
					if (satir>matrisboyut) // Girilen sat�r de�erinin, matris boyutundan b�y�k olup olmad���n� kontrol eder.
					{
						cout << "Satir, matris boyutundan buyuk olamaz." << endl << endl;
						
						cagirMatris(matrisboyut, matris);
				
						cout << "1. Sutun ile Satir Degistir" << endl;
						cout << "2. Tek Sayilari Basa Al (Satir)" << endl;
						cout << "3. Ters Cevir (Sutun)" << endl;
						cout << "4. Toplamlari Yazdir" << endl << endl;
						cout << "1 ila 4 arasinda bir deger girin: ";
						cin >> islemSecimi;
						continue;
					}
					
					for (int q=0;q<matrisboyut;q++)
					{
						for (int a=0;a<matrisboyut-1;a++) // Tek say�lar� sat�r�n ba��na alan for d�ng�s�.
						{
							if (matris[satir-1][a]%2==0) // Sat�rdaki �ift say�lar� bulur.
							{
								yedek=matris[satir-1][a];
								matris[satir-1][a]=matris[satir-1][a+1];
								matris[satir-1][a+1]=yedek;
							}
						}
					}
					
					cagirMatris(matrisboyut, matris);
						
					break;
					
				case 3: // S�tunu ters �evirme i�lemi.
					cout << "Sutun degeri girin: ";
					cin >> sutun;
					if (sutun>matrisboyut) // Girilen s�tun de�erinin, matrisin boyutundan b�y�k olup olmad���n� kontrol eder.
					{
						cout << "Sutun, matris boyutundan buyuk olamaz." << endl << endl;
					
						cagirMatris(matrisboyut, matris);
								
						cout << "1. Sutun ile Satir Degistir" << endl;
						cout << "2. Tek Sayilari Basa Al (Satir)" << endl;
						cout << "3. Ters Cevir (Sutun)" << endl;
						cout << "4. Toplamlari Yazdir" << endl << endl;
						cout << "1 ila 4 arasinda bir deger girin: ";
						cin >> islemSecimi;
						continue;
					}
						
					for (int x=0;x<matrisboyut/2;x++) // Se�ilen s�tunu ters �eviren for d�ng�s�.
					{
						yedek=matris[x][sutun-1];
						matris[x][sutun-1]=matris[matrisboyut-1-x][sutun-1];
						matris[matrisboyut-1-x][sutun-1]=yedek;
					}
					
					cagirMatris(matrisboyut, matris);
					
					break;
					
				case 4: // Matris elemanlar�n� toplama i�lemi.
						int toplam;
						toplam=0;
						for (int b=0;b<matrisboyut;b++) // Matris boyutu kadar d�ng�y� tekrar ettirir.
						{
							for (int c=0;c<matrisboyut;c++) // Matris elemanlar�n�n toplam�n� bulan for d�ng�s�.
							{
								toplam+=matris[b][c];
							}
						}
						
						yedek=toplam;
						for (int d=0;d<matrisboyut;d++) // D�ng�y� 0'dan matrisin boyutu kadar devam ettirir.
						{
							for (int e=0;e<matrisboyut;e++) // Matrisin ilk eleman�n�n, matrisin toplam�na e�itlenmesinden sonra bir sonraki eleman� bir �nceki de�erden ��kar�p yeni matris eleman� olarak yazd�ran d�ng�.
							{
								if(d==0 && e==0) // Toplam de�erinden matrisin ilk eleman�n�n de�eri tekrar ��kar�lmas�n diye olu�turulan ko�ul.
								{
									continue;
								}
								matris[d][e]=toplam-matris[d][e];
								toplam=matris[d][e];
							}
						}
						matris[0][0]=yedek;
						cout << "TOPLAM = " << yedek << endl << endl;
						
						cagirMatris(matrisboyut, matris);
						
						break;
						
				default: // Men�deki de�erlerden biri se�ilmezse yap�lacak i�lem.
					cout << "1 ila 4 arasinda secim yapmalisiniz.." << endl;
					cout << "1 ila 4 arasinda bir deger girin: ";
					cin >> islemSecimi;
					continue;			
		}
		i++;
	}
	system("pause");
}
