/********************************************************************-*-c-*-*\
*               *  Computer Sciences 2016-17                                 *
*    #####      *  (!) Stefano Di Carlo <stefano.dicarlo@polito.it>          *
*   ######      *                                                            *
*   ###   \     *  Copying and distribution of this file, with or without    *
*    ##G  c\    *  modification, are permitted in any medium without royalty *
*    #     _\   *  provided this notice is preserved.                        *
*    |   _/     *  This file is offered as-is, without any warranty.         *
*    |  _/      *                                                            *
*               *   							     *
\****************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#define DIMBUF 5
#define NUMSENS 10

int main(int argc, char * argv[]) {

	typedef struct ll {
		float min;
		float max;
	} limits;

	limits l[NUMSENS];

	FILE *misure, *limiti;
	float buffer[DIMBUF][NUMSENS];
	float media;
	int s,i,j,riga,rigabuff,anomalie,totanomalie,limiteanomalie;

	if (argc != 2) {
		printf ("ERROR: numero di parametri sulla riga di comando errati");
	}

	sscanf (argv[1],"%d",&limiteanomalie);

	/* Apro il file dei limiti e me lo carico in una struttura in memoria */
	limiti = fopen ("limiti.txt","r");
	if (limiti == NULL) {
		printf ("Errore: impossibile aprire il file delle misure");
		exit(1);
	}
	for (s=0; s<NUMSENS; s++) {
		fscanf(limiti, "%f %f", &l[s].min,&l[s].max);
	}
	fclose(limiti);

	/* Apro il file delle misure in lettura */
	misure = fopen ("misure.txt","r");
	if (misure == NULL) {
		printf ("Errore: impossibile aprire il file delle misure");
		exit(1);
	}

	s=0;
	riga=1;
	rigabuff=0;
	/* Analizzo il file delle misure */
	do {
		fscanf(misure, "%f",&buffer[rigabuff][s]);
		s++;
		if (s == NUMSENS) {
			/* Se entro in questo if ho letto una riga intera (10 misure) */
			s=0;
			if (riga >= DIMBUF) {
				/* Se entro in questo if vuol dire che ho letto i valori delle prime DIM_BUF righe e quindi
 				 * posso iniziare ad analizzare le anomalie */
				anomalie = 0;
				for (i=0; i<NUMSENS; i++) {
					media = 0;
					for (j=0; j<DIMBUF; j++) {
						media = media + buffer[j][i];
					}
					media = media / DIMBUF;
					if (media < l[i].min || media > l[i].max) anomalie++;
				}
				if (anomalie>limiteanomalie) {
					totanomalie++;
					printf ("Anomalia rilevata alla riga %d\n", riga);
				}

			}
			riga++;
			rigabuff++;
			if (rigabuff == DIMBUF) rigabuff=0;
		}
	} while (!feof(misure));
	printf("Totale anomalie rilevate: %d\n", totanomalie);
	fclose(misure);
}
