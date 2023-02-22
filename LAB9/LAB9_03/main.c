#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 20


/*Si scriva un programma che legga da un file, il cui nome è introdotto da
tastiera, alcune informazioni ferroviarie. Per ciascuna linea, il file contiene
le seguenti informazioni (ciascuno dei campi non superi i 20 caratteri di
lunghezza e sia privo di spazi)
<stazione_partenza> <ora_partenza> <stazione_arrivo> <ora_arrivo>
Il programma riceve poi da tastiera il nome di una città: il programma
calcoli e stampi il numero di treni in arrivo ed il numero di treni in
partenza da tale città (se inclusa nell’elenco).*/



int main()
{
    FILE *fp;
    char file[N];
    int cont1=0;
    int cont2=0;
    char partenze[N]={0};
    char arrivi[N]={0};


    //controllo file
    printf("Inserire nome del file da aprire:\n");
    gets(file);
    if ((fp = fopen(file,"r")) == NULL)
    {
        exit(1);  // errore irreversibile; file non apribile.
    }


    printf("Inserire il nome della citta' desiderata:\n");
    gets(file);

    while((fscanf(fp,"%s%*f%s%*f", partenze, arrivi))!=EOF)
    {
    if((strcmp(file, partenze))==0)
    {
      cont1++;
    }
    if((strcmp(file, arrivi))==0)
    {
     cont2++;
    }
  }
  printf("Ci sono %d treni in partenza da %s e %d treni in arrivo a %s", cont1, file, cont2, file);

    fclose(fp);

   return 0;
    }








