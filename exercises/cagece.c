#include <stdio.h>
int main(){
    int consumoM = 0, calculoConsumo = 0;
    scanf("%d", &consumoM);
    calculoConsumo = 7;
    if(consumoM <= 10){
        printf("%d", calculoConsumo);
    }else if(consumoM >= 11 && consumoM <= 30){
        calculoConsumo = calculoConsumo + (consumoM - 10);
        printf("%d", calculoConsumo);
    }else if(consumoM <= 100){  
        calculoConsumo = calculoConsumo + (consumoM - 10) + (consumoM - 30) * 2;
        printf("%d", calculoConsumo);
    }else{
        calculoConsumo = calculoConsumo + (consumoM - 10) + ((consumoM - 30) * 2) + (consumoM - 100) * 5;
        printf("%d", calculoConsumo);
    }
    return 0;
}






#include <stdio.h>
int main(){
    int consumoM = 0, calculoConsumo1 = 0, calculoConsumo2, calculoConsumo3, calculoConsumo4 = 0;
    scanf("%d", &consumoM);
    if(consumoM <= 10){
        calculoConsumo1 = 7;
    }if(consumoM <= 30){
        calculoConsumo2 = calculoConsumo1 + (30 - 11 + 1);
    }if(consumoM <= 100){
        calculoConsumo3 = calculoConsumo2 + (100 - 31 + 1) * 2;
    }if(consumoM >= 101){
        calculoConsumo4 = calculoConsumo3 + (consumoM - 101 + 1) * 5;
    }

    if(consumoM <= 10){
        printf(" R$ %d", calculoConsumo1);
    }if(consumoM >= 11 && consumoM <= 30){
        printf(" R$ %d", calculoConsumo2);
    }if(consumoM >= 31 && consumoM <= 100){
        printf(" R$ %d", calculoConsumo3);
    }if(consumoM > 101){
        printf(" R$ %d", calculoConsumo4);
    }    
    return 0;
}







