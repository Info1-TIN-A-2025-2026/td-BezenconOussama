#include <stdio.h>
#include <stdlib.h>
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
    int n = 1, ret ;
    const int V_min = 1, V_max = 4;
    do
    {
        printf("Enter a value in range [%d...%d]" ,V_min,V_max);
        ret = scanf("%d", &n);
        if(ret != 1) {while (getchar() != '\n');}// get char c'est le meme buffer que scanf alors on va lire le buffer et le vider dans c
    } while ((n < V_min) || (n > V_max));
    switch (n)
    {
    case 1:
        printf("ON\n");
        break;
    case 2:
        printf("OFF\n");
        break;
    case 3:
        printf("BLINK\n");
        break;
    default:
        printf("ERROR\n");
        break;
    }
}