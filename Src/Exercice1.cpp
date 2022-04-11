//
// Created by max on 05/04/2022.
//
#include <iostream>
#include "../Header/Exercice1.h"


void Exercice1 (){

    std::cout << "---------- Exercice 1 --------------" << std::endl;
    first_function();
}

void show_pointeur (int* n){
    if (n == nullptr){
        std::cout << "Vous avez donne un pointeur null" << std::endl;
        return ;
    }
    std::cout << "pointeur : "<< n << std::endl;
    std::cout << "adresse : "<< &n << std::endl;
    std::cout << "valeur : "<< *n << std::endl;
}

void construct (int*  n) {
    if (n == nullptr){
        std::cout << "Vous avez donne un pointeur null" << std::endl;
        return ;
    }
    *n = 42;
}

void destruct(int*& n){
    if (n == nullptr){
        std::cout << "Vous avez donne un pointeur null" << std::endl;
        return ;
    }
    delete n;
    n = nullptr;
}

void first_function (){
    int n = 5;
    int& r = n;
    int* p = &n;
    std::cout << "n = " << n << std::endl;
    std::cout << "adresse n = " << &n << std::endl;
    std::cout << "r = " << r << std::endl;
    std::cout << "l'adresse de r = " << &r << std::endl;
    std::cout << "p = " << p << std::endl;
    std::cout << "l'adresse de p = " << &p << std::endl;
    std::cout << "la valeur pointe par p = " << *p << std::endl;

    int* m = new int(6) ;
    show_pointeur( m);
    construct(m);
    show_pointeur(m);
    destruct(m);
    show_pointeur(m);
}




