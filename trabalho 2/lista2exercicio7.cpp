//ler 8 valores de um vetor, digitar no um valor e verificar se ele esta no vetor se ele existir imprimir a posi��o se nao imprimir que nao existe
#include<stdio.h>
#include<locale.h>
#include<stdbool.h>

int main (){
    setlocale(LC_ALL,"Portuguese");
    float A[8] , numero ;
    bool a;

    for ( int i = 0 ; i < 8 ; i++ ){
        printf("Digite um valor para ser armazenado na %d� posi��o:\n", i+1);
        scanf("%d" , A[i]);
    }

    printf("Digie um n�mero que deseja fazer a verifica��o:\n");
    scanf("%d" , &numero);

    for ( int i = 0 ; i < 8 ; i++){
        if (A[i] == numero){
            printf("A posi��o do n�mero � %d:\n" , i+1);
            a = true;
            continue;
        }else{
            a = false;
        }
        
    }
    if ( a == false){printf("Esse n�mero n�o existe no vetor");}
}