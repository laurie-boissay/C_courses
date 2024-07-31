#include <stdio.h>
#include "aire.h"

int main()
{
    printf("\nL'aire du rectangle est %f.\n\n", aireRectangle(10.0, 20.0));
    return 0;
}


/*
CHEMIN
cd /home/jaenne/Documents/projets_embarques/C/prog_modulaire_gros/header

COMPILATION
gcc -Wall -Wextra -g3 main.c aire.c -o output/main

EXECUTION
./output/main


    gcc :
        Il s'agit de l'appel au COMPILATEUR GNU Compiler Collection (GCC), qui est un compilateur pour les langages C, C++, et autres.

    -Wall :
        Cette option active la plupart des avertissements courants du compilateur. Cela aide à repérer des ERREURS potentielles dans le 
        code qui pourraient ne pas être immédiatement visibles.

    -Wextra :
        Cette option active des avertissements supplémentaires en plus de ceux activés par -Wall. Cela aide à détecter encore PLUS DE 
        PROBLEMES potentiels dans le code.

    -g3 :
        Cette option ajoute des INFORMATIONS de DEBOGAGE au programme compilé. Le niveau 3 inclut des informations supplémentaires, comme 
        les macros, pour un débogage plus détaillé. Cela permet d'utiliser un débogueur comme gdb pour examiner et déboguer le programme.

    main.c aire.c :
        Ce sont les FICHIERS SOURCE en C que vous voulez compiler. GCC les compile en fichiers objets intermédiaires puis les lie ensemble 
        pour créer l'exécutable final.

    -o output/main :
        Cette option spécifie le NOM DE L'EXECUTABLE final. Ici, l'exécutable sera nommé main et sera placé dans le REPERTOIRE output. Sans 
        cette option, GCC nommerait l'exécutable par défaut a.out.
*/