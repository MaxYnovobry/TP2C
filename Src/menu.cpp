//
// Created by max on 07/04/2022.
//

#include <iostream>
#include "../Header/Exercice1.h"
#include "../Header/Exercice2.h"
#include "../Header/Exercice3.h"
#include "../Header/Menu.h"
#include "../Header/Gestion_Erreur.h"


void Menu() {
    int choix;
    do {
        std::cout << "----------- Menu ------------" << std::endl;
        std::cout << "1. Exercice 1" << std::endl;
        std::cout << "2. Exercice 2" << std::endl;
        std::cout << "3. Exercice 3" << std::endl;
        std::cout << "4. Quitter" << std::endl;
        std::cout <<"Entrez votre choix (1 a 4)  :" << std::endl;
        choix  = isANumber2(choix) ;
        switch (choix) {
            case 1:
                Exercice1();
                break;
            case 2:
                Exercice2();
                break;
            case 3:
                Exercice3();
                break;
            case 4:
                break;
            default:
                std::cout << "Choix invalide" << std::endl;
        }
    } while (choix != 5);
}

