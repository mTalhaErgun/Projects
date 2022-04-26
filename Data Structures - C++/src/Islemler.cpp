/**
* @file Islemler.cpp
* @description Metotlarin bulundugu ve islemlerin yapildigi dosya
* @course Veri Yapilari 1B
* @assignment 1. Odev
* @date 11.11.2021
* @author Muhammet Talha Ergün G191210002 muhammet.ergun@ogr.sakarya.edu.tr
*/

#include "Islemler.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>

using namespace std;

void Islemler::ekle(string isim, int secilenIndex)
{
    struct node* kisi = new node();

	struct node* iter = head;
    if (head == NULL) // Hic dugum olusturulmamissa
    {
        head = kisi;
        kisi->next = NULL;
        kisi->prev = NULL;
        kisi->data = isim;
        dugumSayisi++;
    }
    else // En az 1 dugum varsa
    {
        struct node* temp = head;
        while (temp->next != NULL) // Son dugume kadar giden dongu
        {
            temp = temp->next;
        }

        temp->next = kisi;
        kisi->prev = temp;
        kisi->next = NULL;
        iter = temp;


        if (secilenIndex < dugumSayisi - 1) // Dugum araya eklenecekse
        {
            if (secilenIndex == 0) // Dugumun basina ekleme durumu
            {
                for (int i = dugumSayisi; i > secilenIndex; i--)
                {
                    if (iter->prev == NULL)
                    {
                        iter->next->data = iter->data;
                        iter->data = isim;
                        break;
                    }
                    iter->next->data = iter->data;
                    iter = iter->prev;
                }
            }
            else
            {
                for (int i = dugumSayisi; i > secilenIndex; i--)
                {
                    iter->next->data = iter->data;
                    iter = iter->prev;
                }
                iter->next->data = isim;
            }

        }
        else if (secilenIndex == dugumSayisi - 1) // Dugum sondan bir onceye eklenecekse
        {
            iter->next->data = iter->data;
            iter->data = isim;
        }
        else // Dugum sona eklenecekse
        {
            iter->next->data = isim;
        }
        dugumSayisi++; // Dugum eklendigi icin dugum sayisi artti
    }
}

void Islemler::sil(int secilenIndex)
{
    struct node* iter = head;
    struct node* temp = new node();


    if (secilenIndex >= dugumSayisi - 1) // Dugum sondan silinecekse
    {
        if (dugumSayisi == 1) // Sadece 1 dugum varsa yapilan islem
        {
            temp = iter;
            iter->next = NULL;
            free(temp);
            head = NULL;
        }
        else
        {
            while (iter->next != NULL) // Son dugume kadar giden dongu
            {
            	iter = iter->next;
            }

            temp = iter;
            iter = iter->prev;
            iter->next = NULL;
            free(temp);
        }
    }
    else // Dugum aradan silinecekse
    {
        if (dugumSayisi == 2) 
        {
            temp = iter->next;
            iter->data = temp->data;
            iter->next = NULL;
            free(temp);
        }
        else
        {
            for (int i = 0; i < secilenIndex + 1; i++) // Silinecek dugumu bulana kadar giden dongu
            {
                iter = iter->next;
            }

            temp = iter;
            iter->prev->data = iter->data;

            while (iter->next != NULL) // Son dugume kadar giden dongu
            {
                iter = iter->next;
                iter->prev->data = iter->data;
                temp = iter;
            }
            iter = iter->prev;
            iter->next = NULL;
            free(temp);

        }
    }
    dugumSayisi--; // Dugum silindi dugum sayisi azaldi

}

void Islemler::yazdir()
{
    if (head == NULL) // Dugum var mi yok mu kontrolu
    {
        cout << "Liste bos" << endl;
    }
    else
    {
        struct node* temp = head;
        while (temp->next != NULL) // Son dugume kadar giden dongu
        {
            cout << temp->data << " <--> ";
            temp = temp->next;
        }
        cout << temp->data << endl; 
    }
}

void Islemler::dosyaOku()
{
    ifstream oku("Veri.txt");
    char karakter;


    if (oku.is_open()) // Dosya aciksa
	{

        while (oku.get(karakter)) { // Karakter karakter okuyan dongu
            char islem = karakter;
            string indeks = "";
            string veri = "";

            if (islem == 'E') // Satir basi E ise ekleme islemi yapilir
            {
                oku.get(karakter);

                while (oku.get(karakter))
                {
                    if (karakter != '#') // # isaretini bulan kontrol
                    {
                        indeks += karakter;
                    }
                    else
                    {
                        break;
                    }
                }
                while (oku.get(karakter))
                {
                    if (karakter != ')') // ) isaretini bulan kontrol
                    {
                        veri += karakter;
                    }
                    else
                    {
                        break;
                    }
                }
                oku.get(karakter);
 
                int index;
                index = stoi(indeks); // Stringi inte cevirme islemi             
                ekle(veri, index); // Dugum ekleme metodu
            }
            else // Satir basi S ise silme islemi yapilir
            {
                oku.get(karakter);

                while (oku.get(karakter))
                {
                    if (karakter != ')') // ) isaretini bulan kontrol
                    {
                        indeks += karakter;
                    }
                    else
                    {
                        break;
                    }
                }
                oku.get(karakter);

                int index;
                index = stoi(indeks); // Stringi inte cevirme islemi
                sil(index); // Silme metodu
                }         
            }
        oku.close();
    }
    yazdir();
}

void Islemler::yokEt()
{
    struct node* iter = head;
    while (iter != NULL) // Son dugume kadar giden dongu
    {
        head = head->next;
        free(iter); // Programin sonunda dugumleri yok etme islemi
        iter = head;
    }
}
