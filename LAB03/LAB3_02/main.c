#include <stdio.h>
#include <stdlib.h>

int main()
{
      int A,B,C;
      A=0, B=0;
      C=((A&&B)||(!B))&&(!A); // &=AND || OR   ! NOT  VARIABILI BOOLEANE 1 VERO 0 FALSO     1)NOT2)AND3)OR
      printf("il valore di C e': %d \n",C);  // solo la combinazione A=0 B=0, da RISULTATO 1, quindi VERO;

      return 0;
}
