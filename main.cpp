#include "grman/grman.h"
#include <iostream>

#include "graph.h"


int main()
{
    /// A appeler en 1er avant d'instancier des objets graphiques etc...
    grman::init();

    /// Le nom du r�pertoire o� se trouvent les images � charger
    grman::set_pictures_path("pics");

    /// Un exemple de graphe
    Graph g;


//int a = 0;
    g.Recovry();

    /// Vous gardez la main sur la "boucle de jeu"
    /// ( contrairement � des frameworks plus avanc�s )
    while ( !key[KEY_ESC] )
    {


        /// Il faut appeler les m�thodes d'update des objets qui comportent des widgets
        g.update();

        /// Mise � jour g�n�rale (clavier/souris/buffer etc...)
        grman::mettre_a_jour();

//        if(key[KEY_SPACE])
//        {
//            g.test_remove_vertex(a);
//            a++;
//        }


    }

    g.save();

    grman::fermer_allegro();

    return 0;
}
END_OF_MAIN()
