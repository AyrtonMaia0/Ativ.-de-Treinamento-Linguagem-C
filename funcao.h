#include "cabecalho.h"

//menu para o usuario escolher 
int menu(){
  int escolha;
  
  printf("\n\n\n----------------------");
  printf("\nQual das opções abaixo deseja realizar?");
  printf("\n----------------------");
  printf("\n[1] - Cadastrar Ponto Coleta;");
  printf("\n[2] - Cadastra Ponto Conserto;");
  printf("\n[3] - Se Cadastrar no Site;");
  printf("\n[4] - Mostrar Pontos de Coleta;");
  printf("\n[5] - Mostrar Pontos de Conserto;");
  printf("\n[6] - Ver seus Dados;");
  printf("\n[0] - Encerrar Operação;");
  printf("\nOpção: ");
  scanf(" %i", &escolha);
  
  return escolha;
};


//N-1
//funcao para cadastrar um novo ponto de coleta
void cadastrarCOLETA (t_ponto coleta []){

  for(int i=0; i<qtdCOLETA; i++){
    printf("\nInsira o Estado desse Ponto de Coleta: ");
    scanf(" %s", coleta[i].estado);
    
    printf("\nInsira a Cidade desse Ponto de Coleta: ");
    scanf(" %s", coleta[i].cidade);
    
    printf("\nInsira o Nome da Rua ou Avenida: ");
    scanf(" %s", coleta[i].rua);

    printf("\nPor fim, insira o Número do Local: ");
    scanf(" %i", &coleta[i].numeroRua);

    printf("\n------");
  }
};


//N-2
//funcao para cadastrar um novo ponto de conserto
void cadastrarCONSERTO ( t_ponto conserto []){

  for(int j=0; j<qtdCONSERTO; j++){
    printf("\nDiga o Estado desse Ponto de Conserto: ");
    scanf(" %s", conserto[j].estado);

    printf("\nDiga a Cidade desse Ponto de Conserto: ");
    scanf(" %s", conserto[j].cidade);

    printf("\nDiga o Nome da Rua ou Avenida: ");
    scanf(" %s", conserto[j].rua);

    printf("\nPor ultimo, diga o Número do Local: ");
    scanf(" %i", &conserto[j].numeroRua);

    printf("\n------");
  }
};


//N-3
//funcao para cadastrar um novo usuario
void cadastrarUSUARIO ( t_user usuario []){
  
  for(int l=0; l<qtdUSUARIOS; l++){
    printf("\nInforme seu Nome para registrarmos: ");//nome
    scanf(" %s", usuario[l].nome);

    printf("\nInforme seu melhor E-mail para contatos, se necessario: ");//email
    scanf(" %s", usuario[l].email);

    printf("\nInforme o Estado em que você mora: ");//estado
    scanf(" %s", usuario[l].estado);

    printf("\nInforme a Cidade em que reside: ");//cidade
    scanf(" %s", usuario[l].cidade);

    printf("\nPara finalizar, crie sua senha com 8 caracteres: ");//senha
    scanf(" %s", usuario[l].senha);

    printf("\n------");  
  }
};


//N-4
//funcao para mostrar ponto de coleta
void exibirCOLETA (t_ponto coleta[]){
  for(int i=0; i<qtdCOLETA; i++){
    printf("\n----------------------");
    printf("\nPONTOS DE COLETA\n");
    printf("\nEstado [%i°] - %s", i+1, coleta[i].estado);
    printf("\nCidade [%i°] - %s", i+1, coleta[i].cidade);
    printf("\nRua [%i°] - %s", i+1, coleta[i].rua);
    printf("\nNúmero da Rua [%i°] - %i", i+1, coleta[i].numeroRua);
  }
};


//N-5
void exibirCONSERTO (t_ponto conserto[]){
    for(int i=0; i<qtdCONSERTO; i++){
    printf("\n----------------------");
    printf("\nPONTOS DE CONSERTO\n");
    printf("\nEstado [%i°] - %s", i+1, conserto[i].estado);
    printf("\nCidade [%i°] - %s", i+1, conserto[i].cidade);
    printf("\nRua [%i°] - %s", i+1, conserto[i].rua);
    printf("\nNúmero da Rua [%i°] - %i", i+1, conserto[i].numeroRua);
  }
};


//N-6
void exibirCONTA (t_user usuario[]){
  for(int i=0; i<qtdUSUARIOS; i++){
    printf("\n----------------------");
    printf("\nCONTAS REGISTRADAS\n");
    printf("\nNome [%i°] - %s", i+1, usuario[i].nome);
    printf("\nE-mail [%i°] - %s", i+1, usuario[i].email);
    printf("\nEstado [%i°] - %s", i+1, usuario[i].estado);
    printf("\nCidade [%i°] - %s", i+1, usuario[i].cidade);
    printf("\nSenha [%i°] - %s", i+1, usuario[i].senha);
  }
};

