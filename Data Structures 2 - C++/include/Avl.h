/**
* @file Avl.h
* @description AVL ağacı ve metodlarının tanımlandığı dosya
* @course Veri Yapilari 1B
* @assignment 2. Odev
* @date 26.12.2021
* @author Muhammet Talha Ergün G191210002 muhammet.ergun@ogr.sakarya.edu.tr
*/

#ifndef AVL_H
#define AVL_H
#include "DogruKuyrugu.h"
#include <iostream>
#include <fstream>
#include <sstream>


using namespace std;

class Avl
{
    public:
        DogruKuyrugu kuyruk;
        Avl* left;
        Avl* right;
        int yukseklik;

        int max(int, int);
        int height(Avl*);      
        Avl* newNode(DogruKuyrugu);        

        Avl* rightRotate(Avl*);       
        Avl* leftRotate(Avl*);
        int getBalance(Avl*);
        Avl* insert(Avl*, DogruKuyrugu);
};

#endif