#include <stdio.h>
#include "ListaDinamicaEncadeada/ListaDinEncad.h"
//#include "ListaSequencial/ListaSequencial.h"

int main() {

    void flush_in() {
        int ch;
        do {
            ch = fgetc(stdin);
        } while (ch != EOF && ch != '\n');
    }


    /*
     *
     * Lista Sequencial
     *
     * */

//    Lista *li;
//
//    li = criaLista();
//    struct aluno dadosAluno;
//
//    int loop = 2;
//    while (loop){
//        printf("Digite o nome do aluno: ");
//        scanf("%s", dadosAluno.nome);
//        flush_in();
//        printf("Digite a matricula do aluno: ");
//        scanf("%d", &dadosAluno.matricula);
//        flush_in();
//        printf("\nDigite a nota 1 do aluno: ");
//        scanf("%f",&dadosAluno.n1);
//        flush_in();
//        printf("\nDigite a nota 2 do aluno: ");
//        scanf("%f",&dadosAluno.n2);
//        flush_in();
//        printf("\nDigite a nota 3 do aluno: ");
//        scanf("%f",&dadosAluno.n3);
//        flush_in();
//
//        if(insereListaFinal(li, dadosAluno)){
//            printf("\nDados inseridos com sucesso!!");
//        }
//        loop --;
//    }
//
//
//    imprimeLista(li);
//    removeListaInicio(li);
//    imprimeLista(li);
//
//    int x = tamanhoLista(li);
//    if(listaCheia(li)){
//        printf("\nLista cheia!!!\n");
//    }
//    if(listaVazia(li)){
//        printf("\nLista vazia!!!!\n");
//    }
//
//    printf("\nTamanho da lista: %d\n", x);
//
//    liberaLista(li);

    /*
    *
    * Lista Sequencial
    *
    * */

    /*
     * Lista Dinamica Encadeada
     *
     * */

    Lista *li;
    li = criaListaEncad();
    printf("\nCriou a lista!!\n");
    liberaListaEncad(li);
    printf("\nLiberou a lista!!\n");

    //Next Aula 12



    return 0;
}