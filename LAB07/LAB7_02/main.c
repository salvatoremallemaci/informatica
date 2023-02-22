#include <stdio.h>
#include <stdlib.h>
#define N  10

int main()
{
    int vett[N]={0};
    int i;
    int x=0;
    int res=0;
    int resf=0;

    printf("Inserire valori del vettore: \n");

    for(i=0;i<N;i++)
    {
        scanf("%d",&vett[i]);
    }

    printf("Inserire valore di x: ");
    scanf("%d",&x);

    for(i=0;i<N;i++)
    {
        res=vett[i]*x;
        printf("La moltiplicazione parziale con posizione %d vale: %d.\n",i,res);
        resf+=res;
    }
    printf("Il risultato totale vale: %d.\n",resf);
 return 0;
}



