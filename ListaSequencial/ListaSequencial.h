

#define MAX 100

struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct lista Lista; //Define um apelido para a lista

/*
 * Cria uma lista
 * @return Lista*
 * */
Lista* criaLista();

/*
 * Libera a lista
 * @param Lista
 **/
void liberaLista(Lista* li);

/*
 * @return int
 * @param Lista
 * retorna o tamanho da lista
 * */
int tamanhoLista(Lista* li);

/*
 * @return int
 * @param Lista
 * Verifica se a lista está cheia
 * */
int listaCheia(Lista* li);

/*
 * @return int
 * @param Lista
 * Verifica se a lista está vazia
 * */
int listaVazia(Lista* li);

/*
 * @param Lista
 * @param aluno
 * @return int
 * Insere no fim da lista
 * */
int insereListaFinal(Lista* li, struct aluno al);

/*
 * @param Lista
 * @param aluno
 * @return int
 * Insere no inicio da lista
 * */
int insereListaInicio(Lista* li, struct aluno al);

/*
 * @param Lista
 * @return int
 * Remove do final da lista
 * */
int removeListaFinal(Lista* li);

/*
 * @param Lista
 * @return int
 * Remove do final da lista
 * */
int removeListaInicio(Lista* li);

/*
 * @param Lista
 * @param int
 * @return int
 * Remove do final da lista
 * */
int removeLista(Lista* li, int matricula);

/*
 * @param Lista
 * @param int
 * @param struct aluno
 * @return int
 * Busca pela posição na lista
 * */
int buscaListaPos(Lista* li, int pos, struct aluno *al);

/*
 * @param Lista
 * @param int
 * @param struct aluno
 * @return int
 * Busca pela posição na lista
 * */
int buscaListaMat(Lista* li, int mat, struct aluno *al);


void imprimeLista(Lista* li);