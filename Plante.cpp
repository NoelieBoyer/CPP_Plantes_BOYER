#ifndef PLANTE_CPP 
#define PLANTE_CPP 

#include <string>
#include <iostream>
#include "Plante.h"

/*protected:
        std::string _species;
        int _life;
        int _hydratation;
        int _croissance;
        int _prix;
    public:
        void affiche();
        Plante(std::string espece, int sante, int hydratation, int croissance, int valeur);
        void faiblir ();
        void pousser();
        void mourir();*/

Plante::Plante(std::string espece, int sante, int hydratation, int croissance, int valeur):
    _species(espece), int _life(sante), int _hydratation(hydratation), int _croissance(croissance), int _prix(valeur), int _fertilizer (engrais){}
        
void Plante::afficher(){
    std::cout << "Espèce :" << _species << "Niveau d'hydratation : " << _hydratation << 
    "Santé :" << _life << std::endl;
}

void Plante::pousser(){
    _croissance ++;
}

void Plante::faiblir(){
    _life --;
}

void Plante::mourir(){
    if(_life <= 0 ){
        std::cout << "Votre plante est morte" << std::endl;
    }
}




#endif 