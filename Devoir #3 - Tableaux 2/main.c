#include <stdio.h>
#include <stdlib.h>
int main()
{
    short n,i,accu;
    printf("Entrez un nombre n: ");
    scanf("%hd", &n);
    short va[n];
    for (i = 0; i < n; i++)
    {
        printf("Entrez un entier: ");
        scanf("%hd", &va[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%hd | ", va[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        accu = 0;
        if(i<n-2)
        {
            accu = va[i]+va[i+1]+va[i+2];
            va[i] = accu;
        }
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%hd | ", va[i]);
    }
    return 0;
}
