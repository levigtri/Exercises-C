#include <stdio.h>
#include <stdlib.h>
int main (){
    float valorProduto = 0, jogador1 = 0, jogador2 = 0;
    scanf("%f %f %f", &valorProduto, &jogador1, &jogador2);
    if(jogador1 == jogador2){
        printf("empate");
    }
    if (abs(valorProduto - jogador1) < abs(valorProduto - jogador2)){
        printf("primeiro");
    }else if (abs(valorProduto - jogador1) > abs(valorProduto - jogador2)){
        printf("segundo");
    }
    return 0;
}