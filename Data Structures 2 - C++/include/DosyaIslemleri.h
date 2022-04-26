/**
* @file DosyaIslemleri.h
* @description Dosya okuma işlemlerinin yapıldığı dosya
* @course Veri Yapilari 1B
* @assignment 2. Odev
* @date 26.12.2021
* @author Muhammet Talha Ergün G191210002 muhammet.ergun@ogr.sakarya.edu.tr
*/

#ifndef DOSYAISLEMLERI_H
#define DOSYAISLEMLERI_H
#include "Avl.h"
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;

class DosyaIslemleri
{
public:
    string satir;
    ifstream dosya;

    void DosyaOku();
};

#endif
