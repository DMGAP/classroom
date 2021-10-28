#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#define max 6

using namespace std;

typedef struct TipoCelula *Apontador;

struct TipoItem {
    int Codigo;
    char Nome[max];
};

struct TipoCelula {
    TipoItem Item;
    Apontador Prox;
}Celula;

struct TipoFila {
    Apontador Frente;
    Apontador Tras;
};

void FazFilaVazia (TipoFila *Fila) {
    Fila->Frente = (Apontador) malloc(sizeof(Celula));
    Fila->Tras = Fila->Frente;
    Fila->Frente->Prox = NULL;
}

int FilaVazia (TipoFila Fila) {
    return (Fila.Frente == Fila.Tras);
}

void InserirNaFila (TipoItem X, TipoFila *Fila) {
    Fila->Tras->Prox = (Apontador) malloc(sizeof(Celula));
    Fila->Tras = Fila->Tras->Prox;
    Fila->Tras->Item = X;
    Fila->Tras->Prox = NULL;
}

void RetiraDaFila (TipoFila *Fila, TipoItem *Item) {
    Apontador Q;

    if (FilaVazia (*Fila)) {
        cout << "\n\nFila vazia!";
        Item->Codigo = -1;
        getchar();
    }
    else {
        Q = Fila->Frente;
        Fila->Frente = Fila->Frente->Prox;
        *Item = Fila->Frente->Item;
        free(Q);
    }
}

int Menu () {
    int Opcao;

    do {
        system ("CLS");
        cout << "Escolha uma opção\n";
        cout << "=================\n";
        cout << "\n 1 - Enfileirar ";
        cout << "\n 2 - Desenfileirar ";
        cout << "\n 0 - Sair\n";
        cout << "\nOpcao: ";
        cin >> Opcao;
    } while ((Opcao < 0) || (Opcao > 2));

    return (Opcao);
}

int main(int argc, char *argv[]){
    setlocale(LC_ALL,"portuguese");
    TipoFila Fila; /* Cria uma Fila. */
    TipoItem Aux;	/* Auxiliar para entrada de dados. */
    int Opcao;

    /* Faz a Fila ficar vazia. */
    FazFilaVazia (&Fila);

    while (1) {
        Opcao = Menu ();
        switch (Opcao) {
                
            case 1: /* Inserir */
                system ("CLS");

                cout << "Inserir Item";
                cout << "\n============\n\n";
                cout << "\nDigite um Codigo: ";
                cin >> Aux.Codigo;
                cout << "\nDigite um Nome: ";
                fflush(stdin);
                scanf("%s",&Aux.Nome);

                InserirNaFila (Aux, &Fila);
                
            break;

            case 2: /* Excluir */
                system ("CLS");
                cout << "Excluir Item";
                cout << "\n============\n\n";

                RetiraDaFila (&Fila, &Aux);

                if (Aux.Codigo != -1) {
                cout << "\nO item a seguir foi removido da Fila:\n\n";
                cout << "\nCodigo: " << Aux.Codigo;
                cout << "\nNome	: " << Aux.Nome;
                cout << "\n";
                }
                Aux.Codigo = -1;

                fflush(stdin);
                getchar();
            break;

            case 0:	
				system("PAUSE");
				return EXIT_SUCCESS;
			break;
        }

    }

}
