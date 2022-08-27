#include <stdio.h>
//aba que esta a declaracao das structs &  defines
#include "cabecalho.h"
//aba que estao as funcoes
#include "funcao.h"


int main() {

//nomeando as struct para utilizar nas funcoes
  t_ponto coleta [qtdCOLETA];
  t_ponto conserto [qtdCONSERTO];
  t_user usuario [qtdUSUARIOS];

//valor da variavel é diferente de Zero
  int op = !0;

  printf("\nxxx..Bem-vindo ao E-Descarte..xxx");

//enquanto 'op' for diferente de Zero
  while(op != 0){

//chamando a funcao menu e atribuindo valor de retorno em 'op'
    op = menu();

    switch(op){

    //cadastrar coleta
      case 1:
        cadastrarCOLETA (coleta);
      break;

    //cadastrar conserto
      case 2:
        cadastrarCONSERTO (conserto);
      break;

    //se cadastrar no site
      case 3:
        cadastrarUSUARIO (usuario);
      break;

    //exibir coletas
      case 4:
        exibirCOLETA (coleta);
      break;

    //exibir conserto
      case 5:
        exibirCONSERTO (conserto);
      break;

    //ver dados da conta
      case 6:
        exibirCONTA (usuario);
      break;

    //fim 
      case 0:
      break;
      
      default:
        printf("\nAlgo deu errado. Por favor, Insira um dos números acima: ");
      break;
    }
  }
  printf("\naaa\n");
  
  return 0;
}