/**
* @file main.cpp
* @description Ana fonksiyon dosyası
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

using namespace std;

int main()
{
    DosyaIslemleri dosya;
    Avl* dugum = NULL;
    dosya.DosyaOku();
}