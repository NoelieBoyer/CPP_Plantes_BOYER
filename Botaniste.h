#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include <vector>
#include "Plante.h"


class Botaniste{
    private:
        int _money; 
        int _currentDay;
        std::vector<Plante*> _jardin;
        std::vector<Plante*> _poubelle;
        std::vector<Plante*> _magasin;
    public:
        void afficherJardin();
        void buyPlant(int indexPlant);
        void sellPlant(int indexPlant);
        void buyFertilizer();
        void giveFertilizer();
        void spray();
        void cutPlant();
        int dormir();
        Botaniste(std::vector<Plante*>jardin, int argent, int jour);
        
        
};

#endif