#ifndef FLEUR_CPP
#define FLEUR_CPP

#include <string>
#include "Plante.h"
#include "Fleur.h"
#include <iostream> 

void Fleur::afficher(){
    std::cout << "Espèce :" << _species << "Niveau d'hydratation : " << _hydratation << 
    "Santé :" << _life << "Temps avant éclosion" << _tempsEclosion << std::endl;
}

Fleur::Fleur(std::string espece, int sante, int hydratation, int croissance, int valeur, int timeEclose):
Plante(espece, sante, hydratation, croissance, valeur), _tempsEclosion(timeEclose) {}

void eclore(){
    if(_currentDay == 10){
        std::cout << "Votre fleur a éclo" << std:endl;
    }
    _prix = _prix*2; 
    _tempsEclosion++;
}

void faner(){
    if(_tempsEclosion>= 10){
        std::cout << "Votre fleur a fané" << std:endl; 
    }
    _prix = _prix/10; 
    
}



#endif 