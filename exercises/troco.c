#include <stdio.h>
int main(){
    int prod1 = 0, prod2 = 0, prod3 = 0; 
    float preco1 = 0, preco2 = 0, preco3 = 0, saldo = 0, total = 0, troco = 0;
    scanf("%d %d %d", &prod1, &prod2, &prod3);
    scanf("%f %f %f", &preco1, &preco2, &preco3);
    scanf("%f", &saldo);
    
    total = (prod1*preco1) + (prod2*preco2) + (prod3*preco3);
    // printf("%.2f", total);
    troco = saldo - total;
    printf("%.2f\n", troco);
}