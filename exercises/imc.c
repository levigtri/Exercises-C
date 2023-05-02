#include <stdio.h>
int main (){
    float peso = 0, altura = 0, imc = 0;
    scanf("%f %f", &peso, &altura);
    imc = (peso / (altura * altura));
    
    if(imc < 17){
        printf("muito abaixo do peso");
    }else if(imc >= 17 && imc <= 18.49){
        printf("abaixo do peso");
    }else if(imc >= 18.5 && imc <= 24.99){
        printf("peso normal");
    }else if(imc >= 25 && imc <= 29.99){
        printf("acima do peso");
    }else if(imc >= 30 && imc <= 34.99){
        printf("obesidade");
    }else if(imc >= 35 && imc <= 39.99){
        printf("obesidade severa");
    }else(imc > 40){
        printf("obesidade morbida");
    } 
    return 0;
}




// #include <stdio.h>
// int main (){
//     float peso = 0, altura = 0, imc = 0;
//     scanf("%f %f", &peso, &altura);
//     imc = (peso / (altura * altura));
    
//     if(imc < 17){
//         printf("muito abaixo do peso");
//     }if(imc >= 17 && imc <= 18.49){
//         printf("abaixo do peso");
//     }if(imc >= 18.5 && imc <= 24.99){
//         printf("peso normal");
//     }if(imc >= 25 && imc <= 29.99){
//         printf("acima do peso");
//     }if(imc >= 30 && imc <= 34.99){
//         printf("obesidade");
//     }if(imc >= 35 && imc <= 39.99){
//         printf("obesidade severa");
//     }if(imc > 40){
//         printf("obesidade morbida");
//     } 
//     return 0;
// }