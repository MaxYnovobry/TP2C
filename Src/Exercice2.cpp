//
// Created by Laurie on 07/04/2022.
//

#include "../Header/Exercice2.h"
#include <iostream>

void Exercice2() {
    std::cout << "---------- Exercice 2 --------------" << std::endl;
    TP2();
}

typedef double *ptrDouble;

void constructeur_tableau(ptrDouble &dd, const unsigned &taille) {
    dd = new double[taille];
}

void afficher_tableau(const ptrDouble &dd, const unsigned &taille) {
    if (dd == nullptr) {
        std::cout << "Tableau non initialise" << std::endl;
        return;
    }
    std::cout << "[" ;
    for (unsigned i = 0; i < taille; ++i) {

            std::cout << dd[i] << ", ";

        }
    ;
        std::cout << "]" << std::endl;
}

void modifier_tableau(ptrDouble const &dd, const unsigned &taille, const unsigned &index, const double &valeur) {
    dd[index] = valeur;
}

void destructeur_tableau(ptrDouble &dd) {
    delete[] dd;
    dd = nullptr;
}

const double &get_tableau(const ptrDouble &dd, const unsigned &taille, const unsigned &index) {
    return dd[index];
}

double &get_tableau(ptrDouble &dd, const unsigned &taille, const unsigned &index) {
    return dd[index];
}

void TP2() {
    ptrDouble d1 = nullptr;
    unsigned t1=5;
    constructeur_tableau(d1,t1);
    afficher_tableau(d1,t1);
    modifier_tableau(d1,t1,2, 3.13589985);
    afficher_tableau(d1,t1);
    std::cout << get_tableau(d1,t1,2) << std::endl;
    get_tableau(d1,t1,2) = 62.1;
    std::cout << get_tableau(d1,t1,2) << std::endl;
    afficher_tableau(d1,t1);
    destructeur_tableau(d1);
    afficher_tableau(d1,t1);
}