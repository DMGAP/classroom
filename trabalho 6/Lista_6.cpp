#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

struct Curso{
    int codigo;
    char nome[40];
    char turno[40];
    struct Curso *prox;
};

typedef struct Curso *tipo_curso;

void Inicializar (tipo_curso *Inicio);

tipo_curso Criar_Cadastro();
void Inserir_Cadastro(tipo_curso *Inicio, int codigo, char nome, char turno);
void Liberar_Cadastro(tipo_curso aux);
void Imprimir_Cursos(tipo_curso Inicio);

void Inicializar (tipo_curso *Inicio){
    *Inicio = NULL;
}

void Criar_Cadastro {
    tipo_curso aux;
    aux = (tipo_curso)malloc(sizeof(struct Curso));
    return aux;
}

void Liberar_Cadastro(tipo_curso aux){
    free(aux);
}

void Inserir_Cadastro(tipo_curso *Inicio, int codigo, char nome, char turno){
    tipo_curso aux = Criar_Cadastro();
    aux->codigo = codigo;
    aux->nome = nome;
    aux->turno = turno;
    aux->prox = NULL;

    if(*Inicio == NULL){
        *Inicio = aux;
        return;
    }

    tipo_curso temp;
    for(temp = *Inicio; temp->prox != NULL; temp = temp->prox);
    temp->prox = aux;
}

void Imprimir_Cursos(tipo_curso Inicio){
    tipo_curso aux;
    for(aux = Inicio; aux != NULL; aux = aux->prox){
        printf("%d\n%s\n%s", aux->codigo, aux->nome, aux->turno);
    }
    printf("\n");
}

int main(){

    setlocale(LC_ALL,"Portuguese");

    tipo_curso Inicio;

    Inicializar(&Inicio);

    Inserir_Cadastro(&Inicio, 1, Administração, Matutino);
    Inserir_Cadastro(&Inicio, 2, Sistemas de Informação, Noturno);

    Imprimir_Cursos(Inicio);

    Inserir_Cadastro(&Inicio, 3, Engenharia de Produção, Diurno);
    
}