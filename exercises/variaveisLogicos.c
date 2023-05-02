Variável Lógica
Primeiramente, vamos aprender o que é uma proposição lógica. Chama-se proposição lógica toda oração declarativa que pode ser valorada(ter o valor) em verdadeira ou falsa, mas não as duas. Exemplo:

O Fabio passou de ano.

O Fabio tem saldo na sua conta. = Falso

Observe acima que essas duas declarações podem ser verdadeiras ou falsa, mas não as duas.

Em muitos programas, precisamos armazenar os valores de proposições lógicas, pois de acordo com seus valores, o programa irá executar de maneiras diferentes através do if-else.

Como podemos armazenar o valor de uma proposição lógica???????

Usando as variáveis lógicas. Uma variável lógica ou booleana (https://pt.wikipedia.org/wiki/Boolean) é uma variável que terá apenas dois valores possíveis, verdadeiro (true) ou falso (false), mas não as duas. Elas são usadas para armazenar os valores das proposição lógica. 

Em muitas linguagens de programação, podemos criar uma variável desse tipo, usando a palavra chave boolean:
...

int main(){

boolean passou = true;
boolean temsaldo = false;

if(passou) printf("O Fabio passou.");
else printf("O Fabio não passou.");

if(temsaldo) printf("A compra pode ser realizada.");
else printf("A compra não pode ser realizada.");

}
...

Aqui que criei duas variáveis booelanas chamada de passou e temsaldo e já inicializei essas variáveis com os valores true e false, respectivamente.
Observe com atenção a condição dos if's. Não tem comparação, não é uma expressão relacional, apenas as variáveis boolenas. Isso é permitido, lembre-se uma condição (comparação) terá apenas dois valores, true ou false. Numa expressão relacional x > 10 o programa irá retorna true ou false, dependendo do valor de x. Ou seja, o resultado de uma comparação será uma variável lógica. Lembrando que as variáveis boolenas possuem apenas um desses dois valores.

Portanto, se a variável passou tiver o valor true, o printf do primeiro if será executado. Se a variável temsaldo tiver o valor true, o printf do segundo if será executado.
Quais textos serão imprimidos?????

Como falei anteriormente, algumas linguagens possuem esse tipo de variável, o C não é uma delas. Então alguém pode está se perguntando: como a linguagem C trabalha com valores lógicos professôôô?????

Como sempre falo, a linguagem C é uma linguagem antiga, mas ainda bastante usada. Na época de sua criação, definiram que iria usar uma variável inteira (int) para representar uma variável booleana. De que forma profesôôô????

O C considera o valor false como sendo o inteiro 0 (zero) e considera o valor true qualquer inteiro diferente de 0 (zero), normalmente usa-se o 1. Portanto, em C, o int é usado como uma variável lógica. Vejam como fica o código anterior em C:

...
int main(){

int passou = 1;//Equivalente a true
int temsaldo = 0;//Equivalente a false

if(passou) printf("O Fabio passou.");
else printf("O Fabio não passou.");

if(temsaldo) printf("A compra pode ser realizada.");
else printf("A compra não pode ser realizada.");

}
...

Faça esse teste, executando o código abaixo:
...
#include <stdio.h>
int main(){

float media;
scanf("%f", &media);
int passou = media >= 7.0;
printf("%d", passou);

}
...

Informe valores maiores e menores que 7. Veja que a variável inteira passou irá receber o valor 1 ou 0, dependendo se a condição media >= 7 for verdadeira ou falsa.