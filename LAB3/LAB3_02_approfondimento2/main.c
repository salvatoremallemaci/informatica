#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C,X;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &X);

    C=A<X&&X<B;   //c � vera, quindi uguale a 1, se A � minore di X e X e minore di B;
    return 0;
}
    //C=A<X<B //non funziona perche' il < ha un'associtativit� da sinistra verso destra    (A � minore di X)---> vero o falso e poi il risultato confrontato con B}
