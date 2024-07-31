#include <stdio.h>
#include <stdlib.h>
 
int resultat = 0; /* Déclaration de variable globale
Ce type de choses est à bannir dans un programme en C.
Utilisez plutôt le retour de la fonction (return) pour renvoyer un résultat.
*/

// Pour créer une variable globale accessible uniquement dans un fichier, rajoutez simplement le mot-clé static devant :
// static int resultat = 0;
 
void triple(int nombre); // Prototype de fonction
 
int main(int argc, char *argv[])
{
    triple(15); // On appelle la fonction triple, qui modifie la variable globale resultat
    printf("Le triple de 15 est %d\n", resultat); // On a accès à resultat
 
    return 0;
}
 
void triple(int nombre)
{
    resultat = 3 * nombre;
}

