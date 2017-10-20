//
// Created by alex on 18/10/17.
//

#ifndef ESTRUTURADEDADOS_LISTADINENCAD_H
#define ESTRUTURADEDADOS_LISTADINENCAD_H

#endif //ESTRUTURADEDADOS_LISTADINENCAD_H

struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};
typedef struct elemento* Lista;

/*
 *
 * Função que cria a lista
 * @return Lista
 *
 * */
Lista* criaListaEncad();

/*
 *
 * Libera a lista
 * @param Lista
 * @return void
 *
 * */

void liberaListaEncad(Lista* li);

/*
 *
 * Tamanho da lista
 * @param Lista
 * @return int
 *
 * */
int tamanhoListaEncad(Lista* li);

/*
 *
 * Tamanho da lista
 * @param Lista
 * @return int
 *
 * */
int listaEncadCheia(Lista* li);

/*
 *
 * Tamanho da lista
 * @param Lista
 * @return int
 *
 * */
int listaEncadCheia(Lista* li);

/*
 *
 * Tamanho da lista
 * @param Lista
 * @return int
 *
 * */
int listaEncadVazia(Lista* li);

/*
 * Insere no inicio da lista
 * @param Lista
 * @param struct aluno
 * @return int
 *
 * */
int insereListaEncadInicio(Lista* li, struct  aluno al);

/*
 * Insere no final da lista
 * @param Lista
 * @param struct aluno
 * @return int
 *
 * */
int insereListaEncadFinal(Lista* li, struct  aluno al);

/*
 * Insere em ordem na lista
 * @param Lista
 * @param struct aluno
 * @return int
 *
 * */
int insereListaEncadOrdenada(Lista* li, struct  aluno al);