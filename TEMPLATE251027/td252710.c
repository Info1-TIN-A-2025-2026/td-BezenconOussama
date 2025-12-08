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
int main(int argc, const char *argv[]){
    int i=0,n=0;
    

    for(i = 2; i <= 100000;i++)
    {
        bool isnotprime = false;
        for (n = 2; n <= sqrt(i) ; n++)
            {
            if(i%n == 0)
            isnotprime = true;
                }
                if (isnotprime == false) 
                {
                printf("ceci est nombre premier %d\n", i);
                }
    }
}