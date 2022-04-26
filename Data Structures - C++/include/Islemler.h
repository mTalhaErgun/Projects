/**
* @file Islemler.h
* @description Yapi ve siniflarin tanimlandigi dosya
* @course Veri Yapilari 1B
* @assignment 1. Odev
* @date 11.11.2021
* @author Muhammet Talha Ergün G191210002 muhammet.ergun@ogr.sakarya.edu.tr
*/

#ifndef ISLEMLER_H
#define ISLEMLER_H
#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>

using namespace std;

struct node {
    string data;
    struct node* next;
    struct node* prev;
};

class Islemler
{
	public:
		int dugumSayisi = 0;
    	struct node* head = NULL;
    	
    	void ekle(string,int);
    	void sil(int);
    	void yazdir();
    	void dosyaOku();
    	void yokEt();
};

#endif
