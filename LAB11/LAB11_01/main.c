#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 4
/*Scrivere un programma che permetta di memorizzare un insieme di
coordinate del piano cartesiano. Nel programma si definisca una struttura
dati contenente due campi come segue:
struct coordinate
{
int x;
int y;
};
Il programma deve acquisire da tastiera le coordinate x e y di 4 punti,
corrispondenti ai punti toccati da un percorso e manipolare i dati ricevuti
in base ad un parametro ricevuto da linea di comando:
-Parametro “–m” : calcola e stampa a video la lunghezza del percorso
composto dai 4 segmenti.
Parametro “–a” : calcola e stampa a video la distanza minima tra le
coordinate inserite.*/


typedef struct coordinate
{
    float x;
    float y;
}punto;

int main(int argc, char* argv[])
{
    punto p[N]={0};
    int i=0;
    char parametro[100]={0};
    char stringa[100];
    int ok=0;
    float lunghezza=0;
    float distanza_min=0;
    float res[N]={0};
    float min=0;



    for(i=0;i<N;i++)
    {
        printf("Inserisci le coordinate dei punti.\n");
        scanf("%f",&p[i].x);
        scanf("%f",&p[i].y);
    }

    fflush(stdin); //perchè restava inserito l'invio precedente--->per ovviare ai problemi della gets
    printf("Inserisci stringa per confrontare il parametro.\n");
    gets(stringa);

    if (argc!=2)
    {
        printf("Errore:numero di argomenti non valido.\n");
        return 1;
    }
    if (argv[1]!=NULL)
    {
       sscanf(argv[1],"%s",parametro);
    }




    if(strcmp(parametro,stringa)==0)
    {
        printf("OK:il parametro e' corretto");
        ok=1;
    }
    else
    {
        printf("NO:il parametro e' errato.\n");
    }


    if(ok==1 && strcmp(stringa,"-m")==0)
    {
        ok=2;
        for(i=0;i<N;i++)
        {
            res[i]=sqrt((p[i+1].x-p[i].x)*(p[i+1].x-p[i].x)+(p[i+1].y-p[i].y)*(p[i+1].y-p[i].y));
        }
        i=0;
        res[3]=sqrt((p[3].x-p[0].x)*(p[3].x-p[0].x)+(p[3].y-p[0].y)*(p[3].y-p[0].y));
        lunghezza=res[0]+res[1]+res[2]+res[3];
        ok=2;

    }
    else if(ok==1 && strcmp(stringa,"-a")==0)
    {
        for(i=0;i<N;i++)
        {
            res[i]=sqrt((p[i+1].x-p[i].x)*(p[i+1].x-p[i].x)+(p[i+1].y-p[i].y)*(p[i+1].y-p[i].y));
        }
        i=0;
        res[3]=sqrt((p[3].x-p[0].x)*(p[3].x-p[0].x)+(p[3].y-p[0].y)*(p[3].y-p[0].y));
        min=res[0];
        for(i=0;i<N;i++)
        {
            if(res[i]<=min)
            {
                min=res[i];
                distanza_min=min;
                ok=3;
            }
        }
    }
        else
        {
        printf("Errore!\n");
        return 1;
        }


        if(ok==2)
        {
        printf("La lunghezza del percorso vale: %.3f",lunghezza);
        }
        else if(ok==3)
        {
        printf("La distanza minima percorsa vale: %.3f",distanza_min);
        }

return 0;
}

