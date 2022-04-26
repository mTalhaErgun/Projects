/**
* @file DogruKuyrugu.cpp
* @description Doğru kuyruğu ve düğümlerin oluşturulduğu dosya
* @course Veri Yapilari 1B
* @assignment 2. Odev
* @date 26.12.2021
* @author Muhammet Talha Ergün G191210002 muhammet.ergun@ogr.sakarya.edu.tr
*/

#include "DogruKuyrugu.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;




void DogruKuyrugu::kuyrukEkle(int nokta1, int nokta2, int nokta3) // Kuyruk ekleme fonksiyonu
{ 
    if (bas == 0) // Henüz kuyruk yoksa
    {
            Node* yeni = new Node(nokta1, nokta2, nokta3);
            son = yeni;
            bas = yeni;
    }
    else
    {
            Node* yeni = new Node(nokta1, nokta2, nokta3);         
            son->next = yeni;
            son = yeni;
    }
}