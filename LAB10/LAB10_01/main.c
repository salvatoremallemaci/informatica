#include <stdio.h>
#include <stdlib.h>


/*Realizzare un programma che riceva da linea di comando due numeri interi
compresi nell’intervallo [-10000,10000], ne faccia la somma e la visualizzi.
Il programma deve effettuare tutti i controlli necessari sul numero dei
parametri e sulla loro correttezza.*/



int main(int argc, char* argv[])
{
    int x,y,s;

    if(argc!=3)
    {
        printf("Errore:Numero argomenti non valido.\n");
        return 1;
    }

    if(argv[1]!= NULL)
    {
        x=atoi(argv[1]);
    }
    if(argv[2]!= NULL)
    {
        y=atoi(argv[2]);
    }

    if((x>-10000 && x<10000) && (y>-10000 && y<10000))
    {
        s=x+y;
        printf("La somma dei due numeri vale: %d\n",s);
    }
    else
    {
        printf("Errore:range numeri errato.\n");
        return 1;
    }
    return 0;
}
