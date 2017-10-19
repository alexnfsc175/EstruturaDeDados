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