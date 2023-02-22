#include <stdio.h>
#include <stdlib.h>
#define N  10

int main()
{
    float media=0;
    int i=0,somma=0,posmax=0;
    int vettore[N];
    float max;

    for (i=0; i<N; i++)
    {
        scanf("%d", &vettore[i]);
    }
    for (i=0;i<N;i++)
    {
        printf("%d ",vettore[i]);
    }

    for (i=0;i<N;i++)
    {
        somma=somma+vettore[i];
    }
    printf("\nLa somma vale: %d",somma);

    media=(float)somma/N;
    printf("\nLa media vale: %.2f",media);

    //conviene inizializzare il max al valore del primo elemento
    max=vettore[0];
    posmax=0;

    for (i=0;i<N;i++)
    {
        if (vettore[i]>max)
        {
            max=vettore[i];
            posmax=i;
        }
    }
            printf("\nIl valore max nel vettore e': %.2f",max);
            printf("\nLa posizione del massimo e': %d",posmax);


    return 0;
}
