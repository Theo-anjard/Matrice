#include <stdio.h>
#include <stdlib.h>
double** F_matrice(int nb_l,int nb_c){
	double** Tableau;
	Tableau=malloc(nb_l*sizeof(double*));
	int i;
	for (i=0;i<nb_l;i++){
		Tableau[i]=malloc(nb_c*sizeof(double));
	}
	return Tableau;
}
/*------------------------------------------------------------*/
double**Give_arg(){		/*Nb de lignes et de colonnes*/
	int nb_l;
	int nb_c;
	double** tablo;
	printf("Entrez le nombre de lignes: ");
	scanf("%d/n",&nb_l);
	printf("Entrez le nombre de Colonnes: ");
	scanf("%d/n",&nb_c);
	tablo = F_matrice (nb_l,nb_c);
	return tablo;
}
int Affiche(double** TB,nb_l,nb_c){
int l;
int c;
	for (l=0;l<nb_l;l++){	
		for (c=0;c<nb_c;c++){
			printf("%lg",TB[l][c]);

	}}
	return 0;
}


/*
int tableau[10];
tableau[2]=21;
tableau[1]=11;
printf("%d \n",tableau[1][2]);
*/

int main()
{
double ** tablo2;
tablo2 = Give_arg();
Affiche(tablo2);

return 0;
}
