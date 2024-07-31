#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
    int choix = 0;

    printf(
        "\n=== MENU ===\n\n1. Royal Cheese\n\n2. Mc Deluxe\n\n3. Mc Bacon\n\n4. Big Mac\n\nTon choix ? ");
    
    scanf("%d", &choix);
 
    switch (choix)
    {
        case 1:
            printf("\nTu veux 1 Royal Cheese.\n\n");
            break;
        case 2:
            printf("\nTu veux 1 Mc Deluxe.\n\n");
            break;
        case 3:
            printf("\nTu veux 1 Mc Bacon.\n\n");
            break;
        case 4:
            printf("\nTu veux 1 Big Mac.\n\n");
            break;
        default:
            printf("Je n'ai pas compris ton choix.\n\n");
            break;
    }

    return 0;
}