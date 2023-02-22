#include <stdio.h>
#include <stdlib.h>
#define N   5
int main()
{
    int v1[N]={0};
    int v2[N]={0};
    int i=0;
    int j=0;
    int k=0;
    int q=0;
    int val=0;


    while(i!=N && j!=N)
    {
        printf("Inserisci il valore: ");
        scanf("%d",&val);
        if( (val>=0) || (val<0) && (val%3==0) )
        {
            v1[i]=val;
            i++;
        }
        else if ( (val<0) && (val%3!=0) && (val%2!=0) )
        {
            v2[j]=val;
            j++;
        }
    }

    printf("I valori del vettore v1 sono: \n");
    for (k=0;k<N;k++)
    {
        printf("%d \n",v1[k]);
    }

    printf("I valori del vettore v2 sono: \n");
    for (q=0;q<N;q++)
    {
        printf("%d \n",v2[q]);
    }

    printf("Processo terminato. \n");

    return 0;
}
