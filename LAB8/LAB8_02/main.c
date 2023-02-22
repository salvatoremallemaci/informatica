#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define N   10
int main()
{
    char stringa[N];
    int len=0;
    int i=0;
    printf("Acquisire i valori della stringa: ");
    scanf("%s",stringa);
    len=strlen(stringa);


    for (i=0;i<len;i++)
    {
        stringa[i]=toupper(stringa[i]);
    }
    printf("%s\n",stringa);


    for (i=0;i<len;i++)
    {
        if ((isalnum(stringa[i])==0))
        {
            stringa[i]='_';
        }
    }
    printf("%s\n",stringa);


    for (i=0;i<len;i++)
    {
        if ((isdigit(stringa[i])!=0))
        {
            stringa[i]='*';
        }
    }
    printf("%s\n",stringa);
    return 0;
}
