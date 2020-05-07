#ifndef PLANTE_H
#define PLANTE_H

#include <string>
#include <iostream>

class Plante{
    protected:
        std::string _species;
        int _life;
        int _hydratation;
        int _croissance;
        int _prix;
        int _fertilizer;
    public:
        void afficher();
        Plante(std::string espece, int sante, int hydratation, int croissance, int valeur, int engrais);
        void faiblir ();
        void pousser();
        void mourir();
        
};

#endif