#ifndef CARNIVORE_CPP
#define CARNIVORE_CPP

#include <string>
#include "Plante.h"
#include "Carnivore.h"
#include <iostream> 

/*void manger();
void digerer();*/

void Carnivore::afficher(){
    std::cout << "Espèce :" << _species << "Niveau d'hydratation : " << _hydratation << 
    "Santé :" << _life << "Faim :" << _faim << std::endl;
}


Carnivore::Carnivore(std::string espece, int sante, int hydratation, int croissance, int valeur, int faim):
Plante(espece, sante, hydratation, croissance, valeur), _faim(faim) {}

int manger(){
    faim --;
    digerer = true; 
}

bool digerer(){
    faim ++;
    if(faim == 5){
        digerer = false; 
    }
}

#endif 