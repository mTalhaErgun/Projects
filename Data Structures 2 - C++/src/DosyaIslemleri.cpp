/**
* @file DosyaIslemleri.cpp
* @description Dosya okuma işlemlerinin yapıldığı dosya
* @course Veri Yapilari 1B
* @assignment 2. Odev
* @date 26.12.2021
* @author Muhammet Talha Ergün G191210002 muhammet.ergun@ogr.sakarya.edu.tr
*/

#include "DosyaIslemleri.h"
#include "DogruKuyrugu.h"
#include "Avl.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>

using namespace std;

void DosyaIslemleri::DosyaOku()
    {
        Avl agac;
		Avl* dugum;
        int i = 0;
        int j = 0;
        dosya.open("Noktalar.txt");


        while (getline(dosya, satir)) // dosyayı sonuna kadar okuma döngüsü
        {
            DogruKuyrugu kuyruk;
            Node* iter;            
            stringstream dosya(satir);
            int noktalar[3];

            while (dosya >> noktalar[i]) // Kelime kelime dosyayı okuma
            {
                for (int i = 1; i <= 2; i++)
                {
                    dosya >> noktalar[i];
                }
                kuyruk.kuyrukEkle(noktalar[0], noktalar[1], noktalar[2]);
            }
            iter = kuyruk.bas;

            
            while (iter->next) // Kuyruğun sonuna kadar giden döngü
            {
                kuyruk.kuyrukUzunluk = kuyruk.kuyrukUzunluk + sqrt(((iter->next->noktaDizi[0] - iter->noktaDizi[0])* (iter->next->noktaDizi[0] - iter->noktaDizi[0]))
                    + ((iter->noktaDizi[1] - iter->next->noktaDizi[1])* (iter->noktaDizi[1] - iter->next->noktaDizi[1])) 
                    + ((iter->next->noktaDizi[2] - iter->noktaDizi[2])* (iter->next->noktaDizi[2] - iter->noktaDizi[2])));
                iter = iter->next;
            }
            
            cout << j <<". satirdaki dogru uzunlugu: "<< kuyruk.kuyrukUzunluk << endl;;
            j++;
			kuyruk.kuyrukUzunluk = 0;
        }
 
    }
    