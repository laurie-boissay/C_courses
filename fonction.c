#include <stdio.h>

int triple(int nombre)
{
    return 3 * nombre;
}

int main(int argc, char *argv[])
{
    int nombreEntre = 0;
    
    printf("Entrez un nombre... ");
    scanf("%d", &nombreEntre);
        
    printf("Le triple de ce nombre est %d\n", triple(nombreEntre));
    
    return 0;
}
