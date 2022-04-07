//
// Created by max on 05/04/2022.
//
#include <iostream>
#include "../Header/Exercice1.h"


// Declare a program who ask for an integer input,

void Exercice1 (){
    int n;
    std::cout << "Veuillez rentrer un entier :" << std::endl;
    std::cin >> n;
    int &ref = n;
    int *ptr = &n;
    display(n);
    construct(ptr);
    destruct(ptr);
}

//Write a function that displays a pointer, its address and its value.

void display(int n){
    int &ref = n;
    int *ptr = &n;
    std::cout << "La valeur de n est : " << n << std::endl;
    std::cout << "L'adresse de n est : " << &n << std::endl;
    std::cout << "La valeur pointée par ptr est : " << *ptr << std::endl;
}

//Write a function that takes a pointer as an argument and assigns a value to it.

void construct(int *ptr){
    *ptr = 42;
}

//Write a destructor function that takes a pointer as an argument and frees the memory.

void destruct(int *ptr) {
    delete ptr;
    ptr = nullptr;
}


