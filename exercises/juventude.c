#include <stdio.h>
int main (){

    double peso, altura, soma;
    int idade, ano, dia;
    scanf("%lf", &peso);
    scanf("%lf", &altura);
    scanf("%d", &idade);
    scanf("%d", &ano);
    scanf("%d", &dia);
    soma = (((double) (peso + altura)/idade) + ano) * dia;
    printf("%lf\n", soma);

}
