#include <stdio.h>
int main (){
    int dia = 0, mes = 0, ano = 0, idade = 0;
    
    scanf("%d/%d/%d %d", &dia, &mes, &ano, &idade);
    printf("Voce nasceu no dia %d do mes %d no ano %d e hoje tem %d anos.", dia, mes, ano, idade);
    return 0;
}