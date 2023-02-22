#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 4
/*Scrivere un programma che permetta di memorizzare un insieme di
coordinate del piano cartesiano.
Il programma deve acquisire da tastiera in due vettori paralleli le coordinate
x e y di 4 punti, corrispondenti ai punti toccati da un percorso e manipolare i
dati ricevuti in base ad un parametro ricevuto da linea di comando:
1) Parametro “–m” : calcola e stampa a video la lunghezza del percorso
composto dai 4 segmenti.
2) Parametro “–a” : calcola e stampa a video la distanza minima tra le
coordinate inserite.*/


int main(int argc, char* argv[])
{
    float x[N]={0};
    float y[N]={0};
    int i=0;
    float r[N]={0};
    float lunghezza=0;
    float distanza_min=0;
    char parametro[2];
    int ok=0;
    float min=0;

    if (argc!=2)
    {
        printf("Errore:numero di argomenti non valido.\n");
        return 1;
    }

    if(argv[1]!=NULL)
    {
        sscanf(argv[1],"%s",parametro);
    }

    //coordinate dei 4 punti che dettano il percorso.
    for(i=0;i<N;i++)
    {
        printf("Inserisci coordinata x del punto: ");
        scanf("%f",&x[i]);
        printf("Inserisci coordinata y del punto: ");
        scanf("%f",&y[i]);
    }

    if(parametro[0]=='-' && parametro[1]=='m')
    {
        ok=1;
        for(i=0;i<N-1;i++)
        {
            r[i]=sqrt(((x[i+1]-x[i])*(x[i+1]-x[i]))+((y[i+1]-y[i])*(y[i+1]-y[i])));
        }
        r[3]=sqrt(((x[3]-x[0])*(x[3]-x[0]))+((y[3]-y[0])*(y[3]-y[0])));
        lunghezza=r[0]+r[1]+r[2]+r[3];
    }
    else if(parametro[0]=='-' && parametro[1]=='a')
    {
        ok=2;
        for(i=0;i<N-1;i++)
        {
            r[i]=sqrt(((x[i+1]-x[i])*(x[i+1]-x[i]))+((y[i+1]-y[i])*(y[i+1]-y[i])));
        }
        r[3]=sqrt(((x[3]-x[0])*(x[3]-x[0]))+((y[3]-y[0])*(y[3]-y[0])));
        min=r[0];
        for(i=0;i<N;i++)
        {
            if(r[i]<=min)
            {
                ok=3;
                min=r[i];
                distanza_min=min;
            }
        }
    }
    else
    {
        printf("Parametro inserito errato e/o non presente.\n");
        return 1;
    }

    if(ok==1)
    {
        printf("La distanza percorsa vale:%.3f\n",lunghezza);
    }
    else if(ok==3)
    {
        printf("La distanza minima tra i punti inseriti vale:%.3f\n",distanza_min);
    }

    return 0;
}
