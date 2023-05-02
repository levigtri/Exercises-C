#include <stdio.h>
int main (){
    float valorProduto = 0, jogador1 = 0; 
    char jogador2;
    scanf("%f %f %c", &valorProduto, &jogador1, &jogador2);
    if(jogador1 == valorProduto){
        printf("primeiro");
    }
    else if((valorProduto > jogador1) && (jogador2 == 'M')){
        printf("segundo");
    }if((valorProduto < jogador1) && (jogador2 == 'm')){
        printf("segundo");
    }if((valorProduto > jogador1) && (jogador2 == 'm') || (valorProduto < jogador1) && (jogador2 == 'M')){
        printf("primeiro");
    }
    return 0;
}