#include <stdio.h>


int main(int argc, char *argv[])
{
    int nbrCase = 4;
    int nombre = 2;
    int numCase;
    int tableau[nbrCase]; // pratique interdite pour l'instant car on a pas vu les allocations dynamiques (c89/c99) mais j'ai pas envie de tout réécrire.

    for (numCase = 0 ; numCase <= nbrCase-1 ; numCase++){
        tableau[numCase] = nombre *= 2;
    }

    // int tableau[4] = {4, 8, 16, 32}, i = 0; // On peut aussi tout remplir d'un coup.
    // int tableau[4] = {10, 23}; // Valeurs insérées : 10, 23, 0, 0.
    // int tableau[4] = {0}; // Toutes les cases du tableau seront initialisées à 0
    // int tableau[] = {10, 23}; Le compilateur déduira que le tableau est de taille 2.

    printf("\n");
    printf("On peut écrire : tableau[numCase]\n");
    
    for (numCase = 0 ; numCase <= nbrCase-1 ; numCase++)
    {
        printf("Cellue %d : %d\n", numCase, tableau[numCase]);
    }
    printf("\n");
    printf("\n");
    printf("ou : *(tableau + numCase) car tableau est un pointeur.\n");

     for (numCase = 0 ; numCase <= nbrCase-1 ; numCase++)
    {
        printf("Cellue %d : %d\n", numCase, *(tableau + numCase));
    }
    printf("\n");
    printf("Voilà donc pourquoi les tableaux commencent à l'indice 0 !!!\n\n");
    
    return 0;
}
