#include <stdio.h>
#include <stdlib.h>
#define N 10 //numero max dei valori per riga
#define J 5 //numero minimo delle righe che ci servono per effettuare i nostri controlli
#define K 10 //numero righe della matrice limite
#define L 2 //numero colonne della matrice limite



int main(int argc,char *argv[])
{
    FILE *fp1;
    FILE *fp2;
    float matrice[J][N]={{0}};
    float lim[K][L]={0};
    int i,j,g,h;

    if(argc!=2){
        printf("Errore:numero argomenti errato.\n");
        return -1;
    }
    fp1=fopen("misure.txt","r");
    if(fp1==NULL){
        printf("Errore durante l'apertura del file.\n");
        return -2;
    }
    fp2=fopen("limiti.txt","r");
    if(fp2==NULL){
        printf("Errore durante l'apertura del file.\n");
        return -3;
    }
    //trascrivo i miei valori limite nel vettore,
    //poichè ne conosco le dimensioni
    for(i=0;i<K;i++){
            fscanf(fp2,"%f",&lim[i][j]);
        }

    do{
        fscanf(fp1,"%f",&matrice[J][N]);

    }while(!feof(fp1));

return 0;
        }





