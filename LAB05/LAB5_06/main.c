#include <stdio.h>
#include <stdlib.h>
#define N   5

int main()
{
    int k=0;
    int ok=99;
    int i=0;
    int val=0;
    int trovato=0;
    int num=0;
    int v1[N]={0};
    int v2[N]={0};
    int cont=0;
    int z=0;

    while (i!=N && ok!=0)
    {
        printf("Inserisci il valore: ");
        scanf("%d",&val);
        if(val>=0)
        {
            v1[i]=val;
            i++;
            ok=1;
        }
        else if (val<0)
        {
            ok=0;
        }
    }



    while (num>=0)
    {
        printf("Valore da ricercare: ");
        scanf("%d",&num);

        for(i=0;i<N;i++)
        {
            if (num==v1[i])
            {
                v2[k]=i;
                trovato=1;
                k++;
            }
        }
    if (trovato==1)
    {
        printf("il valore compare in posizione %d \n",num);
        for (z=0;z<N;z++)
        {
            printf("%d\n",v2[z]);
            v2[z]=0;
        }
        printf("\n");
    }
    else
    {
        if (num>0)
        {
            printf("il valore ricercato non compare nel vettore");
        }
        else
        {
            printf("Ricerca terminata");
        }
    }

    }






    return 0;
}
