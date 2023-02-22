#include <stdio.h>
#include <stdlib.h>
#define N   20
int main()
{
    int V[N]={0,1};
    int x,y,i;
    int c=0;


    for (i=2;i<N;i++)
    {
        V[i]=V[i-2]+V[i-1];
        printf("%d \n",V[i]);
    }

    return 0;
}
