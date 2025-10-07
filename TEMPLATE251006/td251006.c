#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main(int argc, const char *argv[])
/*
Tout se qui vient dans ./app
Vient de stdin
Se qui sort de constructif doit sortir dans STDOUT
Se qui sort d'erreur systéme doit sortir dans STDERROR
PRINT[F] f C'EST FORMAT IL FAUT LES APPRENDRE
*/
{
	char a = 'A';
	unsigned char num_student = 23, num_chairs =32;
	short delta = num_student-num_chairs;
	bool sw1 = true;
	bool sw2 = true;
	unsigned char state = (sw2 << 4) + sw1;
	long volume = 4343; // m^3
	long pression = -4;
	//
	// Print le f est un chaine de charactère
	// base 10 %hd pour signed short
	// base 10 %d %u pour unsgined INT
	// base héxa c'est %x pour minuscule ou %X
	// base binaire %b
	// base octale %o
	// base ASCII dpuis un char ou 1 entier %c
	//float en base 10 %f
	// double c %lf
	//
	printf("dedfghjkuztrewedrtzuio =%d\ndedfghsdewedrtzuio =%d\ndedfasdrewedrtzuio =%d\n", num_student, num_chairs, delta);
	printf("sw1 = %d\nsw2 = %d\n",sw1 ,sw2);
	printf("state = %x\n", state);

	// Je crée un cas emémoire qui est une valeur numérique qui est un entier signé et qui est représenté par le code ascii de "A"
	char b = 'A';

	printf("%d\n", a);
	printf("%c\n", b);
	printf("[%7ld]\n", volume); //(caler a droite
	printf("[%-7ld]\n", volume); // caler a gauche
	printf("[%-4ld]\n", pression); // caler a droite
	printf("[%+-7ld]\n", volume); // caler a gauche avec le signe toujours afficher

	double pi = 3.12121212;
	printf("[%lf]\n", pi); // 6 digit a pres la virgule de base
	printf("[%.2lf]\n", pi); // 6 digit a pres la virgule de base
	printf("[%+.2lf]\n", pi); // 2digit a pres la virgule de base avec signe
 	double absolutezero = -456.56;
	printf("[%+-.1lf]\n", absolutezero); // 1 digit a pres la virgule de base
	printf("[%+7.2lf]\n", pi); // 2 digit a pres la virgule de base
	printf("[%+7.2lf]\n", absolutezero); // 1 digit a pres la virgule de base

	double light_speed = 300000000;

	printf("[%+-7.1lf]\n",light_speed); // il affiche meme si sa sort du format

	int num_digit = 2;
	printf("[%.*lf]\n",num_digit, pi); // 6 digit a pres la virgule de base
	int sizelimit = 15;
	printf("[%*.*lf]\n",sizelimit,num_digit, pi); // 6 digit a pres la virgule de base

	// SCAN F
 /*The scanf function in C is used to read formatted input from the standard input (keyboard). It interprets the input based on the format specifiers provided and stores the values in the specified memory locations.

Example: Reading Two Integers

#include <stdio.h>

int main() {
int a, b;
scanf("%d %d", &a, &b); // Reads two integers
printf("You entered: %d and %d\n", a, b);
return 0;
}
Copier
Input: 5 10 Output: You entered: 5 and 10

Format Specifiers

%d: Reads an integer.

%f: Reads a floating-point number.

%c: Reads a single character.

%s: Reads a string (stops at whitespace).

%ld: Reads a long integer.

%lf: Reads a double.

%x: Reads a hexadecimal integer.

Example: Reading a String

#include <stdio.h>

int main() {
char name[50];
scanf("%s", name); // Reads a string until whitespace
printf("Hello, %s!\n", name);
return 0;
}
Copier
Input: John Doe Output: Hello, John!

Advanced Usage

Field Width: Limits the number of characters read.

scanf("%4s", str); // Reads up to 4 characters into str
Copier
Assignment Suppression: Skips input without storing it.

scanf("%*d %d", &x); // Skips the first integer and reads the second
Copier
Important Notes

Always use the & operator for variables (except arrays) to pass their address.

%s does not read spaces; use scansets (%[^\n]) to include spaces.

Ensure proper memory allocation for strings to avoid buffer overflows.

*/
	float x = 0;
	float y = 0;
	int ret = 0;
	printf("Please enter 2 values ( K separated )\n");
	ret = scanf(" %f K %f", &x,&y); // &x cest aldresse de X

	printf("x=%.4f\n", x);
	printf("y=%.4f\n", y);
	printf("ret=%d\n", ret);// dans scan F les séparateur pour le buffer osnt l'espace est l'entrée

	// clear le buffer entre les scan èpour que les saisies invalide ne se répete pas entre les sacn f


}