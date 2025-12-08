#include <stdio.h>

void delta(int t ,int* a, int* b, int* c);

int main(int argc, const char *argv[])
{
    int h, m, s;
    printf("entrer un temps en sewconde svp");
    scanf("%d %d %d",h,m,s);

}
void delta(int t ,int* a, int* b, int* c){
    *a = t / 3600;
    *b = (t % 3600)/60;
    *c = t % 60;
}