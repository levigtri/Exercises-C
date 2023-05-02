#include <stdio.h>
int main (){
    int lado1 = 0, lado2 = 0, lado3 = 0;
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    if((lado1 + lado2 >= lado3) && (lado2 + lado3 >= lado1)){
        if (lado1 == lado2 && lado1 == lado3)
        {
            printf("EQ");
        } else if ((lado1 == lado2 && lado2 != lado3) || (lado1 == lado3 && lado1 != lado2) || (lado2 == lado3 && lado1 != lado2))
        {
            printf("IS");
        }else if ((lado1 != lado2 && lado2 != lado3) && (lado1 + lado2 >= lado3) && (lado2 + lado3 >= lado1) && (lado1 + lado3 >= lado2))
        {
            printf("ES");
        }
    }

    if((lado1 + lado2 < lado3) || (lado2 + lado3 < lado1)|| (lado3 + lado1 < lado2))
    {    
        printf("NT");
    }
    return 0;
}