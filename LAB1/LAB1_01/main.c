#include <stdio.h>
int main(void)
{
    int x , y, z;
    printf("Introduci un numero intero: ");
    scanf("%d", &x);
    y = 3;
    z = x/y;

    printf("%d/%d=%d\n", x, y, z);
    return 0 ;
}
