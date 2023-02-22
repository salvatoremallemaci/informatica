#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#define FALSE 0
#define TRUE 1
/*
 3 4 5
 4 3 5
 5 3 4
*/
int terna_pitagorica(int a, int b, int c, int *p_overflow);

int main()
{
int a, b, c, max, contatore;
int trovata_terna, flag_overflow;

contatore = 0;
max = sqrt(INT_MAX);
for(a = 1; a < max; a++)
    {
    flag_overflow = FALSE;
    for(b = a+1; b < max && !flag_overflow; b++)
        {
        trovata_terna = FALSE;
        for(c = b+1; c < max && !trovata_terna && !flag_overflow; c++)
            if(terna_pitagorica(a,b,c, &flag_overflow))
                {
                printf("%d %d %d\n", a, b, c);
                contatore++;
                if(contatore % 23 == 0)
                    system("PAUSE");
                trovata_terna = TRUE;
                }
        }
    }
return 0;
}

int terna_pitagorica(int a, int b, int c, int *p_overflow)
{
int somma;
int risultato;

somma = a *a + b*b;
if(somma < 0)
    {
    *p_overflow = TRUE;
    risultato = FALSE;
    }
else
    {
    *p_overflow = FALSE;
    risultato = (somma == c * c);
    }
return(risultato);
}
