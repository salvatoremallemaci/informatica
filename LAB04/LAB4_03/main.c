#include <stdio.h>
#include <stdlib.h>
#define N  10
int main()
{
    int v1[N]={0};
    int v2[N]={0};
    unsigned i=0;
    int q=0;
    int b=0;


    b=((-i)%3);


        for (i=0;i<N;i++)
        {
            if ( (i>=0) && (b==0) )
            {
              scanf("%d",&v1[i]);
            }
        }


    int l=0,p=0;

    l=((-q)%3);
    p=(q%2);

    if ( (q<0) && (l!=0) && (p!=0) )
    {
        for (q=0;q<N;q++)
        {
            scanf("%d",&v2[q]);
        }
    }
    return 0;
}
