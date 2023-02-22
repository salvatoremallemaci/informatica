#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main ()
{

    double  base;
    double  esponente;
    double  risultato;

    printf("Inserisci il valore della base: \n");
    scanf("%lf",&base);
    printf("Inserisci il valore dell'esponente: \n");
    scanf("%lf",&esponente);

    risultato=pow(base,esponente);

    printf("La potenza vale: %lf\n",risultato);


    return 0;
}
