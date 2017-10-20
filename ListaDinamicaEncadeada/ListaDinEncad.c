//
// Created by alex on 18/10/17.
//

#include <libnet.h>
#include "ListaDinEncad.h"

struct elemento{
    struct aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

Lista* criaListaEncad(){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL)
        *li = NULL;
    return li;

}

void liberaListaEncad(Lista* li){
    if(li != NULL){
        Elem* no;
        while (*li != NULL){
            no = (*li);
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int tamanhoListaEncad(Lista* li){
    if(li == NULL)
        return 0;
    int count = 0;
    Elem* no = *li;
    while (no != NULL){
        count++;
        no = no->prox;
    }
    return count;
}

int listaEncadCheia(Lista* li){
    return 0;
}

int listaEncadVazia(Lista* li){
    if(li == NULL)
        return 1;
    if(*li == NULL)
        return 1;
    return 0;
}

int insereListaEncadInicio(Lista* li, struct  aluno al){
    if(li == NULL ) return 0;
    Elem* no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL) return 0;
    no->dados = al;
    no->prox = (*li);
    *li = no;
    return 1;
}

int insereListaEncadFinal(Lista* li, struct  aluno al){
    if(li == NULL ) return 0;
    Elem* no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL) return 0;
    no->dados = al;
    no->prox = NULL;
    if((*li) == NULL) {
        *li = no;
    }else{
        Elem *aux = *li;
        while (aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = no;
    }
    return 1;
}

int insereListaEncadOrdenada(Lista* li, struct  aluno al){
    if(li == NULL ) return 0;
    Elem* no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL) return 0;
    no->dados = al;
    if(listaEncadVazia(li)){//Insere no inicio
        no->prox = (*li);
        *li = no;
        return 1;
    }
    else{//procura onde insererir
        Elem *ant, *atual = *li;
        while (atual != NULL && atual->dados.matricula < al.matricula){
            ant = atual;
            atual = atual->prox;
        }
        if(atual == *li){//Insere no inicio
            no->prox = (*li);
            *li = no;
        }else{
            no->prox = ant->prox;
            ant->prox = no;
        }
        return 1;
    }
}