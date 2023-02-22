#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[80];
    char s2[80];
    char s3[80];


    int len1,len2,len3;
    int i=0;
    int righe=0;
    int parole=0;
    float lunghezza=0;



    gets(s1);
    righe++;
    gets(s2);
    righe++;
    gets(s3);
    righe++;

    len1=strlen(s1);
    len2=strlen(s2);
    len3=strlen(s3);

    printf("Il numero di righe e' %d.\n",righe);


    char * punt;
    printf ("Divido la stringa \"%s\" in tokens:\n",s1);
    punt = strtok (s1," ");
    while (punt != NULL)
    {
        printf ("%s\n",punt);
        lunghezza=strlen(punt);
        punt = strtok (NULL," ");

        parole++;
    }
    printf("Il numero di parole all'interno della stringa e': %d.\n",parole);




    return 0;
}
