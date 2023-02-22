#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int numero;
    int j;

    printf("Inserisci il valore: ");
    scanf("%d",&numero);

    if (numero<=40)
    {
        for (i=0;i<numero;i++)
        {
            for (j=0;j<=i;j++)
            {
                printf("*");
            }
                printf("\n");
        }
    }
    else
    {
        printf("Errore: il valore selezionato non e' corretto");
    }
}
