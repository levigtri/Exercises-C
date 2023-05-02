#include <stdio.h>
int main (){
    char sexo;
    int idade = 0, tempoContribuicao = 0, tempoFormatado = 0;
    float valorContribuicao = 0, salarioMinimo = 0, valorMensalAposentadoria = 0, percentualAcrescimo = 0, totalContribuicao = 0;
    scanf("%c %d %d %f", &sexo, &idade, &tempoContribuicao, &valorContribuicao);
    
    tempoFormatado = (100 - idade) * 12;
    valorMensalAposentadoria = (tempoContribuicao * valorContribuicao) / tempoFormatado;
    if(sexo == 'M'){
        if(idade >= 90){
            valorMensalAposentadoria = (valorMensalAposentadoria) + 0.5 * valorMensalAposentadoria;
            printf("%.2f", valorMensalAposentadoria);
        }else{
            scanf("%f", &percentualAcrescimo);
            valorMensalAposentadoria = valorMensalAposentadoria + valorMensalAposentadoria * (percentualAcrescimo / 100);
            printf("%.2f", valorMensalAposentadoria);
        }

    }if(sexo == 'F'){
        scanf("%f %f", &salarioMinimo, &percentualAcrescimo);
        percentualAcrescimo /= 100;
        valorMensalAposentadoria = valorMensalAposentadoria + valorMensalAposentadoria * percentualAcrescimo;
        if(valorMensalAposentadoria < salarioMinimo){
            printf("%.2f", salarioMinimo);
        }else{
            printf("%.2f", valorMensalAposentadoria);
        }

    }
        
    return 0;
}

