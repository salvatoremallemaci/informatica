#include <stdio.h>
#include <stdlib.h>
#define N 10

    /*Si scriva un programma C che analizzi il contenuto di un vettore alla
    ricerca di valori replicati. Il programma dovrà in particolare:
    a. Acquisire i valori del vettore da tastiera
    b. Scandire il vettore stabilendo se al suo interno esistono valori ripetuti
    2 o più volte.
    c. Stampi l’elenco dei numeri ripetuti e il numero di occorrenze relative,
    verificando che ciascun numero compaia una volta sola in tale elenco.*/

int main()
{

    int v[N]={0};
    char b[10]={0};
    char s2[10]={0};
    int x=0;
    int i=0;
    int j=0;
    int k=0;
    int cont=0;
    int duplicato=0;

    printf("Inserire i valori del vettore da tastiera:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&v[i]);
    }

    for(i=0;i<N;i++)
    {
       for(j=i+1;j<N;j++)
       {
           if(v[i]==v[j])
           {
               b[10]=v[j];
           }
       }
    }
    printf("I valori ripetuti due o piu' volte all'interno del vettore sono i seguenti:\n");

   printf("%s",b);

    return 0;
}






