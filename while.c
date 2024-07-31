#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int nombreEntre = 0;
    int result;

    while (nombreEntre != 47)
    {
        printf("Tapez le nombre 47 ! ");
        result = scanf("%d", &nombreEntre); 
        /*
        Si scanf réussit à lire une valeur entière et l'assigne à nombreEntre, 
        il retourne 1 (car un seul élément a été lu avec succès).
        */

        if (result != 1)
        {
            // vider le buffer d'entrée
            while (getchar() != '\n');
            printf("Saisie invalide. Veuillez entrer un nombre entier.\n");
            nombreEntre = 0; // réinitialiser la variable pour éviter une boucle infinie
        }
    }

    printf("Vous avez tapé 47. Fin de la boucle.\n");

    int compteur = 0;

    while (compteur < 10)
    {
        printf("La variable compteur vaut %d\n", compteur);
        compteur++;
    }

    printf("La variable compteur vaut %d : fin de la boucle.\n", compteur);

    return 0;
}