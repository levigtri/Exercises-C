#include <stdio.h>
int main(){
float distancia = 0, calculoViagem = 0;
calculoViagem = 5.00;
scanf("%f", &distancia);

if(distancia <= 30){
    calculoViagem = calculoViagem + (distancia * 0.50);
    printf("%.2f", calculoViagem);
}if(distancia > 30){
    calculoViagem = calculoViagem + (distancia * 0.45);
    printf("%.2f", calculoViagem);
}
    return 0;
}