#include <stdio.h>
int main (){
    float rendaFamiliar = 0;
    scanf("%f", &rendaFamiliar);
    if (rendaFamiliar <= 324){
        printf("Extremamente pobre");
    }
    if (rendaFamiliar > 324 && rendaFamiliar <= 648){
        printf("Pobre");
    }
    if (rendaFamiliar > 648 && rendaFamiliar <= 1164){
        printf("Vulneravel");
    }
    if (rendaFamiliar > 1164 && rendaFamiliar <= 1764){
        printf("Baixa classe media");
    }
    if (rendaFamiliar > 1764 && rendaFamiliar <= 2564){
        printf("Media classe media");
    }
    if (rendaFamiliar > 2564 && rendaFamiliar <= 4076){
        printf("Alta classe media");
    }
    if (rendaFamiliar > 4076 && rendaFamiliar <= 9920){
        printf("Baixa classe alta");
    }
    if (rendaFamiliar > 9920){
        printf("Alta classe alta");
    }
    return 0;
}




// Classificação do governo (SAE)
// Grupo	Renda familiar
// Extremamente pobre	Até R$ 324
// Pobre	Até R$ 648
// Vulneravel	Até R$ 1.164
// Baixa classe media	Até R$ 1.764
// Media classe media	Até R$ 2.564
// Alta classe media	Até R$ 4.076
// Baixa classe alta	Até R$ 9.920
// Alta classe alta	Acima de R$ 9.920