#include <stdio.h>

int main(int argc, const char *argv[])
{
	//On prend la valeurs de la console
	//On la compare a 0 pour affichéé error
	//Si positif Error
	//On prend s
	//On la compare a 86400 pour affiché overflow
	//Si positif Overflow
	//On divise par 3600 pour les heures h on divise par 60 pour les minutes m on fait modulo 60 pour le reste pour les seocnde s
	//On concat tout dans 1 string
	//On print dedans

	unsigned int h;
	unsigned int m;
	unsigned int s2;
	int s;
	printf("Number of seconds \n");
	scanf("%d", &s);
	if (s < 0)
	{
		printf("Error \n");
	}
	else if (s >= 86400)
	{
		printf("Overflow \n");
	}
	else {
	h = s / 3600;
	m = s % 3600 /60;
	s2 = s % 60;
	printf("%02u:%02u:%02u\n",h,m,s2);
	}
}