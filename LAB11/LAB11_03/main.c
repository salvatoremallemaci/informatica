#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    FILE *fp;

    char materia[20]={0};
    char nome[20]={0};
    char cognome[20]={0};
    int periodo=0;
    int crediti=0;
    int percentualesuperamento=0;
    char riga[100]={0};
    int max=0;
    int min1=101;
    char materiamaxcrediti[20]={0};
    char materiamaxdifficile1[20]={0};
    char materiamaxdifficile2[20]={0};
    char cognometastiera[20]={0};
    int sommacrediti=0;
    float mediasuperamento=0;
    int count=0;

    if(argc != 2)
    {
        printf("Errore.Numero di argomenti errato.");
        exit(1);
    }

    if((fp=fopen(argv[1],"r"))==NULL)
    {
        printf("Errore nell'apertura del file.");
        exit(1);
    }

    printf("Inserisci il cognome del professore interessato: ");
    gets(cognometastiera);

    while(fgets(riga,100+2,fp)!=NULL)
    {
        if((sscanf(riga,"%s %s %s %d %d %d",materia,nome,cognome,&periodo,&crediti,&percentualesuperamento))!=EOF)
        {
            if(crediti>max)
            {
                max=crediti;
                sprintf(materiamaxcrediti,"%s",materia);
            }
            if(periodo==1)
            {
                if(percentualesuperamento<=min1)
                {
                    min1=percentualesuperamento;
                    sprintf(materiamaxdifficile1,"%s",materia);
                }

            }
            else if(periodo==2)
                {
                    if(percentualesuperamento<=min1)
                    {
                        min1=percentualesuperamento;
                        sprintf(materiamaxdifficile2,"%s",materia);
                    }

                }

            if(strcmp(cognometastiera,cognome)==0)
            {
                count++;
                sommacrediti=sommacrediti+crediti;
                mediasuperamento=(float)mediasuperamento+percentualesuperamento;

            }
        }
    }

    mediasuperamento=(float)(mediasuperamento/count);


    printf("La materia che assegna piu' crediti (%d) e' %s.\n",max,materiamaxcrediti);
    periodo=1;
    printf("Nel periodo %d la materia piu' difficile da superare e' %s\n",periodo, materiamaxdifficile1);
    periodo=2;
    printf("Nel periodo %d la materia piu' difficle da superare e' %s\n",periodo,materiamaxdifficile2);

    printf("Per quanto riguarda il professore %s possiamo dire che: \n",cognometastiera);
    printf("La somma dei crediti inerenti alle sue materie e' %d.\n",sommacrediti);
    printf("La media di superamento degli esami da lui tenuti e' del %.2f percento \n",mediasuperamento);
    return 0;
}
