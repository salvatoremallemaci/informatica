#include <stdio.h>
#include <stdlib.h>
#define N  5

int main()
{
    int vettore[N]={0};
    int i=0;
    float media=1;
    int limite=5;
    int cont=0;
    int no=0;

    printf("Inserire valori del vettore: \n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&vettore[i]);
    }

    for(i=0;i<N;i++)
    {
        media=(((media*i)+vettore[i])/(i+1));
    }
    printf("La media dei valori nel vettore vale: %.2f\n",media);

    for(i=0;i<N;i++)
    {
        if(vettore[i]>limite)
        {
            cont++;
        }
        else
        {
            no++;
        }
    }
    printf("Il numero di valori che superano il limite prefissato e' %d.\n",cont);
    printf("Il numero di valori che non superano il limite prefissato e' %d.\n",no);

    return 0;
}


