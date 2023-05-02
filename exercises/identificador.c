#include <stdio.h>
int main(){
    int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0;
    int regra1 = 0, regra2 = 0, regra3 = 0, regra4 = 0;

    scanf("%d %d %d %d %d", &d1, &d2, &d3, &d4, &d5);
     if((d1 % 2 != 0) && (d3 % 2 != 0) && (d5 % 2 != 0)){
        regra1 = 1;
     }
     if((d2 % 2 == 0) && (d4 % 2 == 0)){
        regra2 = 1;
     }
     if(d3 == (d1 + 4)){
        regra3 = 1;
     }
     if(d5 == (d3 + 2)){
        regra4 = 1;
     }
    if(regra1 && regra2 && regra3 && regra4){
        printf("SIM");
    }else{
        printf("NAO");
    }
    
    return 0;
}