#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
  char nome[31];
  char turma[3];
  float notas;
  struct aluno *px;
};

typedef struct aluno ALUNOS;

ALUNOS *aux;
ALUNOS *seg;
ALUNOS *px;
ALUNOS *inicio;


int main(void){

  //😎👌Primeira celula
  aux = ( ALUNOS* ) malloc(sizeof(ALUNOS));
  //
  inicio = aux;
  //Dados
  strcpy(aux -> nome, "Pedro");
  strcpy(aux -> turma, "10E");
  aux -> notas = 19.9;
  //Proxima celula
  aux -> px = seg;


  //😎👌Segunda celula
  aux = ( ALUNOS * ) malloc(sizeof(ALUNOS));
  strcpy(aux -> nome, "Arnaldo");
  strcpy(aux -> turma, "10E");
  aux -> notas = 19.9;
  seg -> px = seg;


  //😎👌Segunda celula
  aux = ( ALUNOS * ) malloc(sizeof(ALUNOS));
  strcpy(aux -> nome, "Algusto");
  strcpy(aux -> turma, "10E");
  aux -> notas = 19.9;
  seg -> px = seg;

//😎👌Segunda celula
  aux = ( ALUNOS * ) malloc(sizeof(ALUNOS));
  strcpy(aux -> nome, "Arnaldo");
  strcpy(aux -> turma, "10E");
  aux -> notas = 19.9;
  seg -> px = NULL;

  printf("Criado com sucesso!");
  return 0;
}
