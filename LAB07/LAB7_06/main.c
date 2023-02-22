#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s1[80];
    char s2[80];
    char s3[80];

    int len1,len2,len3;
    int i=0;


    gets(s1);
    gets(s2);
    gets(s3);


    /*printf(s1);
    printf(s2);
    printf(s3);*/

    len1=strlen(s1);
    len2=strlen(s2);
    len3=strlen(s3);

    //prima stringa

    i=0;
    s1[i]=toupper(s1[i]);

    for(i=0;i<len1;i++)
    {
        if(s1[i]==' ')
           {
               s1[i+1]=toupper(s1[i+1]);
           }
    }

    //seconda stringa

    i=0;
    s2[i]=toupper(s2[i]);

    for(i=0;i<len2;i++)
    {
        if(s2[i]==' ')
           {
               s2[i+1]=toupper(s2[i+1]);
           }
    }

    //terzastringa

    i=0;
    s3[i]=toupper(s3[i]);

    for(i=0;i<len3;i++)
    {
        if(s3[i]==' ')
           {
               s3[i+1]=toupper(s3[i+1]);
           }
    }

    printf(s1);
    printf("\n");
    printf(s2);
    printf("\n");
    printf(s3);

    return 0;
}
