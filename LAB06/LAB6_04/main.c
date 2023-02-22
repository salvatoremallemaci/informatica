#include <stdio.h>
#include <stdlib.h>
#define N  5
int main()
{
    int v[N]={0};
    int i=0;


    printf("Inserire valori del vettore: \n");

    for (i=0;i<N;i++)
    {
        scanf("%d",&v[i]);
    }

    for(i=0;i<N;i++)
    {
        if(v[i]<v[i+1])
        {
            v[i+1]=v[i+2];
        }
    }

    return 0;
}
