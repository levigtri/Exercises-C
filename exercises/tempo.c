 #include <stdio.h>
int main(){
  int input = 0, seconds = 0, minutes = 0, hours = 0;

  scanf("%d", &input);

  minutes = input / 60;
  seconds = input % 60;

  hours = minutes / 60;
  minutes = minutes % 60;

  printf("%d:%d:%d", hours, minutes, seconds);
  }

// #include <stdio.h>
// #include <math.h>
// int main (){
//     double horas = 0, minutos = 0, segundos = 0, conversorh = 0, conversorm = 0, conversors = 0;
//     // int levi = 0;
//     scanf("%lf", &horas);
//     // scanf("%d", &minutos);
//     // scanf("%d", &segundos);
//     conversorh = (double) (horas/3600);
//     conversorm = (double) (conversorh*60);
//     // conversorm = modf(conversorh, &conversorh);
//     // levi = (int) (conversorm*100);
//     // minutos = (double) levi/60;
//     // // printf("%lf\n", conversorh);
//     printf("%lf\n", conversorm);
    
// }



