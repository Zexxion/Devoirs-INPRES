#include <stdio.h>
#include <stdlib.h>

int main()
{
    short n, nb, nb2;
    printf("Entrez un nombre n: ");
    scanf("%hd", &n);
    short va[n];


    for (int i = 0; i < n; i++)
    {
        printf("Entrez un entier: ");
        scanf("%hd", &va[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%hd | ", va[i]);
    }
    printf("\n");

    if (n%2 == 0)
    {
        for (int i = 0; i < n/2; i++)
        {
            nb = va[i], nb2 = va[(n/2)+i];
            va[i] = nb2, va[(n/2)+i] = nb;
        }
    }

    else
    {
        for (int i = 0; i < n/2; i++)
        {
            nb = va[i], nb2 = va[(n/2)+i+1];
            va[i] = nb2, va[(n/2)+i+1] = nb;
        }
    }
}
