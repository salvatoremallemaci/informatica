#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char x;
    char y;
    int ok=0;

    printf("Inserisci i due caratteri secondo questa modalita': xy.\n");

    x=getchar();
    y=getchar();


    if ( (isalpha(x)!=0) && (isalpha(y)!=0) )
    {
        ok=1;
    }
    if(ok==1)
    {
        printf("i due caratteri sono entrambi alfabetici.\n");
    }
    else
    {
        ok=0;
        printf("uno/entrambi il/i carattere/i non e'/sono alfabetico/i.\n");
    }


    if(ok==1)
    {
        if(x==y)
        {
            printf("I due caratteri sono uguali.\n");
        }
        else if (x<y)
        {
            printf("%c,%c",x,y);
        }
        else if (x>y)
        {
            printf("%c,%c",y,x);
        }
    }

    if ( (ok==0) &&  (isdigit(x)!=0 || isdigit(y)!=0) )
    {
        printf("Almeno uno dei due caratteri e' una cifra.");
    }

    return 0;
}
