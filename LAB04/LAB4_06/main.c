#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    int a=0;
    int N;
    int Media=0;

    printf("N vale: ");
    scanf("%d", &N);


    int V[10]={0};

    for (i=0;i<9;i++)
    {
        scanf("%d",&V[i]);
        a=a+V[i];
        Media=(a/(i+1));
        printf("La media vale: %d\n",Media);
        if ( Media < N)
        {
            i=10;
            printf("la media vale meno di N");
        }
        if (i==9)
        {
        printf("hai inserito il numero massimo di valori");
        }
    }

    return 0;
}
