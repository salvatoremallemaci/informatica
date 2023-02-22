#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int max,min;

    printf("Il valore a vale: ");
    scanf("%d",&a);

    printf("Il valore b vale: ");
    scanf("%d",&b);

    if (a > b)
    {
        max=a;
        min=b;
        while (c!=0)
        {
            c=max%min;
            max=min;
            min=c;
        }
    printf("Il MCD vale: %d",max);

    }

    else
    {
        max=b;
        min=a;
        while (c!=0)
        {
            c=max%min;
            max=min;
            min=c;
        }
    printf("Il MCD vale: %d",max);
    }

    return 0;
}
