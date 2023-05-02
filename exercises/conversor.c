#include <stdio.h>

int main (){
    
    double celsius = 0, farenheit = 0;
    scanf("%lf", &celsius);
    farenheit = (1.8* celsius) + 32;
    printf("%.6lf", farenheit);
}
