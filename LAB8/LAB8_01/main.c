#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N   10
int main()
{
    char s[N];
    int lunghezza=0;
    int lettera=0;
    int numero=0;
    int i=0;

    printf("Inserisci i caratteri nella stringa: \n");
    scanf("%s",s);


    lunghezza=strlen(s);
    printf("La stringa e' lunga: %d \n",lunghezza);

    for (i=0;i<lunghezza;i++)
    {
        if ((isdigit(s[i])!=0))
        {
            numero++;
        }
        else if((isalpha(s[i])!=0))
        {
            lettera++;
        }
    }

    printf("Nella stringa ci sono %d numeri.\n",numero);

    printf("Nella stringa ci sono %d lettere. \n",lettera);

    char s2[N];
    printf("Inserisci i caratteri della seconda stringa: \n");
    scanf("%s",s2);

    char *puntatore;
    puntatore=strstr(s,s2);

    if (puntatore!=0)
    {
        printf("SI");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
