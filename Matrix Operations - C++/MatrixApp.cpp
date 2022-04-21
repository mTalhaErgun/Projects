/****************************************************************************				
**				ÖÐRENCÝ ADI: MUHAMMET TALHA ERGÜN
**				ÖÐRENCÝ NUMARASI: G191210002
**				DERS GRUBU: C GRUBU
****************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int cagirMatris (int matrisboyut,int matris[25][25])
{
	cout << endl << "    ";
	for (int k=1;k<=matrisboyut;k++) // Matrisin sütunlarýnýn üstüne kaçýncý sütun olduðunu yazan for döngüsü.
	{
		if (k/10>=1) // Eðer sayý iki basamaklý olursa kaymayý engellemek için oluþturulan koþul.
		{
			cout << "   " << k;
			continue;
		}
		cout << "    " << k;
	}
	cout << endl;
	
	cout << "    ";
	for (int t=0;t<matrisboyut;t++) // Sütun sayýlarýnýn altýna alt çizgi (_) oluþturan for döngüsü.
	{
		cout << "    _";
	}
	cout << endl << endl << endl;
	
	for (int i=0;i<matrisboyut;i++) 
	{
		if ((i+1)/10>=1) // Eðer satýr sayýsý iki basamaklý olursa kaymayý engellemek için oluþturulan koþul.
		{
			cout << i+1 << "| ";
		}
		else
		{
			cout << i+1 << " | ";  // Matrisin satýrlarýnýn kaçýncý satýr olduðunu yazar ve '|' iþaretini oluþturur.
		}
		
		for (int j=0;j<matrisboyut;j++) // Matris elemanlarýna rastgele deðerler atayan ve ekrana yazdýran for döngüsü.
		{
			if (matris[i][j]/10>=100) // Eðer bir eleman dört basamaklý olursa kaymayý engellemek için oluþturulan koþul.
			{
				cout << " " << matris[i][j];
				continue;
			}
			else if (matris[i][j]/10>=10 && matris[i][j]/10<100) // Eðer bir eleman üç basamaklý olursa kaymayý engellemek için oluþturulan koþul.
			{
				cout << "  " << matris[i][j];
				continue;
			}
			else if (matris[i][j]/10>=1 && matris[i][j]/10<10) // Eðer bir eleman iki basamaklý olursa kaymayý engellemek için oluþturulan koþul.
			{
				cout << "   " << matris[i][j];
				continue;
			}
			else // Eðer bir eleman bir basamaklý olursa kaymayý engellemek için oluþturulan koþul.
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
	
	while(matrisboyut<5 || matrisboyut>25) // Matris doðru girilene kadar kontrol eden while döngüsü.
	{
		cout << endl << "Matris boyutu 5'ten buyuk, 25'den kucuk olmalidir. Lutfen farkli bir deger girin" << endl;
		cout << "Matris boyutu girin: ";
		cin >> matrisboyut;
	}
	
	cout << endl << "    ";
	for (int k=1;k<=matrisboyut;k++) // Matrisin sütunlarýnýn üstüne kaçýncý sütun olduðunu yazan for döngüsü.
	{
		if (k/10>=1) // Eðer sayý iki basamaklý olursa kaymayý engellemek için oluþturulan koþul.
		{
			cout << "   " << k;
			continue;
		}
		cout << "    " << k;
	}
	cout << endl;
	
	cout << "    ";
	for (int t=0;t<matrisboyut;t++) // Sütun sayýlarýnýn altýna alt çizgi (_) oluþturan for döngüsü.
	{
		cout << "    _";
	}
	cout << endl << endl << endl;
	
	for (int i=0;i<matrisboyut;i++) 
	{
		if ((i+1)/10>=1) // Eðer satýr sayýsý iki basamaklý olursa kaymayý engellemek için oluþturulan koþul.
		{
			cout << i+1 << "| ";
		}
		else
		{
			cout << i+1 << " | ";  // Matrisin satýrlarýnýn kaçýncý satýr olduðunu yazar ve '|' iþaretini oluþturur.
		}
		
		for (int j=0;j<matrisboyut;j++) // Matris elemanlarýna rastgele deðerler atayan ve ekrana yazdýran for döngüsü.
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
	
	for (int i=0;i<1;) // Ýþlemler içinde istenilen deðerlerden yanlýþ girilen olursa tekrar iþlem seçtirmek için oluþturulan for döngüsü.
	{
		switch(islemSecimi) // Menüden iþlem seçtirir.
		{
			case 1: // Sütun ile satýr deðiþim iþlemi.
				cout << "Satir ve Sutun degerlerini girin." << endl;
				cout << "Satir: ";
				cin >> satir;
				cout << "Sutun: ";
				cin >> sutun;
				if (satir>matrisboyut || sutun>matrisboyut) // Satýrýn ve sutunun matris boyutundan büyük olup olmadýðýný kontrol eder.
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
					
				yedek3=matris[satir-1][sutun-1]; // Kesiþen elemaný yedekte tutan deðiþken.
				yedek2=matris[satir-1][satir-1]+matris[sutun-1][sutun-1]; // Kesiþen elemanýn yerine yazýlacak olan elemanlarýn toplamýný yedekte tutan deðiþken.
				for (int u=0;u<matrisboyut;u++) // Satýr elemanlarýyla sütun elemanlarýný deðiþtiren for döngüsü.	
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
				
				case 2: // Tek sayýlarý baþa alma iþlemi.
					cout << "Satir degeri girin: ";
					cin >> satir;
					if (satir>matrisboyut) // Girilen satýr deðerinin, matris boyutundan büyük olup olmadýðýný kontrol eder.
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
						for (int a=0;a<matrisboyut-1;a++) // Tek sayýlarý satýrýn baþýna alan for döngüsü.
						{
							if (matris[satir-1][a]%2==0) // Satýrdaki çift sayýlarý bulur.
							{
								yedek=matris[satir-1][a];
								matris[satir-1][a]=matris[satir-1][a+1];
								matris[satir-1][a+1]=yedek;
							}
						}
					}
					
					cagirMatris(matrisboyut, matris);
						
					break;
					
				case 3: // Sütunu ters çevirme iþlemi.
					cout << "Sutun degeri girin: ";
					cin >> sutun;
					if (sutun>matrisboyut) // Girilen sütun deðerinin, matrisin boyutundan büyük olup olmadýðýný kontrol eder.
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
						
					for (int x=0;x<matrisboyut/2;x++) // Seçilen sütunu ters çeviren for döngüsü.
					{
						yedek=matris[x][sutun-1];
						matris[x][sutun-1]=matris[matrisboyut-1-x][sutun-1];
						matris[matrisboyut-1-x][sutun-1]=yedek;
					}
					
					cagirMatris(matrisboyut, matris);
					
					break;
					
				case 4: // Matris elemanlarýný toplama iþlemi.
						int toplam;
						toplam=0;
						for (int b=0;b<matrisboyut;b++) // Matris boyutu kadar döngüyü tekrar ettirir.
						{
							for (int c=0;c<matrisboyut;c++) // Matris elemanlarýnýn toplamýný bulan for döngüsü.
							{
								toplam+=matris[b][c];
							}
						}
						
						yedek=toplam;
						for (int d=0;d<matrisboyut;d++) // Döngüyü 0'dan matrisin boyutu kadar devam ettirir.
						{
							for (int e=0;e<matrisboyut;e++) // Matrisin ilk elemanýnýn, matrisin toplamýna eþitlenmesinden sonra bir sonraki elemaný bir önceki deðerden çýkarýp yeni matris elemaný olarak yazdýran döngü.
							{
								if(d==0 && e==0) // Toplam deðerinden matrisin ilk elemanýnýn deðeri tekrar çýkarýlmasýn diye oluþturulan koþul.
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
						
				default: // Menüdeki deðerlerden biri seçilmezse yapýlacak iþlem.
					cout << "1 ila 4 arasinda secim yapmalisiniz.." << endl;
					cout << "1 ila 4 arasinda bir deger girin: ";
					cin >> islemSecimi;
					continue;			
		}
		i++;
	}
	system("pause");
}
