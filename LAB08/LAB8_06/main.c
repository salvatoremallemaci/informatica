#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*Si scriva un programma C che acquisisca sequenze di caratteri da tastiera
conclusa da un ritorno a capo. Il programma deve continuare ad acquisire
sequenze fino alla ricezione di un EOF (Ctrl-z). Il programma deve quindi
stampare le sequenze caratteri acquisiti
a. Sostituendo ad ogni sequenza “ch” il carattere ‘k’
b. Sostituendo le doppie con una sola ripetizione del carattere.
Esempio: rischio --->riskio
cammello ----> camelo*/


int main()
{
    char s[80]={0};
    int len=0;
    int i;
    int j=0;

    gets(s);
    //printf("%s\n",s);
    len=strlen(s);


    for(i=0;s[i]!=NULL;i++)
    {
        if( s[i]=='c' && s[i+1]=='h')
        {
            s[i]='k';
            for(j=i+1;j<len;j++)
            {
                s[j]=s[j+1];
            }
            len=len-1;
        }
    }

    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==s[i+1])
        {
            s[i]=7;
        }
    }
    printf("%s",s);
    return 0;
}
