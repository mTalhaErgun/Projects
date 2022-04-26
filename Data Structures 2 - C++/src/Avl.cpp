/**
* @file Avl.cpp
* @description AVL ağacı ve metodlarının oluşturulduğu dosya
* @course Veri Yapilari 1B
* @assignment 2. Odev
* @date 26.12.2021
* @author Muhammet Talha Ergün G191210002 muhammet.ergun@ogr.sakarya.edu.tr
*/

#include "Avl.h"
#include "DogruKuyrugu.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

		int Avl::max(int a, int b) // Küçük büyük hesaplama
        {
            return (a > b) ? a : b;
        }

        int Avl::height(Avl* N) // Yükseklik bulma
        {
            if (N == NULL) // Düğüm null ise
            {
                return 0;
            }
            else
            {
                return N->yukseklik;
            }
        }

        Avl* Avl::newNode(DogruKuyrugu kuyruk) // Yeni düğüm oluşturma
        {
            Avl* node = new Avl();
            node->kuyruk = kuyruk;
            node->left = NULL;
            node->right = NULL;
            node->yukseklik = 1;
            return(node);
        }

        Avl* Avl::rightRotate(Avl* y) // Sağa döndürme
        {
            Avl* x = y->left;
            Avl* T2 = x->right;

            x->right = y;
            y->left = T2;

            y->yukseklik = max(height(y->left),
                height(y->right)) + 1;
            x->yukseklik = max(height(x->left),
                height(x->right)) + 1;

            return x;
        }

        Avl* Avl::leftRotate(Avl* x) // Sola döndürme
        {
            Avl* y = x->right;
            Avl* T2 = y->left;


            y->left = x;
            x->right = T2;

            x->yukseklik = max(height(x->left),
                height(x->right)) + 1;
            y->yukseklik = max(height(y->left),
                height(y->right)) + 1;

            return y;
        }

        int Avl::getBalance(Avl* N) // Denge ayarlama
        {
            if (N == NULL) // düğüm null ise
            {
                return 0;
            }
            else
            {
                return height(N->left) - height(N->right);
            }

        }


        Avl* Avl::insert(Avl* node, DogruKuyrugu kuyruk) // Ağaca düğüm ekleme
        {

            if (node == NULL)
                return(newNode(kuyruk));

            if (kuyruk.kuyrukUzunluk < node->kuyruk.kuyrukUzunluk)
                node->left = insert(node->left, kuyruk);
            else if (kuyruk.kuyrukUzunluk > node->kuyruk.kuyrukUzunluk) // Ağacın sağına soluna ekleme işlemleri
                node->right = insert(node->right, kuyruk);
            else
                return node;

            node->yukseklik = 1 + max(height(node->left),
                height(node->right));

            int balance = getBalance(node); // Ağaç dengesini ayarlama işlemleri

            if (balance > 1 && kuyruk.kuyrukUzunluk < node->left->kuyruk.kuyrukUzunluk)
                return rightRotate(node);

            if (balance < -1 && kuyruk.kuyrukUzunluk > node->right->kuyruk.kuyrukUzunluk)
                return leftRotate(node);


            if (balance > 1 && kuyruk.kuyrukUzunluk > node->left->kuyruk.kuyrukUzunluk)
            {
                node->left = leftRotate(node->left);
                return rightRotate(node);
            }

            if (balance < -1 && kuyruk.kuyrukUzunluk < node->right->kuyruk.kuyrukUzunluk)
            {
                node->right = rightRotate(node->right);
                return leftRotate(node);
            }

            return node;
        }       