#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*Si scriva un programma che acquisisca 3 stringhe, ciascuna contenente il
nome di un prodotto e il relativo prezzo separati da spazio. Una volta
memorizzate queste informazioni in opportune variabili, il programma
riceve un’ulteriore stringa contente un nome di prodotto e un valore intero
corrispondente a una quantità.
Il programma deve:
a. Stabilire se il prodotto inserito per ultimo corrisponde ad uno dei
prodotti memorizzati in precedenza
b. In caso negativo, richiedere un altro inserimento di nome prodotto e
quantità
c. In caso positivo, calcolare e visualizzare il costo totale moltiplicando
quantità e prezzo del prodotto in questione*/

int main()
{
    char listino[3][20],s[20];
    char s2[20];
    int prezzo=0;
    int quantita=0;
    int i;
    int flag=99;

    for(i=0;i<3;i++)
    {
        printf("Inserire nome del prodotto:\n");
        scanf("%s",s);
        do
        {
        printf("Inserire prezzo del prodotto:\n");
        scanf("%d",&prezzo);
        }
        while(prezzo<=0);
        //sprintf(listino,"%s %d",s,prezzo);
    }

    do
    {
        printf("Inserire nome prodotto da acquistare:\n");
        scanf("%s",s2);
        printf("Qual e' la quantita'?\n");
        scanf("%d",&quantita);
        for(i=0;i<3;i++)
        {
            sscanf(listino[i],"%s %d",s,&prezzo);
            if (strcmp(s,s2)==0)
            {
                flag=1;
                printf("Il prezzo totale vale:%d.\n",prezzo*quantita);
            }
        }
    }
    while(flag==0);
    return 0;
}
