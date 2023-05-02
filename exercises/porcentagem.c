#include <stdio.h>
int main(){
    double roubo = 0, duck = 0, dick = 0, zezinho = 0;
        scanf("%lf %lf %lf", &duck, &dick, &zezinho);
        scanf("%lf", &roubo);
        printf("%.2lf\n%.2lf\n%.2lf\n", (roubo * (duck/100)), (roubo * (dick/100)), (roubo * (zezinho/100)));
    return 0;    
}