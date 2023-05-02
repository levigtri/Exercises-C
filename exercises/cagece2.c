#include <stdio.h>

int main() {
    int consumo, valor_conta;
    
    scanf("%d", &consumo);
    
    if (consumo <= 10) {
        valor_conta = 7.0;
    } else if (consumo >= 11 && consumo <= 30) {
        valor_conta = 7.0 + (consumo - 10) * 1.0;
    } else if (consumo <= 100) {
        valor_conta = 7.0 + 20 * 1.0 + (consumo - 30) * 2.0;
    } else {
        valor_conta = 7.0 + 20 * 1.0 + 70 * 2.0 + (consumo - 100) * 5.0;
    }
    
    printf(" R$ %d", valor_conta);
    
    return 0;
}