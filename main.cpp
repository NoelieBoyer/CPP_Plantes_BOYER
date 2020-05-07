
#include <stdio.h>
#include <iostream>
#include <vector>

#include "Botaniste.h"
#include "Plante.h"
#include "Fleur.h"
#include "Carnivore.h"

int main()
{
    Fleur * rose = new Fleur("Rose rouge", 25, 2, 1, 100, 0);
    rose->afficher();
    
    Botaniste * jack = new Botaniste(vector<Plante*>(1, rose), 200, 1); 
    Botaniste->afficherJardin();

    return 0;
}
