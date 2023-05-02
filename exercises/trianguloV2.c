#include <stdio.h>
int main (){
    int angulo1 = 0, angulo2 = 0, angulo3 = 0;
    scanf("%d %d %d", &angulo1, &angulo2, &angulo3);
    if ((angulo1 + angulo2 + angulo3) > 180){
         printf("NT");
    }
    else if(angulo1 < 90 && angulo2 < 90 && angulo3 < 90){
        printf("AC");
    }else if(((angulo1 == 90 || angulo2 == 90 || angulo3 == 90) && ((angulo1 + angulo2 + angulo3) == 180) && (angulo1 < 90 || angulo2 < 90|| angulo3 < 90))){
        printf("RE");
    } else if (((angulo1 > 90 || angulo2 > 90 || angulo3 > 90) && (angulo1 < 90 || angulo2 < 90|| angulo3 < 90))){
        printf("OB");
    }
    return 0;
}






// #include <stdio.h>
// int main (){
//     int angulo1 = 0, angulo2 = 0, angulo3 = 0;
//     scanf("%d %d %d", &angulo1, &angulo2, &angulo3);
//     if ((angulo1 + angulo2 + angulo3) > 180){
//          printf("NT");
//     }
//     else if(angulo1 < 90 && angulo2 < 90 && angulo3 < 90){
//         printf("AC");
//     }else if((((angulo1 || angulo2 || angulo3) == 90) && ((angulo1 + angulo2 + angulo3) == 180) && (angulo1 || angulo2 || angulo3) < 90)){
//         printf("RE");
//     } else if (((angulo1 || angulo2 || angulo3) > 90 && (angulo1 || angulo2 || angulo3) < 90)){
//         printf("OB");
//     }
//     return 0;
// }