#include <stdio.h>
#include <stdlib.h>

int main()
{
    int int_1,int_2;

    float float_1,float_2;

    scanf("%d",&int_1);
    scanf("%d",&int_2);

    scanf("%f",&float_1);
    scanf("%f",&float_2);
    printf("int_1 e int_2: %5d%5d \n",int_1,int_2);
    printf("float_1: %5.2f \n",float_1);

    printf("float_2: %.3f \n",float_2);

    return 0;
}
