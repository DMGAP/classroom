#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#include<cstdlib>
#include<conio.h>
#include<iostream>

using namespace std;

typedef struct TipoCelula *Apontador; // estrutura criada para ser um apontador

//Estrutura da lista

struct TipoItem{ // o que contem em cada elemento da lista
    int codigo;
    char curso[15];
    char turno[40];
};

typedef struct TipoCelula { // estrutura que contem cada elemento para configurar a lista linear
    TipoItem item;
    Apontador prox;
}Celula ;

struct TipoLista{ // estrutura para definir como serao os endereços
    Apontador primeiro;
    Apontador ultimo;
};

/*Manipulação da Lista*/

void FazListaVazia (TipoLista *Lista){ // torna uma lista vazia 
    Lista->primeiro = (Apontador) malloc (sizeof(Celula)); 
    Lista->ultimo = Lista->primeiro; // torna o endereço da ultimo apontador como o primeiro
    Lista->primeiro->prox = NULL; // torna os dois apontadores como NULL
};

void InserirNaLista (TipoItem X, TipoLista *Lista){
    Lista->ultimo->prox = (Apontador) malloc ( sizeof (Celula));
    Lista->ultimo=Lista->ultimo->prox;
    Lista->ultimo->item = X;
    Lista->ultimo->prox = NULL;
}
Apontador RetornaPonteiroParaUmaCelulaDaLista (TipoLista Lista, int Posicao) { //Pesquisa na lista qual o registro é importante para a operação
    Apontador Aux;
    int cont = 1 ;
    Aux = Lista.primeiro;
    while ((Aux != NULL) && (cont != Posicao)) { // verifica se o apontador é nulo, ou se chegou no fim da lista, e se o codigo do registro e igual ao contador, posicao que estamos procurando.
        Aux = Aux->prox;
        cont++;
    }
    return (Aux);  //Retorna o endereço da celula de importancia.
}

int ListaVazia (TipoLista Lista) {
    return (Lista.primeiro == Lista.ultimo);
}

void RetiraDaLista (Apontador P, TipoLista *Lista, TipoItem *Item) { // retira o item do endereço P, da lista Lista
    Apontador Q;
    if (ListaVazia (*Lista) || (P == NULL) || (P->prox == NULL)){ //Se o endereço do primeiro for igual ao ultimo, lista vazia, se a posiçao P for NULL, fim ou nao adquiriu o valor correto, se o P apontar pro proximo e esse for NULL, ou o fim da lista.
        printf("Erro : Lista vazia ou posição não existe !");
    }

    else { 
        Q = P->prox;
        *Item = Q->item;
        P->prox = Q->prox;
    }

    if (P->prox == NULL){ //chegou na celula 
        Lista->ultimo = P;
        free(Q); //Libera os dados da celula do endereço Q
    }
}

void ImprimeLista (TipoLista Lista){
    Apontador Aux;
    int cont = 1;
    Aux = Lista.primeiro->prox;
    while (Aux != NULL){
        printf("\nPosição: %d\n",cont);
        printf("Código: %d\n",Aux->item.codigo);
        printf("Curso: %s\n",Aux->item.curso);
        printf("Turno: %s\n",Aux->item.turno);
        cont++;
        Aux = Aux->prox;
    }
}

int Menu (){
    char opcao[15] = { "Cowabunga " };
    int aux ;
    while ( aux < 0 || aux > 4 ){
        printf("\n\nDigite uma opção para manipular a lista\n"
        "'1' ou 'inserir' para inserir dados na lista.\n"
        "'2' ou 'excluir' para excluir dados da lista.\n"
        "'3' ou 'alterar' para alterar algum dos dados em uma determinada celula indicada pelo usuário.\n"
        "'4' ou 'imprimir' para imprimir a lista na tela.\n"
        "'0' ou 'sair' para sair da execução:\n");
        scanf("%s",&opcao);
        if ( ( strcmp ( opcao , "1") == 0 ) || ( strcmp ( opcao , "inserir") == 0 ) ) {aux = 1;}
        if ( ( strcmp ( opcao , "2") == 0 ) || ( strcmp ( opcao , "excluir") == 0 ) ) {aux = 2;}
        if ( ( strcmp ( opcao , "3") == 0 ) || ( strcmp ( opcao , "alterar") == 0 ) ) {aux = 3;}
        if ( ( strcmp ( opcao , "4") == 0 ) || ( strcmp ( opcao , "imprimir") == 0 ) ) {aux = 4;}
        if ( ( strcmp ( opcao , "0") == 0 ) || ( strcmp ( opcao , "sair") == 0 ) ) {aux = 0;exit(0);}
    }
    return (aux);
}

int main() {
    setlocale(LC_ALL,"portuguese");
    TipoLista Lista; // lista declarada
    TipoItem Aux; // auxiliar para entrada de dados
    Apontador P; // apontador

    int opcao, posicao = 0;//opcao para a funcao menu e posicao para a pesquisa
   
    FazListaVazia (&Lista); // esvazia a lista declarada

    opcao = Menu();
    while ( opcao < 5 && opcao >= 0) {
        switch ( opcao ){

            case 1 :
                system("CLS");
                printf("Você escolheu inserir.\n"
                "Digite o código:\n");
                scanf("%d", &Aux.codigo);
                printf("Digite o curso:\n");
                scanf("%s", &Aux.curso);
                printf("Digite o turno\n");
                scanf("%s", &Aux.turno);

                InserirNaLista(Aux,&Lista);
                opcao = Menu();
            break;

            case 2 :
                system("CLS");
                printf("Você escolheu excluir.\n"
                "Aqui está a lista\n\n");

                ImprimeLista (Lista);

                printf("Digite o registro que deseja excluir (posição):\n");
                scanf("%d",&posicao);

                P = RetornaPonteiroParaUmaCelulaDaLista (Lista , posicao);
                
                RetiraDaLista(P, &Lista, &Aux);

                printf("\nO item a seguir foi removido da lista:\n\nCodigo: %d\n", Aux.codigo,
                "Curso: %s\n", Aux.curso,
                "Turno: %s\n", Aux.turno);
                opcao = Menu();
            break;

            case 3: 
                    system ("CLS");
                    printf("Você escolheu alterar.");
                    
                    ImprimeLista (Lista);
                    
                    printf("\nDigite a posicao a ser alterada: ");
                    fflush(stdin);
                    scanf("%d",posicao);

                    P = RetornaPonteiroParaUmaCelulaDaLista (Lista, posicao);

                    printf("\n\nValores atuais:\n");
                    printf("\nPosição: %d\n", posicao);
                    printf("Codigo: %d\n", P->prox->item.codigo);
                    printf("Curso: %s\n", P->prox->item.curso);
                    printf("Turno: %s\n", P->prox->item.turno);

                    printf("\nDigite o novo Codigo: \n");
                    scanf("%d",P->prox->item.codigo);
                    printf("\nDigite o novo curso: \n");
                    scanf("%s",P->prox->item.curso);
                    printf("\nDigite o novo turno: \n");
                    scanf("%s",P->prox->item.turno);
                    opcao = Menu();
            break;

            case 4:
                    system ("CLS");
                    printf("Você escolheu imprimir\nItens da Lista\n\n");
                    ImprimeLista (Lista);
                    opcao = Menu();
            break;
                    
        }
    }

}