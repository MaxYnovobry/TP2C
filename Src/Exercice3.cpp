//
// Created by Laurie on 07/04/2022.
//
#include "../Header/Exercice3.h"
#include <iostream>
#include <memory>

void Exercice3() {
    std::cout << "---------- Exercice 3 --------------" << std::endl;
    TP3();
}

typedef std::shared_ptr<double> ptrStdDouble;

void constructeur_tableau(ptrStdDouble &dd,const unsigned &taille) {
    dd = std::shared_ptr<double> (new double[taille](), std::default_delete<double[]>());
}

void afficher_tableau(const ptrStdDouble &dd, const unsigned &taille) {
    if (dd == nullptr) {
        std::cout << "Tableau non initialise" << std::endl;
        return;
    }
    std::cout << "[" ;
    for (unsigned i = 0; i < taille; ++i) {
        std::cout << dd.get()[i] << ", ";
    }
    std::cout << "]" << std::endl;
}

void modifier_tableau(ptrStdDouble &dd, const unsigned &taille, const unsigned &index, const double &valeur) {
    dd.get()[index] = valeur;
}

void destructeur_tableau(ptrStdDouble &dd) {
    dd = nullptr;
}

const double& get_tableau(const ptrStdDouble &dd, const unsigned &taille, const unsigned &index) {
    return dd.get()[index];
}

double& get_tableau(ptrStdDouble &dd, const unsigned &taille, const unsigned &index) {
    return dd.get()[index];
}

void TP3() {
    ptrStdDouble d1 = nullptr;
    unsigned t1=5;
    constructeur_tableau(d1,t1);
    afficher_tableau(d1,t1);
    modifier_tableau(d1,t1,2, 3.13589985);
    afficher_tableau(d1,t1);
    std::cout<< get_tableau(d1,t1,2) << std:: endl;
    get_tableau(d1,t1,2) = 62.1;
    std::cout<< get_tableau(d1,t1,2) << std:: endl;
    afficher_tableau(d1,t1);
    destructeur_tableau(d1);
    afficher_tableau(d1,t1);
}