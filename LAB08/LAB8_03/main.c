#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N  15
int main()
{
    char s1[N]={0};
    char s2[N]={0};
    int len1=0;
    int len2=0;
    int ok=99;
    int i=0;
    int risultato=0;
    int s1_int=0;
    int s2_int=0;
    int differenza=0;
    char stringa_res[N]={0};

    printf("Inserisci l'orario nella prima stringa: ");
    gets(s1);
    printf("Inserisci l'orario nella seconda stringa: ");
    gets(s2);

    len1=strlen(s1);
    len2=strlen(s2);


    //a)
    for(i=0;i<len1;i++)
    {
        if( (isdigit(s1[i])!=0) && (s1[2]==':') )
        {
            ok=1;
        }
        else
        {
            ok=0;

        }
    }
    if(ok==0)
    {
        printf("Formato non valido per s1!\n");
    }
    if(ok==1)
    {
        printf("Formato valido per s1!\n");
    }

    for(i=0;i<len2;i++)
    {
        if( (isdigit(s2[i])!=0) && (s2[2]==':') )
        {
            ok=1;
        }
        else
        {
            ok=0;

        }
    }
    if(ok==0)
    {
        printf("Formato non valido per s2!\n");
    }
    if(ok==1)
    {
        printf("Formato valido per s2!\n");
    }
    //b)
    risultato=strcmp(s1,s2);
    //printf("%d",risultato);
    if(risultato==0)
    {
        printf("I due orari coincidono.\n");
    }
    if(risultato==1)
    {
        printf("L'orario in s1 e' maggiore di s2.\n");
    }
    if(risultato==-1)
    {
        printf("L'orario in s2 e' maggiore di s1.\n");

    }

    //c)
    //-48 poichè effettua calcoli con i corrispondenti valori ASCII quindi sottratto 48(valore ASCII dello 0)
    if(risultato==-1)
    {
        s1_int=(((s1[0]-48)*10*60)+((s1[1]-48)*60)+((s1[3]-48)*10)+(s1[4]-48));
        printf("L'orario in s1, espresso in interi vale:%d.\n",s1_int);

        s2_int=(((s2[0]-48)*10*60)+((s2[1]-48)*60)+((s2[3]-48)*10)+(s2[4]-48));
        printf("L'orario in s1, espresso in interi vale:%d.\n",s2_int);

        differenza=s2_int-s1_int;
        printf("La differenza tra i due orari(in termini di interi) e':%d.\n",differenza);
    }


    //d)
    sprintf(stringa_res,"%d_minuti",differenza);
    printf(stringa_res);
    return 0;
}
