#include <stdio.h>


int main(int argc, char *argv[])
{
    int nb = 7;

    printf("\nLadresse de nb est : %p\n\n", &nb);
     
    return 0;
}


/*
nb désigne la valeur de la variable.
&nb sésigne l'adresse de la variable.

Le préfixe "0x" indique que les symboles suivants sont écrits en hexadécimal. 
*/