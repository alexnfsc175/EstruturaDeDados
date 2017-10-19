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
 *
 * */
Lista* criaListaEncad();

/*
 *
 * Libera a lista
 *
 * */

void liberaListaEncad(Lista* li);
