#ifndef CARNIVORE_H
#define CARNIVORE_H 

#include <iostream>
#include <string> 
#include "Plante.h"

class Carnivore : public Plante{
    private : 
        int _faim;
    public : 
        void afficher();
        Carnivore(std::string espece, int sante, int hydratation, int croissance, int valeur, int faim);
        int manger();
        bool digerer();
};

#endif 