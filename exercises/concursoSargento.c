#include <stdio.h>
int main(){
    int provaMultipla = 0, redacao = 0, corrida = 1, flexao = 1;
    scanf("%d %d %d %d", &provaMultipla, &redacao, &corrida, &flexao );
    if((provaMultipla >= 600 && redacao >= 1000) || (corrida) && (flexao)){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
    return 0;
}







// int main(){

// int passou = 1;//Equivalente a true
// int temsaldo = 0;//Equivalente a false

// if(passou) printf("O Fabio passou.");
// else printf("O Fabio não passou.");

// if(temsaldo) printf("A compra pode ser realizada.");
// else printf("A compra não pode ser realizada.");

// }








// #include <stdio.h>
//  int main(){

// bool passou = true;
// bool temsaldo = false;

// if(passou) printf("O Fabio passou.");
// else printf("O Fabio não passou.");

// if(temsaldo) printf("A compra pode ser realizada.");
// else printf("A compra não pode ser realizada.");
//  return 0;
// }
   


