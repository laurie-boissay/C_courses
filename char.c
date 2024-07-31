#include <stdio.h>


int main(int argc, char *argv[])
{
    char caractere = 0;
    // char caractere = 'A';
    printf("\nEntrez un caractère : ");
    scanf("%c", &caractere);
    printf("\nLe nombre %d correspond au caractère %c dans la table ASCII.\n\n", caractere, caractere);

    return 0;
}

// Ctrl + Shift + u, puis tapez 00e6 et appuyez sur Entrée pour æ.