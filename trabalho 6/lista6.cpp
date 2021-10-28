#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>

using namespace std;

typedef struct TipoCelula *Apontador;

struct TipoItem {
	int Codigo;
	char Curso[40];
	char Turno[35];
};

typedef struct TipoCelula  {
	TipoItem Item;
	Apontador Prox;
}Celula ;

struct TipoLista {
	Apontador Primeiro;
	Apontador Ultimo;
};



void FazListaVazia (TipoLista *Lista) {
	Lista->Primeiro = (Apontador) malloc (sizeof(Celula));
	Lista->Ultimo = Lista->Primeiro;
	Lista->Primeiro->Prox = NULL;
}

int ListaVazia (TipoLista Lista) {
	return (Lista.Primeiro == Lista.Ultimo);
}

void 	InserirNaLista (TipoItem X, TipoLista *Lista) {
	Lista->Ultimo->Prox = (Apontador) malloc(sizeof(Celula));
	Lista->Ultimo = Lista->Ultimo->Prox;
	Lista->Ultimo->Item = X;
	Lista->Ultimo->Prox = NULL;
}

void RetiraDaLista (Apontador P, TipoLista *Lista, TipoItem *Item) {
	Apontador Q;
	if (ListaVazia (*Lista) || (P == NULL) || (P->Prox == NULL)) {
		cout << "Erro: Lista vazia ou posicao não existe!";
	}

	else {
	Q = P->Prox;
	*Item = Q->Item;
	P->Prox = Q->Prox;

	if (P->Prox == NULL)
		Lista->Ultimo = P;
		free(Q);
	}
}

void ImprimeLista (TipoLista Lista) {
	Apontador Aux;
	int cont = 1;
	Aux = Lista.Primeiro->Prox;
	while (Aux != NULL) {
		//cout << "\nPosicao: " << cont;
		cout << "\nCodigo     : " << Aux->Item.Codigo;
		cout << "\nNome Curso : " << Aux->Item.Curso;
		cout << "\nNome Turno : " << Aux->Item.Turno << "\n";
		cont++;
		Aux = Aux->Prox;
	}
}

Apontador RetornaPonteiroParaUmaCelulaDaLista (TipoLista Lista, int Posicao) { 
	Apontador Aux;
	int cont = 1;
	Aux = Lista.Primeiro;
	while ((Aux != NULL) && (cont != Posicao)) {
		Aux = Aux->Prox;
		cont++;
	}
	return (Aux);
}

int Menu () {
	int Opcao = 5;
	do {
		system ("CLS"); //Limpa a tela
		cout << "Escolha uma opcao\n";
		cout << "=================\n"; 
		cout << "\n 1 - Inserir ";
		cout << "\n 2 - Excluir ";
		cout << "\n 3 - Alterar ";
		cout << "\n 4 - Imprimir ";
		cout << "\n 0 - Sair\n";
		cout << "\nOpcao: ";
		cin >> Opcao;
	} while ((Opcao < 0) || (Opcao > 4));
	return (Opcao);
}

int main(){
	setlocale(LC_ALL,"portuguese");
	TipoLista Lista;
	TipoItem Aux;
	Apontador P;

	int Opcao, Posicao = 0;

	FazListaVazia (&Lista);
	Opcao = Menu ();
	while (Opcao != 0) {
        switch (Opcao) {
            case 1:
                system ("CLS");
                cout << "Inserir Item";
                cout << "\n============\n\n";

                cout << "\nDigite um Codigo: ";
                cin >> Aux.Codigo;
                
                cout << "\nDigite o Curso: ";
                cin >> Aux.Curso;
                
                cout << "\nInforme o Turno: ";
                cin >> Aux.Turno;

                InserirNaLista (Aux, &Lista);
            break;

            case 2:
                system ("CLS");
                cout << "Excluir Item\n";
                cout << "============\n\n";

                ImprimeLista (Lista);

                cout << "\nQual registro voce deseja excluir? Digite a posicao: ";
                cin >> Posicao;

                P = RetornaPonteiroParaUmaCelulaDaLista(Lista,Posicao);

                RetiraDaLista (P, &Lista, &Aux);

                cout << "\n\nO item a seguir foi removido da lista:\n\n";
                cout << "\nCodigo : " << Aux.Codigo;
                cout << "\nNome	  : " << Aux.Curso;
                cout << "\nTurno  : " << Aux.Turno;
                fflush(stdin);
                getchar();
            break;

            case 3:
                system ("CLS");

                ImprimeLista (Lista);

                cout << "\n\nAlterar Item";
                cout << "\n============\n\n";
                cout << "\nDigite a posicao a ser alterada: ";
                cin >> Posicao;

                P = RetornaPonteiroParaUmaCelulaDaLista (Lista, Posicao);
                cout << "\n\nValores atuais";
                cout << "\n==============\n\n";
                cout << "Codigo         : " << P->Prox->Item.Codigo;
                cout << "\nNome Curso	: " << P->Prox->Item.Curso << "\n";
                cout << "\nTurno	    : " << P->Prox->Item.Turno << "\n";

                cout << "\nDigite o novo Codigo: ";
                cin >> P->Prox->Item.Codigo;

                cout << "\nDigite o novo Nome	: ";
                cin >> P->Prox->Item.Curso;
                
                cout << "\nDigite o novo Turno	: ";
                cin >> P->Prox->Item.Turno;
            break;

            case 4: 
                system ("CLS");
                cout << "Itens da Lista";
                cout << "\n==============\n\n";

                ImprimeLista (Lista);

                fflush(stdin);
                getchar();
            }
            Opcao = Menu ();
    }
	system("PAUSE");
}

