#include <stdio.h>
#include <stdlib.h>
#define N 5

int main()
{
  int i=0;
  int v[N] ={0};

  for(i=0;i<N;i++)
    {
        printf("Inserisci il valore dell'elemento %d del vettore: ", i);
        scanf("%d", &v[i]);
    }

  for(i=0;i<N;i++)
  {
    if((v[i]<v[i+1])&&(v[i+1])<(v[i+2]))
    {
    printf("La sequenza numerica e' %d %d %d ed inizia in posizione %d\n", v[i], v[i+1], v[i+2], i);
    }
  }
  return 0;
}
