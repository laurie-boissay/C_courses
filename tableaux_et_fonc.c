#include <stdio.h>

// Prototype de la fonction d'affichage
void affiche(int *tableau, int tailleTableau);
/*
Une autre façon +lisible d'écrire le même prototype :
void affiche(int tableau[], int tailleTableau)
*/ 
 
int main(int argc, char *argv[])
{
    int tableau[4] = {10, 15, 3};
    
    printf("\n");
    // On affiche le contenu du tableau
    affiche(tableau, 4);
    printf("\n\n");
 
    return 0;
}
 
void affiche(int *tableau, int tailleTableau)
{
    int i;
 
    for (i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableau[i]);
    }
}