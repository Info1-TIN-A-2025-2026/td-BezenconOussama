
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[]) {
    int i = 0;
    double a = 0;
    do
    {
        double f = (pow(-1, i) / (2 * i + 1));
        a = a + f;
        printf("a = %lf\n",4.*a);
        i++;
    } while (fabs((4. * a) - M_PI) >= 0.0000001);
}