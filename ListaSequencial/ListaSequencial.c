//
// Created by alex on 15/10/17.
//

#include <malloc.h>
#include "ListaSequencial.h"

struct lista {
    int qtd;
    struct aluno dados[MAX];
};

Lista* criaLista(){
    Lista *li;
    li = (Lista*) malloc(sizeof(struct lista));
    if(li != NULL)
        li->qtd = 0;
    return li;
}

void liberaLista(Lista* li){
    free(li);
}

int tamanhoLista(Lista* li){
    if(li == NULL)
        return -1;
    else
        return li->qtd;
}

int listaCheia(Lista* li){
    if(li == NULL)
        return -1;
    return (li->qtd == MAX);
}

int listaVazia(Lista* li){
    if(li == NULL)
        return -1;
    return (li->qtd == 0);
}

int insereListaFinal(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;
    if(listaCheia(li))
        return 0;
    li->dados[li->qtd] = al;
    li->qtd++;
    return 1;
}

int insereListaInicio(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;
    if(listaCheia(li))
        return 0;
    int i;
    for(i = li->qtd -1; i>= 0; i--)
        li->dados[i+1] = li->dados[i];
    li->dados[0] = al;
    li->qtd++;
    return 1;
}

int insereListaOrdenada(Lista* li, struct aluno al){
    if(li == NULL)
        return 0;
    if(listaCheia(li))
        return 0;
    int k,i = 0;

    while(i < li->qtd && li->dados[i].matricula < al.matricula)
        i++;

    for(k = li->qtd - 1; k >= i; k--)
        li->dados[k+1] = li->dados[k];
    li->dados[i] = al;
    li->qtd++;
    return 1;
}

int removeListaFinal(Lista* li){
    if(li == NULL)
        return 0;
    if(li->qtd == 0)
        return 0;
    li->qtd--;
    return 1;
}

int removeListaInicio(Lista* li){
    if(li == NULL)
        return 0;
    if(li->qtd == 0)
        return 0;
    int k = 0;
    for (int k = 0; k < li->qtd - 1 ; k++)
        li->dados[k] = li->dados[k + 1];
    li->qtd--;
    return 1;
}

int removeLista(Lista* li, int matricula){
    if(li == NULL)
        return 0;
    if(li->qtd == 0)
        return 0;

    int k, i =0;

    while (i < li->qtd && li->dados[i].matricula != matricula)
        i++;

    if(i == li->qtd)
        return 0;

    for (int k = i; k < li->qtd -1 ; ++k)
        li->dados[k] = li->dados[k + 1];
    li->qtd--;
    return 1;
}

int buscaListaPos(Lista* li, int pos, struct aluno *al){
    if(li == NULL || pos <= 0 || pos > li->qtd)
        return 0;
    *al = li->dados[pos -1];//modifica o conteudo de al pelo que está na posição
    return 1;
}

int buscaListaMat(Lista* li, int mat, struct aluno *al){
    if(li == NULL)
        return 0;
    int k, i = 0;
    while (i < li->qtd && li->dados[i].matricula != mat)
        i++;
    if(i == li->qtd) //Elemento não encontrado
        return 0;
    *al = li->dados[i];
    return 1;
}

void imprimeLista(Lista* li){
    if(li == NULL)
        return;
    if(listaVazia(li))
        return;

    for (int i = 0 ; i < li->qtd; ++i) {

        printf("\n\nNome: %s", li->dados[i].nome);
        printf("\nMatricula: %d", li->dados[i].matricula);
        printf("\nNota 1: %f", li->dados[i].n1);
        printf("\nNota 2: %f", li->dados[i].n2);
        printf("\nNota 3: %f", li->dados[i].n3);
    }
}
