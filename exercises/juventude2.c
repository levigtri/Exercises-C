#include <stdio.h>
 int main (){

    int idade, ano, dia;
    double peso, altura, soma;
    scanf("%lf", &peso);
    scanf("%lf", &altura);
    scanf("%d", &idade);
    scanf("%d", &ano);    
    scanf("%d", &dia);
    
    soma = (double) (((peso + altura)/idade) + ano) * dia;
    soma = (soma - 33) * (idade + 7);
    printf("%lf\n", soma);

 }