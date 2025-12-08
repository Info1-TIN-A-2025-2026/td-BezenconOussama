#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
// S0	Nombre année	Float 	Var
// K	Prix strike		Float	Var
// T	Nombre de jour 	Float	Var
//		du contract
// sigma 27.4%			Contante
//	taux 1.5%			Contante
// price pirx fianl		flaot	var
// si "chaques inputs" = + et est Plus petit que le max et que le scanf fonctionne je passe a la prochaine saisie
// on fait le calccule on l'affiche
//
//
//
//
double x;
double normale(double x)
{
return (exp((-1 * pow(x, 2)) / 2.)) / (sqrt(2 * M_PI));
}

int main(int argc, const char *argv[])
{

	double S0, K, T, sigma = 27.4, taux = 1.5, price, d1, d2;
	int ret;
	printf("Prix de l'action [$]\n");
	ret = scanf("%lf", &S0);
	if (S0 < 0)
	{
		printf("Négatif, entrez une valeur positive \n");
		return 0;
	}
	else if (S0 >= 1.78E308)
	{
		printf("Trop grande entrez une valeur \n");
		return 0;
	}
	else if (ret <= 0)
	{
		printf("Saisie Invalide\n");
		return 0;
	}
	ret = 0;
	printf("Prix strike[$]\n");
	ret = scanf("%lf", &K);
	if (K < 0)
	{
		printf("Négatif, entrez une valeur positive \n");
		return 0;
	}
	else if (K >= 1.78E308)
	{
		printf("Trop grande entrez une valeur \n");
		return 0;
	}
	else if (ret <= 0)
	{
		printf("Saisie Invalide\n");
		return 0;
	}
	ret = 0;
	printf("Nombre de jours[jours]\n");
	ret = scanf("%lf", &T);
	if (T < 0)
	{
		printf("Négatif, entrez une valeur Positive \n");
		return 0;
	}
	else if (T >= 1.78E308)
	{
		printf("Trop grande entrez une valeur \n");
		return 0;
	}
	else if (ret <= 0)
	{
		printf("Saisie Invalide\n");
		return 0;
	}
	ret = 0;
	d1 = 1 / (sigma * sqrt(T)) * (log(S0 / K) + (taux + 0.5 * sigma * sigma * T));
	d2 = d1 - (sigma * sqrt(T));
	price = S0 * normale(d1) - K * exp(-taux * T) * normale(d2);
	printf("Le prix de votre contract est le suivant = %.2lf \n$", price);
	printf("Le prix de votre contract est le suivant = %.2lf \n$", normale(d1));
	printf("Le prix de votre contract est le suivant = %.2lf \n$", normale(d2));
	printf("Le prix de votre contract est le suivant = %.2lf \n$", S0);
	printf("Le prix de votre contract est le suivant = %.2lf \n$", S0);
}