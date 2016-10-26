#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    short i = 0, somme = 0, a, b, c;
    char continuer = 'O';
    while (toupper(continuer) == 'O')
    {

        printf("Entrez la valeur de a: ");
        fflush(stdin);
        scanf("%hd", &a);
        printf("Entrez la valeur de b: ");
        fflush(stdin);
        scanf("%hd", &b);
        printf("Entrez la valeur de c: ");
        fflush(stdin);
        scanf("%hd", &c);

        i = a;
        while (i < b)
        {
            somme+=i;
            i++;
        }
        printf("Somme des entiers dans l'intervalle [a; b[: %hd\n", somme);
        somme = 0;

        i = a+1;
        while (i < b)
        {
            if (i > 0) somme+=i;
            i++;
        }
        printf("Somme des entiers positifs dans l'intervalle [a; b[: %hd\n", somme);
        somme = 0;

        i = a;
        while (i <= b)
        {
            if (i > 0 && c%i == 0) somme+=i;
            i++;
        }
        printf("Somme des diviseurs de c dans l'intervalle [a; b[: %hd\n", somme);

        printf("Recommencer le programme ? (O/N)");
        scanf(" %c", &continuer);
    }
    return 0;
}
