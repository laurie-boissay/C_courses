#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) // Équivalent de int main()
{

    /*
    const int NOMBRE_DE_VIES_INITIALES = 5;
    int niveau, ageDuJoueur;
    ageDuJoueur = 41, niveau = 2;
    int nombreDeVies = NOMBRE_DE_VIES_INITIALES -1;
       
    printf(
        "\nIl te reste %d vies sur %d.\nTu as %d ans et ton personnage est niveau %d.\n\n", 
        nombreDeVies, NOMBRE_DE_VIES_INITIALES, ageDuJoueur, niveau
        );
    
    double poids = 0;
    printf("\nQuel est ton poids (en Kg) ? ");
    scanf("%lf", &poids);
    printf("Tu pèses %lf kg.\n\n", poids);
    
   
    double resultat = 5.0 / 2.0; // le résultat serait tronqué avec l'opération 5/2.
    printf ("\n5 / 2 = %lf.\n\n", resultat);

    */

   double nb1 = 5.0, nb2 = 2.0, resultat;

   printf("\nEntrez un nombre : ");
   scanf("%lf", &nb1);
   printf("\nEntrez un autre nombre : ");
   scanf("%lf", &nb2);

   resultat = nb1/nb2;
   printf ("\n%lf / %lf = %lf.\n\n", nb1, nb2, resultat);

    return 0;
}