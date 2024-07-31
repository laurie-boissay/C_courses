#include <stdio.h>
#include <stdlib.h>
 
int incremente();
 
int main(int argc, char *argv[])
{
    printf("%d\n", incremente());
    printf("%d\n", incremente());
    printf("%d\n", incremente());
    printf("%d\n", incremente());
 
    return 0;
}
 
int incremente()
{
    static int nombre = 0; /*
    La variable resultat est créée la première fois que la fonction est appelée.
    Elle n'est PAS supprimée lorsque la fonction est terminée.    
    */
    
    nombre++;
    return nombre;
}