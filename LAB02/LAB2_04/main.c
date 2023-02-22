#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1=0,var2=0;

    var1=25;
    var2=-53;

    var1=(var1+var2)-var1;  // si può fare ma non come ho fatto io
    var2=(var1+var2)-var2;  //l'unico metodo per scambiare valori è utilizzando una variabile temporanea quindi meglio evitare di utilizzare qeusto metodo somma/sottrazione.


    return 0;
}
