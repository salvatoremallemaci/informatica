#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value1=0;
    long value2=0;
    unsigned int value3=0;

    int value,previous;
    unsigned int uvalue,uprevious;

    /*a)
    value1= 3000000000;
    value2= 3000000000;
    value3= 3000000000;*/

    /*b)
    scanf("%d",&value1);
    printf("value1 vale: %d \n",value1);

    scanf("%li",&value2);
    printf("value2 vale: %li \n",value2);

    scanf("%u",&value3);
    printf("value 3 vale:%u \n",value3); */

    //c)
    value=0;
    while(value>=0)
    {
        previous=value;
        value++;
    }
        printf("Il valore max con segno e': %d\n",previous);


    uvalue=0;
    do
    {
        uprevious=uvalue;
        uvalue++;
    }
    while(uvalue>uprevious);
    printf("Il valore max senza segno e': %u\n",uprevious);



    /*test
    value1=2147483647+1;
    value3=4294967295+1;*/

    return 0;
}
