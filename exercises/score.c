#include <stdio.h>
int main(){
    char dadosCadastrais, vinculoEmpregaticio, nomeLimpo, bensMateriais;
    int score = 0, carro = 0, casa = 0, apartamento = 0, quantidadeParcelas = 0,pontuacaoBens = 0;
    float valorEmprestimo = 0, renda = 0, valorParcela = 0;
    scanf("%c %c %c %c", &dadosCadastrais, &vinculoEmpregaticio, &nomeLimpo, &bensMateriais);

    if(dadosCadastrais == 'S'){
        score += 100;
    }else if(dadosCadastrais == 'N'){
        score = 0;
    }   
    if(vinculoEmpregaticio == 'S'){
        score += 200;
    }else if(vinculoEmpregaticio == 'N'){
        score += 0;
    }
    if(nomeLimpo == 'S'){
        score += 200;
    }else if(nomeLimpo == 'N'){
        score += 0;
    }

    scanf("%f %f %d", &renda, &valorEmprestimo, &quantidadeParcelas);

    if(valorEmprestimo <= renda * 2){
        score += 200;
    }else if(valorEmprestimo <= renda * 3){
        score += 100;
    }else if(valorEmprestimo <= renda * 4){
        score += 50;
    }
    
    valorParcela = valorEmprestimo / quantidadeParcelas;
    
    if(bensMateriais == 'S'){
        scanf("%d %d %d", &carro, &casa, &apartamento);
        score = score + (carro * 10) + (casa * 40) + (apartamento * 40);
    }else if(bensMateriais == 'N'){
        score += 0;
    }

    if(valorParcela > renda * 0.3){
        score = 0;
        printf("%d", score);
    }else{ 
        printf("%d", score);
    }
     
    return 0;
}
