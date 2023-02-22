#include <stdio.h>
#include <stdlib.h>

int main()
{
    float price=0, tax=0, receipt=0;

    printf("Inserisci il valore di price: ");
    scanf("%f", &price);

    printf("Inserisci il valore di tax: ");
    scanf("%f",&tax);

    receipt=price+(price*tax)/100;
    printf("Il valore di receipt e': %.3f",receipt);
    return 0;
}
