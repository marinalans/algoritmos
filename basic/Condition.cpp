#include <bits/stdc++.h>

using namespace std;

int main(){

  /*		IF 		*/

  // IF simples (Apenas exemplo)
  if(true){ /* Condição booleana */
    // Se a condição for verdadeira.
  }
  else {
    // Se as condições não atendidas faça.
  }

  // Multiplos IFs com ELSE (Apenas exemplo)
  if(true){
  }
  else if(true){
  }
  else{
    // Caso nenhuma condição dos IFs for verdadeira
  }

  // IF ternário
  int v_ou_f = 
    1 + 1 == 2 /* Condição */
    ? 1        /* Caso true */ 
    : 0        /* Caso false */
    ;

  int number = 1;
  /*		SWITCH		*/
  switch(number){
    case 1:
      printf("Number 1");
      break;
    case 2:
      printf("Number 2");
      break;
    default:
      printf("Default");
      break;
  }
}
