#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20
int main()
{
    int v[9]={0};
    int i,max,j,tmp;
    for(i=1;i<9;i++)
    {
        scanf("%d",&v[i]);
    }

    //ordinamento vettore in ordine decrescente

    for(i = 0; i < 9; i++){
    if(v[i] > v[i+1])
    {
    tmp = v[i];
    v[i] = v[i+1];
    v[i+1] = tmp;
    }
    }
    for(i=0;i<9;i++)
    {
        printf("%d",v[i]);
    }
return 0;
}






