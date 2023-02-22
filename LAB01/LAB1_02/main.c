#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    printf("Il valore intero e': \n",x);
    scanf("%d",&x);
    if (x>0)
    {
        printf("Il valore di x e' positivo\n");
    }
    else
    {
        printf("Il valore assoluto e' negativo\n");
        x=x*(-1);
    }


    printf("Il valore assoluto di x e': %d",x);

return 0;
}
