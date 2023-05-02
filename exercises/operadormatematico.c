#include <stdio.h>
int main (){
   char caractere;
   scanf("%c", &caractere);
    if (caractere == '+'){
       printf("Soma");
    }if (caractere == '-'){
       printf("Subtracao");
    }if (caractere == '*'){
       printf("Multiplicacao"); 
    }if (caractere == '/'){
       printf("Divisao");
    }if (caractere == '%'){
       printf("Resto da divisao"); 
    }if (caractere != '+' && caractere != '-' && caractere != '*' && caractere != '/' && caractere != '%'){
       printf("NDA");
    }
    return 0;
}