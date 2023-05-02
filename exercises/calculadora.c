#include <stdio.h>
int main (){
    char operacao;
    long num1 = 0, num2 = 0, resultado = 0;
    scanf("%c %lf %lf", &operacao, &num1, &num2);
    if(operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/'){
        printf("Operacao invalida.");
    }if(operacao == '/' && num2 == 0 ){
        printf("Operacao invalida.");
    }else if(operacao == '+'){
        printf("%.6lf\n", num1 + num2);
    }else if(operacao == '-'){
        printf("%.6lf\n", num1 - num2);
    }else if(operacao == '*'){
        printf("%.6lf\n", num1 * num2);
    }else if(operacao == '/'){
        printf("%.6lf\n", num1 / num2);
    }
    return 0;   
}






// #include <stdio.h>
// int main (){
//    char caractere;
//    scanf("%c", &caractere);
//     if (caractere == '+'){
//        printf("Soma");
//     }if (caractere == '-'){
//        printf("Subtracao");
//     }if (caractere == '*'){
//        printf("Multiplicacao"); 
//     }if (caractere == '/'){
//        printf("Divisao");
//     }if (caractere == '%'){
//        printf("Resto da divisao"); 
//     }if (caractere != '+' && caractere != '-' && caractere != '*' && caractere != '/' && caractere != '%'){
//        printf("NDA");
//     }
//     return 0;
// }