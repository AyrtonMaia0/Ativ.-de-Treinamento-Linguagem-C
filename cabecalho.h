#pragma once

#include <stdio.h>

#define qtdLETRAS 50
#define qtdCOLETA 1
#define qtdCONSERTO 1
#define qtdUSUARIOS 1
#define qtdSENHA 8

typedef struct {
  char estado [qtdLETRAS];
  char cidade [qtdLETRAS];
  char rua [qtdLETRAS];
  int numeroRua;
} t_ponto;

/*
typedef struct {
  char estado [qtdLETRAS];
  char cidade [qtdLETRAS];
  char rua [qtdLETRAS];
  int numeroRua;
} t_conserto;
*/

typedef struct {
  char nome [qtdLETRAS];
  char email [qtdLETRAS];
  char estado [qtdLETRAS];
  char cidade [qtdLETRAS];
  char senha [qtdSENHA];
} t_user;
