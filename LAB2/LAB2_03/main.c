#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lenght=0, width=0, perimeter=0;

    printf("Inserisci la base del rettangolo: ");
    scanf("%f", &lenght);

    printf("Inserisci l'altezza del rettangolo: ");
    scanf("%f", &width);

    perimeter= 2*lenght+2*width;
    printf("Il perimetro e': %f",perimeter);
    return 0;
    }
