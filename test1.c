#include <stdio.h>
#include <stdlib.h>
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



/*
int tableau[10];
tableau[2]=21;
tableau[1]=11;
printf("%d \n",tableau[1][2]);
*/

int main()
{
Give_arg();
int tablo;
printf("%d/n",&tablo);

return 0;
}
