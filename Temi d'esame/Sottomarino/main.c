#include <stdio.h>
#include <stdlib.h>
#define N 5 //15

int main(int argc, char *argv[])
{
    FILE *fp1;
    FILE *fp2;
    float matrice[N][N]={{0}};
    int i=0,j=0,riga,colonna,maxim;
    int reperti=0;
    int caso=0;
    float maxpress,maxpeso,pressionetmp;
    float peso=0;
    if(argc!=6){
        printf("Errore:numero argomenti errato!\n");
        return -1;
    }
    fp1=fopen(argv[1],"r");
    if(fp1==NULL){
        printf("Errore durante l'apertura del file.\n");
        return 2;
    }
    fp2=fopen(argv[2],"r");
    if(fp2==NULL){
        printf("Errore durante l'apertura del file.\n");
        return -3;
    }

    //in questo caso stiamo considerando una matrice quadrata NxN, per comodità di 5.
    //poichè conosco la dimensione della mia matrice 5x5(15x15),posso memorizzarla in memoria.
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            fscanf(fp1,"%f",&matrice[i][j]);
        }
    }
    while(fscanf(fp2,"%d %d %f",&riga,&colonna,&peso)!=EOF){
        reperti++;//tengo conto dei reperti presenti in totale.
        //mi prendo da linea di comando i miei tre parametri
        sscanf(argv[3],"%f",&maxpress);
        sscanf(argv[4],"%f",&maxpeso);
        sscanf(argv[5],"%d",&maxim);
        //iniziamo
        printf("Reperto analizzato in posizione %d %d\n",riga,colonna);
        if (peso>maxpeso){
            printf("Peso superiore!\n");
        }
        else{
            //analizzo la pressione in quelle coordinate,verificando che sia
            //minore o uguale della soglia da noi prefissata.
            pressionetmp=matrice[riga][colonna];
            if(pressionetmp>maxpress){
                printf("Pressione superiore alla soglia(%.2f)!\n",pressionetmp);
            }
            else if(pressionetmp<=maxpress){
                printf("Immersione numero %d:",++caso);
                printf("Pressione pari a %.2f\n",pressionetmp);

            }
        if(caso>=maxim){
            printf("Numero immersioni superate.\n");
            printf("Reperti ancora recuperabili: %d\n",reperti-caso);
            break;
        }
    }
}
    fclose(fp1);
    fclose(fp2);
    return 0;
}
