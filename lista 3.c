#include <stdio.h>
/*Terceira lista de exercícios
/*para usar o código e só tira os comentários*/

/*1. faça um algoritmo que receba um número e mostre a mensagem "sim" caso este
número seja maior que 10. se for menor ou igual, o programa deve encerrar sem
exibir mais nada.*/

int main(void) {
   int numero;
      printf("digite um numero: ");
      scanf("%d", &numero);

   if( numero > 10){
      printf("sim"); }
return 0;
}


/*2. Solicite que o usuário digite um número. Informe então se este número é par
 * ou impar.*/

int main(void){
   int numero;
      printf("digite um numero: ");
      scanf("%d", &numero);

   if(numero % 2 == 0){
      printf("par");   }
   else{
      printf("impar"); }

return 0;
}

/*3. Escrever um algoritmo que leia dois valores inteiro distintos e informe
 * qual deles é o maior.*/

int main(void){
   int n1, n2;
      printf("digite um número: ");
      scanf("%d", &n1);

      printf("digite outro número: ");
      scanf("%d", &n2);
   if(n1 > n2){
      printf("o maior número é: %d", n1);
   }
   else{
      printf("o maior número é: %d", n2);
   }
return 0;
}


/*4. Altere o exercicio anterior de forma que ele informe também se os números
 * são iguais.*/

int main(void){
int n1, n2;
      printf("digite um número: ");
      scanf("%d", &n1);

      printf("digite outro número: ");
      scanf("%d", &n2);

   if(n1 == n2){
      printf("os números são iguais");
   }
   else{
    if(n1 > n2){
      printf("o maior número é: %d", n1);
      }
   else{
      printf("o maior número é: %d", n2);
   }
   }
return 0;
}

/*5. Crie um programa que recebe um número inteiro e informa se este número é
 * múltiplo de 10.*/

int main(void){
  int número;
  printf("digite um número: ");
  scanf("%d", & número);

  if(número % 10 == 0){
    printf("o número é multiplo de 10");
  }
return 0;
}

/*6. Crie um programa que recebe dois números inteiros. Exiba a mensagem "sim'
 * apenas caso ambos sejam maiores que 10.*/

int main(void){
  int n1, n2;
  printf("digite um número: ");
  scanf("%d", &n1);

  printf("digite outro número: ");
  scanf("%d", &n2);

  if(n1 > 10 && n2 > 10){
    printf("sim");
  }
return 0;
}

/* Desafio Jedi 7.
  Escreva um programa que converta um intervalo de tempo dado em segundos, em:
  horas, minutos e segundos. (Por exemplo, se o tempo dado for 3 850 segundos,
  o programa deve fornecer 1 h 4 min 10 s.)*/

int main(void){
  int segundos, minutos, horas;
     printf("digite um número: ");
     scanf("%d", &segundos);

     horas = segundos / 3600;
     minutos = (segundos % 3600) / 60;
     segundos = segundos % 60;
     printf("%d h  %d min  %d s\n", horas, minutos, segundos);

return 0;
}