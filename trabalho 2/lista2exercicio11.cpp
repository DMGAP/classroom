//imprimir meu nome 10 na tela
#include<stdio.h>
#include<locale.h>

int main (){
    char nome[40];
    setlocale(LC_ALL,"Portuguese");
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é :\n");
    for (int i=0; i<10 ; i++){
        printf("%s\n", nome);
    }
}