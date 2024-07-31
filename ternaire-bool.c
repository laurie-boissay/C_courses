#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
    int age = 0, autorisation = 0;

    printf("\nEntre ton age : ");
    scanf("%d", &age);
    printf("\nTu dis avoir %d ans.", age);

    autorisation = (age >= 18) ? 1 : 0;
    printf("\nautorisation : %d\n\n", autorisation);

    /*
    Le point d'interrogation permet de dire « est-ce que tu es majeur ? ». 
    Si oui, alors on met la valeur 1 dans autorisation. 
    Sinon (le : signifie else ici), on met la valeur 0 dans autorisation.
    */

   if (autorisation) // Booléan
   {
    printf("Bienvenue !\n\n");
   }
   else
   {
    printf("Reviens nous voir quand tu seras majeur !\n\n");
   }


    return 0;
}