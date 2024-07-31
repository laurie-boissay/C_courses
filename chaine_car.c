#include <stdio.h>


int main(int argc, char *argv[])
{
    char chaine[6]; // Tableau de 6 char pour stocker S-a-l-u-t + le \0
    char chaine2[] = "Salut 2";

    chaine[0] = 'S';
    chaine[1] = 'a';
    chaine[2] = 'l';
    chaine[3] = 'u';
    chaine[4] = 't';
    chaine[5] = '\0'; // Fin du tableau de caractères.

    printf("\n\n");
    for (int i=0; chaine[i] != '\0'; i++){
        printf("%c", chaine[i]);
    }
    printf("\n\n");
    printf("%s\n", chaine); // Plus simple !
    printf("\n");

    printf("%s\n", chaine2);
    printf("\n\n");

    return 0;
}

