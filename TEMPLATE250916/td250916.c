#include <stdio.h>

int main(int argc, const char *argv[])
{
	/*On prend la valeurs de la console
	 On la compare a 0 pour affichéé error
	 Si positif Error
	 On prend s
	 On la compare a 86400 pour affiché overflow
	 Si positif Overflow
	 On divise par 3600 pour les heures h on divise par 60 pour les minutes m on fait modulo 60 pour le reste pour les seocnde s
	 On concat tout dans 1 string
	 On print dedans */
	int s = 0;
	printf("Number of seconds");
	if (s < 0)
	{
		printf("ERROR \n");
	}
	else if (s > 86400)

	{
		printf("OVERFLOW \n");
	}
	else
	{
		int h = s / 3600;
		int m = s % 3600;
		int s2 = s % 60;
		printf(h, ":",m, ":", s2);
	}
}