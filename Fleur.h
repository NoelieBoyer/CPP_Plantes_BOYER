#ifndef FLEUR_H
#define FLEUR_H

#include <iostream>
#include <string> 
#include "Plante.h"

class Fleur : public Plante{
    private : 
        int _tempsEclosion;
    public : 
        void afficher();
        Fleur(std::string espece, int sante, int hydratation, int croissance, int valeur, int timeEclose);
        void eclore();
        void faner();
};

#endif 