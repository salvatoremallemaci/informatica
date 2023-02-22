#include <stdio.h>
#include <stdlib.h>
#define N 80
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
quantità e prezzo del prodotto in questione.*/


int main()
{
    char s1[N]={0};
    char s2[N]={0};
    char s3[N]={0};
    char s4[N]={0};
    char s5[N]={0};
    char s6[N]={0};
    char s7[N]={0};
    char s[N]={0};
    int quantita=0;
    int ok=0;
    int prezzo1=0;
    int prezzo2=0;
    int prezzo3=0;
    int prezzototale=0;

    printf("Inserisci prodotti e relativi prezzi:\n");
    while(prezzo1<=0 && prezzo2<=0 && prezzo3<=0)
    {
        gets(s1);
        gets(s2);
        gets(s3);

        sscanf(s1,"%s %d",s5,&prezzo1);
        sscanf(s2,"%s %d",s6,&prezzo2);
        sscanf(s3,"%s %d",s7,&prezzo3);
    }


    while(ok!=1 && quantita>=0)
    {
        printf("Inserire nome prodotto e quantita: ");
        gets(s4);
        sscanf(s4,"%s %d",s,&quantita);
    if((strcmp(s5,s))==0)
    {
        printf("Il prodotto inserito e' presente nella prima stringa.\n");
        ok=1;
        prezzototale=quantita*prezzo1;

    }
    else if((strcmp(s6,s))==0)
    {
        printf("Il prodotto inserito e' presente nella seconda stringa.\n");
        ok=1;
        prezzototale=quantita*prezzo2;
    }
    else if((strcmp(s7,s))==0)
    {
        printf("Il prodotto inserito e' presente nella terza stringa.\n");
        ok=1;
        prezzototale=quantita*prezzo3;
    }
    else
    {
        printf("Reinserisci il prodotto.\n");
        ok=0;
    }
    }
    printf("Il prezzo totale del prodotto _%s_ costa _%d_.",s,prezzototale);

return 0;
}
