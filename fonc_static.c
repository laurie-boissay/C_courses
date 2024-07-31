#include <stdio.h>
#include <stdlib.h>
 
static int triple(int nombre); // Protototype de la fonction locale.
 
int main(int argc, char *argv[])
{
    printf("%d\n", triple(3));

 
    return 0;
}
 
static int triple(int nombre) // La fonction locale ne peut être appelée que depuis ce fichier.
{
    return nombre * 3;
}