//
// Created by max on 05/04/2022.
//
#include <iostream>
#include "../Header/Exercice1.h"


void Exercice1 (){

    std::cout << "---------- Exercice 1 --------------" << std::endl;
    first_function();
}

void show_pointeur (int *n){

    std::cout << "pointeur : "<< n << std::endl;
    std::cout << "adresse : "<< &n << std::endl;
    std::cout << "valeur : "<< *n << std::endl;
}

void construct (int* const n) {

    *n = 42;

}

void destruct(const int* n){
    delete n;
    n = nullptr;
}

void first_function (){

    int n = 5;
    int &r = n;
    int *p = &n;
    std::cout <<  *p << "," << &n <<","<< &r << std::endl;
    show_pointeur(&n);
    construct(&n);
    construct(&r);
    construct(p);
    show_pointeur(&n);
    destruct(&n);
    destruct(&r);
    destruct(p);
    show_pointeur(&n);

}




