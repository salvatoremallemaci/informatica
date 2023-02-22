#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Si scriva un programma che legga da un file (il cui nome è ricevuto come
primo parametro sulla linea di comando) alcune informazioni ferroviarie.
Per ciascuna linea, il file contiene le seguenti informazioni (ciascuno dei
campi non superi i 20 caratteri di lunghezza e sia privo di spazi)
<stazione_partenza> <ora_partenza> <stazione_arrivo> <ora_arrivo>
Il programma può eventualmente ricevere come ulteriore parametro da
linea di comando il nome di una città; in tale caso, il programma calcoli e
stampi il numero di treni in arrivo ed il numero di treni in partenza da tale
città (se inclusa nell’elenco).*/


int main(int argc,char*argv[])
{
    FILE *fp;
    char riga[100]={0};
    char partenza[20]={0};
    float orapartenza=0;
    float oraarrivo=0;
    char arrivo[20]={0};
    char nomecitta[20]={0};
    int countarrivo=0;
    int countpartenza=0;

    if(argc!=3)
    {
        printf("Errore.Numero degli argomenti errato.\n");
        exit(1);
    }

    if((fp=fopen(argv[1],"r"))==NULL)
    {
        printf("Errore nell'apertura del file.\n");
        exit(1);
    }

    while((fgets(riga,100+2,fp))!=NULL)
    {
        if(sscanf(riga,"%s %f %s %f",partenza,&orapartenza,arrivo,&oraarrivo)!=EOF)
        {
            sscanf(argv[2],"%s",nomecitta);
            if((strcmp(nomecitta,partenza))==0)
            {
                countpartenza++;
            }
            else if((strcmp(nomecitta,arrivo))==0)
            {
                countarrivo++;
            }
        }
    }
    printf("Ci sono %d treni in partenza e %d treni in arrivo per quanto riguarda la citta' di %s",countpartenza,countarrivo,nomecitta);
    return 0;
}
