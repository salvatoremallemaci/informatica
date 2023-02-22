#include <stdio.h>
#include <stdlib.h>
#define N  5
int main()
{
    int V1[N]={0};
    int V2[N]={0};
    int i=0;
    int j=0;
    int cont=0;
    int k=0;

    printf("Inserisci i valori del vettore V1 \n");
    for (i=0;i<N;i++)
    {
        scanf("%d",&V1[i]);
    }

    printf("Inserisci i valori del vettore V2 \n");
    for (j=0;j<N;j++)
    {
        scanf("%d",&V2[j]);
    }

    for(i=0;i<N;i++)
    {
        for(k=0;k<N;k++)
        {
            if (V1[i]==V2[k])
            {
                printf("Il valore %d e' presente in entrambi i vettori.\n",V1[i]);
                cont++;
            }
        }
    }

    if (cont==N)
    {
        printf("I vettori V1 e V2 contengono gli stessi valori.\n");
    }
    else
    {
        printf("I vettori V1 e V2 non contengono gli stessi valori.\n");
    }

    return 0;
}
