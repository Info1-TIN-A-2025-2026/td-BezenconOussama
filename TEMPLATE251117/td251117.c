#include <stdio.h>

// déclarer un prototype de la fonction ON NE MAIS PAS DE CODE EN HAUT
void printbonojour(void);

/// on peux mettre const car on ne va pas le modifié  
void func1(const int a);

int main(int argc, const char *argv[])
{
    int i;
    printbonojour();
    printf("entrez une variable\n");
    scanf("%d", &i);
    func1(i);
    return (0);
}

// toujour aprés le main les implémenation de la fonction

void printbonojour (void){
    printf(":)bonjour\n");
}

/// on peux mettre const car on ne va pas le modifié  

void func1(const int a){
    printf (" voici un nombre %d\n",a*3);
}

void func2