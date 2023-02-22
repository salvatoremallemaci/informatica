#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define N 1000
int main()
{
    char s[80];
    int len=0;
    int i=0;
    int cont=0;
    int cont1=0;
    int cont2=0;
    int cont3=0;
    printf("inserisci i valori della stringa: \n");

    gets(s);

    len=strlen(s);

    for(i=0;i<len;i++)
    {
        if ((isprint(s[i])!=0))
        {
            cont++;
        }
    }
    printf("Ci sono %d caratteri.\n",cont);


    for(i=0;i<len;i++)
    {
        if ((isalpha(s[i])!=0))
        {
            cont1++;
        }
    }
    printf("Ci sono %d lettere.\n",cont1);

    for(i=0;i<len;i++)
    {
        if ((isupper(s[i])!=0))
        {
            cont2++;
        }
    }
    printf("Ci sono %d lettere maiuscole.\n",cont2);

    for (i=0;i<len;i++)
    {
        if (isspace(s[i]))
        {
            cont3++;
        }
    }
    printf("Ci sono %d spazi.\n",cont3);



    return 0;
}
