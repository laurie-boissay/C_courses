#include <stdio.h>

// Déclare une fonction appelée 'triple' qui prend un pointeur vers un entier comme argument.
void triple(int *pointeurSurNombre);

int main(int argc, char *argv[])
{
    int nombre = 7;

    printf("\nValeur initiale de nombre : %d\n", nombre);

    // Appelle la fonction 'triple' en passant l'adresse de la variable 'nombre'.
    triple(&nombre);

    printf("Valeur triplée de nombre : %d\n\n", nombre);
     
    return 0;
}

// Définit la fonction 'triple' qui prend un pointeur vers un entier comme argument.
void triple(int *pointeurSurNombre){ // Déclaration du pointeur.
    // Déréférence le pointeur et multiplie la valeur pointée par 3.
    *pointeurSurNombre *= 3;
}