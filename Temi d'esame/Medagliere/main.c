#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 9 //al più 207
typedef struct{
char naz[4];
float med;
}struttura;

int main(int argc, char *argv[])
{
    FILE *fp;
    struttura clas[N]={0};//inizializzo tutto a 0;
    char gara[5],atleta[10],nazione[3],tmpe[3];
    int posizione,i=0,inizio=0,j;
    float oro,max1,max2,max3,tmp;

    if(argc!=2){
        printf("Errore:numero argomenti errato.");
        return -1;
    }
    fp=fopen(argv[1],"r");
    if(fp==NULL){
        printf("Errore durante l'apertura del FILE.");
        return -2;
    }

    i=1;
    oro=0.0;

    while(fscanf(fp,"%s %s %s %d",gara,atleta,nazione,&posizione)!=EOF){

        oro=0.0;
        if(posizione==1){
            oro++;
        }
        else if(posizione==2){
            oro=(float)posizione-1.9;
        }
        else if(posizione==3){
            oro=(float)posizione-2.95;
        }
        else if(posizione>=4){
            oro=0.0;
        }
        //non metto a 0 perche mi bugga la prima posizione ????
        for(i=1;i<N;i++)
        {
            if(strcmp(clas[i].naz,"\0")==0)
            {
                //il posto è vuoto.
                strcpy(clas[i].naz,nazione);
            }
            if(strcmp(clas[i].naz,"\0")!=0)
            {
                //il posto non è vuoto
                if(strcmp(clas[i].naz,nazione)==0)
                    {
                        //se sono uguali
                        strcpy(clas[i].naz,nazione);
                        clas[i].med=clas[i].med+oro;
                        break;
                    }
                else if(strcmp(clas[i].naz,nazione)!=0)
                {
                    //se sono diversi
                    while(strcmp(clas[i].naz,"\0")==0){
                        i++;
                        strcpy(clas[i].naz,nazione);
                        clas[i].med=clas[i].med+oro;
                        break;
                    }
                }
                }
            }
    }
        for(i=1;i<N;i++)
        {
            printf("La nazione %s ha ottenuto %.2f medaglie d'oro corrispondenti.\n",clas[i].naz,clas[i].med);
        }
        printf("Le prime 3 nazioni del medagliere sono:\n");
        //ordinare i vettori in senso decrescente e stampare le prime 3 nazioni.
        for(i=1;i<N;i++)
        {

            for(j=i+1;j<N;j++)
            {

                if(clas[i].med<clas[j].med){
                    tmp=clas[i].med;
                    clas[i].med=clas[j].med;
                    clas[j].med=tmp;
                    strcpy(tmpe,clas[i].naz);
                    strcpy(clas[i].naz,clas[j].naz);
                    strcpy(clas[j].naz,tmpe);
                }
            }
        }
        for(i=1;i<=3;i++)
        {
            printf("%s con %.2f medaglie equivalenti.\n",clas[i].naz,clas[i].med);
        }
        fclose(fp);
        return 0;
}
