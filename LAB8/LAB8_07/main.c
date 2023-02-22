#include <stdio.h>
#include <stdlib.h>
#define R 5
#define C 5

/*Si scriva un programma C che:
- legga da tastiera (per righe o per colonne, a scelta) una matrice
quadrata di dimensione uguale a 5 righe e 5 colonne
- rintracci se tale matrice contiene delle sequenze di elementi adiacenti
uguali a zero di lunghezza uguale o maggiore di 3
- visualizzi l'indice di riga in cui tali sequenze si presentano.
Esempio.
Sia la matrice la seguente:
0 0 0 4 5
1 2 0 4 5
1 0 0 4 0
1 2 3 4 5
1 0 0 0 0
La sequenza di valori "0 0 0" compare nella prima e nell'ultima riga e
quindi occorre riportare una indicazione del tipo:
La sequenza compare nella riga 1
La sequenza compare nella riga 5
Si osservi che la riga 3 non contiene la sequenza indicata in quanto i tre
zeri non si trovano in posizioni contigue.*/

//PER RIGHE
int main()
{
    int m[R][C]={{0}};
    int i=0;
    int j=0;

    printf("Inserisci i valori della matrice:\n");

    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            if (m[i][j]==0 && m[i][j+1]==0 && m[i][j+2]==0)
            {
                printf("La sequenza 0 0 0 compare nella righa %d.\n",i+1);
                break;
            }
            else if (m[i][j]==0 && m[i][j+1]==0 && m[i][j+2]==0 && m[i][j+3]==0)
            {
                printf("La sequenza 0 0 0 compare nella righa %d.\n",i+1);
                break;
            }
            else if (m[i][j]==0 && m[i][j+1]==0 && m[i][j+2]==0 && m[i][j+3]==0 && m[i][j+4]==0)
            {
                printf("La sequenza 0 0 0 compare nella righa %d.\n",i+1);
                break;
            }

        }
    }
    return 0;
}

/*

//PER COLONNE
int main()
{
    int m[R][C]={{0}};
    int i=0;
    int j=0;
    int ok=99;

    printf("Inserisci i valori della matrice:\n");

    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    for(j=0;j<C;j++)
    {
        for(i=0;i<R;i++)
        {
            if (m[i][j]==0 && m[i+1][j]==0 && m[i+2][j]==0)
            {
                printf("La sequenza 0 0 0 compare nella colonna %d.\n",j+1);
                break;
            }
            else if (m[i][j]==0 && m[i+1][j]==0 && m[i+2][j]==0 && m[i+3][j]==0)
            {
                printf("La sequenza 0 0 0 compare nella colonna %d.\n",j+1);
                break;
            }
            else if (m[i][j]==0 && m[i+1][j]==0 && m[i+2][j]==0 && m[i+3][j]==0 && m[i+4][j]==0)
            {
                printf("La sequenza 0 0 0 compare nella colonna %d.\n",j+1);
                break;
            }
        }
    }
    return 0;
}

*/
