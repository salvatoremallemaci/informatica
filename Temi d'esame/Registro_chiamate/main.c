#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 100


int main(int argc, char* argv[])
{
    FILE *fp1;
    FILE *fp2;
    char numero[N],data[N],orainizio[N],orafine[N];
    char amico[N]={0};
    char numerolncomando[N];
    int meselncomando;
    int orei,minutii,secondii;
    int oref,minutif,secondif;
    int giorno,mese,anno;
    float tariffa1,tariffa2,tariffa3,tariffa4;
    int fascia=0,nchiamate=0;
    float durata=0;
    float prezzo=0,sconto=0;
    float scontototale=0;

    if(argc!=3)
    {
        printf("Errore:numero degli argomenti errato.\n");
        return -1;
    }
    fp1=fopen("Clienti.dat.txt","r");
    if (fp1==NULL)
    {
        printf("Errore durante l'apertura del file.\n");
        return -2;
    }
    fp2=fopen("tariffe.txt","r");
    if (fp2==NULL)
    {
        printf("Errore durante l'apertura del file.\n");
        return -3;
    }

    strcpy(numerolncomando,argv[1]);
    sscanf(argv[2],"%d",&meselncomando);

    fscanf(fp2,"%f",&tariffa1);
    fscanf(fp2,"%f",&tariffa2);
    fscanf(fp2,"%f",&tariffa3);
    fscanf(fp2,"%f",&tariffa4);


    while(fscanf(fp1,"%s %s %s %s %s",numero,data,orainizio,orafine,amico)!=EOF){
        //verifico che il numero di telefono e il mese siano quelli richiesti dai dati
        //ricevuti da linea di comando.
        sscanf(data,"%d/%d/%d",&giorno,&mese,&anno);
        if( (strcmp(numerolncomando,numero)==0) && meselncomando==mese ){
            //mi scrivo ore,minuti e secondi in tre int
            sscanf(orainizio,"%d:%d:%d",&orei,&minutii,&secondii);
            sscanf(orafine,"%d:%d:%d",&oref,&minutif,&secondif);
            //incremento il numero di chiamate effettuate.
            nchiamate++;
            //adesso definiamo la durata della chiamata.
            durata=(float)abs(((oref-orei))*3600.0)+abs(((minutif-minutii)*60.0))+abs((secondif-secondii));
            //adesso definiamo la tariffa in base alla fascia oraria
            if(orei>=0 && orei<=5 && minutii<=59 && secondii<=59){
                fascia=1;
                //dunque dovrò applicare le tariffe della fascia 1.
            prezzo=prezzo+(float)(durata/30)*tariffa1;
            if(strcmp(amico,"S")==0){
                //devo applicare lo sconto amico
                sconto=(float)prezzo-(prezzo/2);
                scontototale=scontototale+(prezzo-sconto);
                prezzo=prezzo-sconto;
                }
            }
            else if(orei>=6 && orei<=11 && minutii<=59 && secondii<=59){
                fascia=2;
                //dunque dovrò applicare le tariffe della fascia 2 .
            prezzo=prezzo+(float)(durata/30)*tariffa2;
            if(strcmp(amico,"S")==0){
                //devo applicare lo sconto amico
                sconto=(float)prezzo-(prezzo/2);
                scontototale=scontototale+(prezzo-sconto);
                prezzo=prezzo-sconto;
                }
            }
            else if(orei>=12 && orei<=17 && minutii<=59 && secondii<=59){
                fascia=3;
                //dunque dovrò applicare le tariffe della fascia 3 .
            prezzo=prezzo+(float)(durata/30)*tariffa3;
            if(strcmp(amico,"S")==0){
                //devo applicare lo sconto amico
                sconto=(float)prezzo-(prezzo/2);
                scontototale=scontototale+(prezzo-sconto);
                prezzo=prezzo-sconto;
                }
            }
            else if(orei>=18 && orei<=23 && minutii<=59 && secondii<=59){
                fascia=4;
                //dunque dovrò applicare le tariffe della fascia 4.
            prezzo=prezzo+(float)(durata/30)*tariffa4;
            if(strcmp(amico,"S")==0){
                //devo applicare lo sconto amico
                sconto=(float)prezzo-(prezzo/2);
                scontototale=scontototale+(prezzo-sconto);
                prezzo=prezzo-sconto;
                }
            }
        }
    }
    printf("Dunque il numero da lei selezionato e' il seguente: %s\n",numerolncomando);
    printf("Mentre il mese e' il seguente: %d\n",meselncomando);
    printf("La bolletta mensile ammonta a %.3f euro.\n",prezzo);
    printf("Il cliente ha effettuato %d chiamate.\n",nchiamate);
    printf("Lo sconto amici totale ammonta a %.3f euro",scontototale);

    fclose(fp1);
    fclose(fp2);
    return 0;
}
