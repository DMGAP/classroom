#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std; // trabalhar com strings

typedef struct TipoCelula *Apontador;

struct TipoItem {
	int Codigo;
	char Nome[10];
};

struct TipoCelula {
	TipoItem Item;
	Apontador Prox;
}Celula;

struct TipoPilha {
	Apontador Topo;
	Apontador Fundo;
	int Tamanho;
};


//FUNÇÕES = > OPERAÇÕES QUE REALIZAMOS "EM CIMA /NESSES" VALORES => TDA(valores, operações)

void FazPilhaVazia (TipoPilha *Pilha) {
	Pilha->Topo = (Apontador) malloc(sizeof(Celula));
	Pilha->Fundo = Pilha->Topo;
	Pilha->Topo->Prox = NULL;
	Pilha->Tamanho = 0;
}


int PilhaVazia (TipoPilha Pilha) {
	return (Pilha.Topo == Pilha.Fundo);
}

void Empilhar (TipoItem X, TipoPilha *Pilha) {
	Apontador Aux;
	
	Aux = (Apontador) malloc(sizeof(Celula));
	Pilha->Topo->Item = X;
	Aux->Prox = Pilha->Topo;
	Pilha->Topo = Aux;
	Pilha->Tamanho++;
}

void Desempilhar (TipoPilha *Pilha, TipoItem *Item) {
	Apontador Q;
	
	if (PilhaVazia (*Pilha)) {
		cout << "Erro: Pilha esta vazia!";
		Item->Codigo = -1;
	}
	else {
		Q = Pilha->Topo;
		Pilha->Topo = Q->Prox;
		*Item = Q->Prox->Item;
		free (Q);
		Pilha->Tamanho--;
	}
}

int TamanhoPilha (TipoPilha Pilha) {
	return (Pilha.Tamanho);
}

int Menu () {
	int Opcao = 5;
	
	do {
		system ("CLS");
		cout << "Escolha uma opcao\n";
		cout << "=================\n";
		cout << "\n 1 - Empilhar ";
		cout << "\n 2 - Desempilhar ";
		cout << "\n 3 - Verificar Tamanho da Pilha";
		cout << "\n 0 - Sair\n";
		cout << "\nOpcao: ";
		cin >> Opcao;
	} while ((Opcao < 0) || (Opcao > 3));
	
	return (Opcao);
}


//PROGRAMA PRINCIPAL
int main()
{
	TipoPilha Pilha; /* Cria uma Pilha. */
	TipoItem Aux;	/* Auxiliar para entrada de dados. */
	int Opcao;
	
	/* Faz a Pilha ficar vazia. */
	 
	FazPilhaVazia (&Pilha);
	
	Opcao = Menu ();
	while (Opcao != 0) {
		switch (Opcao) {
			case 1: /* Inserir */
				system ("CLS");
				cout << "Inserir Item";
				cout << "\n============\n\n";
				cout << "\nDigite um Codigo: ";
				cin >> Aux.Codigo;
				fflush(stdin);
				cout << "\nDigite um Nome: ";
				gets (Aux.Nome);
				
				Empilhar (Aux, &Pilha);
				break;
			
			case 2: /* Excluir */
				system ("CLS");
				cout << "Excluir Item";
				cout << "\n============\n\n";
				
				Desempilhar (&Pilha, &Aux);
				
				if (Aux.Codigo != -1) {
				cout << "\nO item a seguir foi removido da Pilha:\n\n";
				cout << "\nCodigo: " << Aux.Codigo;
				cout << "\nNome	: " << Aux.Nome;
				}
				
				fflush(stdin);
				getchar();
				break;
				
			case 3: /* Tamanho da Pilha */
				system ("CLS");
				cout << "Pilha";
				cout << "\n=====\n\n";
				cout << "Quantidade de itens na Pilha: " << TamanhoPilha(Pilha);
				
				fflush(stdin);
				getchar();
			}
		Opcao = Menu ();
	}
	
	system("PAUSE");
	return EXIT_SUCCESS;
}
 

