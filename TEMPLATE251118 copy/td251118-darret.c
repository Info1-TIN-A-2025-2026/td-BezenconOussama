
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <nombre>\n", argv[0]);
        return 1;
    }

    int i = atoi(argv[1]);
    if (i % 2 == 0) {
        printf("Le nombre doit être impair.\n");
        return 0;
    }

    // Affiche la pyramide
    for (int ligne = 0; ligne < i; ligne++) {
        // Espaces avant
        for (int espace = 0; espace < i - ligne - 1; espace++) {
            printf(" ");
        }

        // Caractères
        if (ligne == 0) {
            printf("*");
        } else {
            for (int col = 0; col < (2 * ligne + 1); col++) {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}
