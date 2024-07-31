#include <stdio.h>


int main(int argc, char *argv[])
{
    int nb = 7;
    int *monPointeur = NULL; 
    // On utilise int car nb est un int et mon pointeur va contenir son addresse.
    

    printf("\nLa valeur décimale de nb : %d\n", nb);
    printf("L'adresse hexadécimale de nb : %p\n", &nb);
    printf("L'adresse décimale de nb : %d\n\n", &nb);

    monPointeur = &nb;
    printf("monPointeur pointe sur nb.\n\n");

    printf("La valeur décimale de monPointeur : %d\n", monPointeur);
    printf("La valeur hexadécimale de monPointeur : %p\n", monPointeur);
    printf("La valeur de la variable nb contenue dans monPointeur : %d\n", *monPointeur);
    printf("L'adresse décimale de monPointeur : %d\n\n", &monPointeur);

    return 0;
}
