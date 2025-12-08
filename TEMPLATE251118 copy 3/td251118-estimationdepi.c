
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc, const char *argv[]) {
    srand(time(NULL));// on mets le temps dedans 
    for (int i = 0; i<5;++i)
    {
        printf("% d\n", rand());/// max est rand max  0....RAND_MAX
    }
    printf("%d", RAND_MAX);
    ///////////raand a une seed il faut la modifié
}