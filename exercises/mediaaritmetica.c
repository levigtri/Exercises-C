#include <stdio.h>
int main () {
    int a, b;
    double media;
    scanf("%d", &a);
    scanf("%d", &b);
    media = (double) (a + b)/2;
    printf("%.3lf\n", media);
}
