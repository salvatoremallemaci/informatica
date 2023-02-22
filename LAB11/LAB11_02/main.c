#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 100


/*Si scriva un programma per la gestione di una rubrica di massimo 100
persone. Il programma deve permettere la memorizzazione dei seguenti
dati in una struttura:
- Nome
- Cognome
- Numero di telefono fisso
- Numero di telefono mobile
typedef struct nomi {
char nome[20];
char cognome[20];
char fisso[20];
char mobile[20];
} Nomi;
Il programma deve permettere all'utente di effettuare, tramite scelta da
menu, l’inserimento di un nuovo nominativo (tollerando eventuali
duplicazioni di nome e cognome, ma segnalandole all’utente e chiedendo
un’ulteriore conferma), e la stampa dell’elenco completo.*/

typedef struct nomi {
char nome[20];
char cognome[20];
char fisso[20];
char mobile[20];
} Nomi;


int main()
{
    Nomi v[N];
    int i=0;
    int scelta=0;
    int scelta1=0;
    int scelta3=0;
    int count=1;
    int ok=0;

    for(i=0;i<N;i++)
    {
        //situazione di partenza
        printf("Inserisci il nome: ");
        scanf("%s",&v[i].nome);
        printf("Inserisci il cognome: ");
        scanf("%s",&v[i].cognome);
        printf("Inserisci il numero di telefono fisso: ");
        scanf("%s",&v[i].fisso);
        printf("Inserisci il numero di telefono mobile: ");
        scanf("%s",&v[i].mobile);

        if(ok==1)
        {
        for(int j=0;j<count;j++)
        {
        if ( (strcmp(v[j-1].nome,v[i].nome)==0) && (strcmp(v[j-1].cognome,v[i].cognome)==0) )
        {
            printf("Nominativo uguale. Cosa vuoi fare? Opzione 1 = Salva il nominativo. ");
            scanf("%d",&scelta1);
            if(scelta1==1)
            {
                printf("Hai deciso di salvare il nominativo.\n");
                break;
            }
        }
        }
        }
        printf("Cosa vuoi fare? Opzione 1 inserisci un nuovo nomitativo.Opzione 2 non inserire nessun nominativo: ");
        scanf("%d",&scelta);
        if(scelta==1)
        {
        count++;
        ok=1;
        continue;
        }
        else if(scelta==2);
        {
            break;
        }
    }

    printf("Cosa vuoi fare adesso? Opzione 1: Stampare la rubrica. Opzione 2: Terminare il programma.");
    scanf("%d",&scelta3);
    if(scelta3==1)
    {
        for(i=0;i<count;i++)
        {
            printf("Contatto numero %d \n",i+1);
            printf("Nome: ");
            printf("%s",&v[i].nome);
            printf("\n");
            printf("Cognome: ");
            printf("%s",&v[i].cognome);
            printf("\n");
            printf("Fisso: ");
            printf("%s",&v[i].fisso);
            printf("\n");
            printf("Mobile: ");
            printf("%s",&v[i].mobile);
            printf("\n");
        }
    }
    else if(scelta3==2)
    {
        exit(0);
    }
    return 0;
}
