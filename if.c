#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
    int age = 0;

    printf("\nEntre ton age : ");
    scanf("%d", &age);
    printf("\nTu dis avoir %d ans donc ", age);

    if (age <= 0 || age >= 130)
    {
        printf("tu n'as pas compris la consigne.\n\n");
    }
    else if (age>18)
    {
        printf("tu es majeur.\n\n");
    }
    else if (age==18)
    {
        printf("tu es tout juste majeur.\n\n");
    }
    else
    {
        printf("tu es mineur.\n\n");
    }

        /*
    switch (age)
    {
        case 2:
            printf("Salut bebe !");
            break;
        case 6:
            printf("Salut gamin !");
            break;
        case 12:
            printf("Salut jeune !");
            break;
        case 16:
            printf("Salut ado !");
            break;
        case 18:
            printf("Salut adulte !");
            break;
        case 68:
            printf("Salut papy !");
            break;
        default:
            printf("Je n'ai aucune reponse pour ton age");
            break;
    }
    */

    return 0;
}