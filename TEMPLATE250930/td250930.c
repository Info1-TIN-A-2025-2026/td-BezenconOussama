#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
/*
 PRINT MASSE1 EN [T]
 PRENDRE MASSE1
 Controler masse1
 PRINT MASSE2 EN [T]
 Controler masse2
 PRENDRE MASSE2
 DISTANCE EN [KM]
 CONTROLER DISTANCE
 PRENDRE DISTANCE EN MèTRE

	(MASSE1*MASSE2)/(DISTANCE*DISTANCE)*G

prendre RéSULTAT ON PREND LA PUISSANCE ET ON EN FAIT UNE NOTATION INGéNIEURE

force gravitationelle en les deux corps :

*/
{

	double m1, m2, d, f;
	printf("Masse 1 en Tonnes \n");
	scanf("%lf", &m1);
	if (m1 < 0)
	{
		printf("Négatif, entrez une valeur Positive \n");
		return 0;
	}
	else if (m1 >= 1.78E308)
	{
		printf("Trop grande entrez une valeur \n");
		return 0;
	}
	printf("Masse 2 en Tonnes \n");
	scanf("%lf", &m2);
	if (m1 < 0)
	{
		printf("Négatif, entrez une valeur Positive \n");
		return 0;
	}
	else if (m1 >= 1.78E308)
	{
		printf("Trop grande entrez une valeur \n");
		return 0;
	}
	printf("Distance en Kilomètre \n");
	scanf("%lf", &d);
	if (m1 < 0)
	{
		printf("Négatif, entrez une valeur Positive \n");
		return 0;
	}
	else if (m1 >= 1.78E308)
	{
		printf("Trop grande entrez une valeur \n");
		return 0;
	}
	f = (m1 * m2) / (d * d) * 6.67E-11;
	printf("Force entre les 2 objet en Kilonewtons = %02e KN", f);
}