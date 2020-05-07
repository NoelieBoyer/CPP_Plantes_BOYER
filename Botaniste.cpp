#ifndef BOTANISTE_CPP 
#define BOTANISTE_CPP

#include <iostream> 
#include "Botaniste.h"
#include "Plante.h"
#include <string>
#include <vector>
using namespace std;

        
        void Botaniste::afficherJardin(){
            std::cout << "Vous possédez des plantes. Vous avez" << _money << 
            "plantodollars. Nous sommes actuellement le jour" << std::endl;
            jardin[0]->afficher();
        }
        
        Botaniste::Botaniste(std::vector<Plante*> jardin, int argent, int jour):
            _jardin(jardin), _money(argent), _currentDay(jour) {}
            
        int dormir(){
           
        }    
        
        void Botaniste::buyPlant(int indexPlant){
           _money= _money - _magasin[indexPlant].prix;
           _jardin.push_back(_magasin[indexPlant]);
           
        }
        
        void Botaniste::sellPlant(int indexPlant){
           _money = _money+ _magasin[indexPlant].prix; 
           _poubelle.push_back(_jardin[indexPlant]);
           
        }
        
        void buyFertilizer(){
        
        }
        
        void giveFertilizer(){
            
        }
        
        void spray(){
            
        }
        
        void cutPlant(){
            
        }
        
        
        




#endif