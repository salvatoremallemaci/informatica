#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    int val1=0;
    int val2=0;
    char ch;
    float variabile;

    if(argc!=4)
    {
        printf("Errore:numero argomenti non valido.\n");
        return 1;
    }
    if(argv[1]!=NULL)
    {
        val1=atoi(argv[1]);
    }
    if(argv[2]!=NULL)
    {
        val2=atoi(argv[2]);
        //sscanf(argv[2],"%d",&val2);
    }
    if(argv[3]!=NULL)
    {
        sscanf(argv[3],"%c",&ch);
    }

    if(ch=='a')
    {
        variabile=val1+val2;
        printf("ch=a.La somma vale: %.2f\n",variabile);
    }
    else if(ch=='b')
    {
        variabile=val1-val2;
        printf("ch=b.La differenza vale: %.2f\n",variabile);
    }
    else if(ch=='c')
    {
        variabile=val1*val2;
        printf("ch=c.Il prodotto vale: %.2f\n",variabile);
    }
    else if(ch=='d' && val2!=0)
    {
        variabile= (float)val1/val2;
        printf("ch=d.Il rapporto vale: %.2f\n",variabile);
    }
    else
    {
        printf("Errore:lettera selezionata sbagliata e/o non corrispondente a nessuna operazione.\n");
    }

    return 0;
}
