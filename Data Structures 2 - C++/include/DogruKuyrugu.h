/**
* @file DogruKuyrugu.h
* @description Doğru kuyruğu ve düğümlerin tanımlandığı dosya
* @course Veri Yapilari 1B
* @assignment 2. Odev
* @date 26.12.2021
* @author Muhammet Talha Ergün G191210002 muhammet.ergun@ogr.sakarya.edu.tr
*/

#ifndef DOGRUKUYRUGU_H
#define DOGRUKUYRUGU_H
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;

struct Node { 
    int noktaDizi[3];
    Node* next;
    Node* left;
    Node* right;
    Node(int nokta1, int nokta2, int nokta3) // Yapının kurucu fonksiyonu
    {
        noktaDizi[0] = nokta1;
        noktaDizi[1] = nokta2;
        noktaDizi[2] = nokta3;
        next = 0;
    }  
};

class DogruKuyrugu {

public:
    int kuyrukUzunluk = 0;
    Node* bas=0;
    Node* son=0;
    Node* iter;

    void kuyrukEkle(int, int, int);
};

#endif