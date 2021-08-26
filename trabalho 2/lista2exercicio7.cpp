//ler 8 valores de um vetor, digitar no um valor e verificar se ele esta no vetor se ele existir imprimir a posição se nao imprimir que nao existe
#include<stdio.h>
#include<locale.h>
#include<stdbool.h>

int main (){
    setlocale(LC_ALL,"Portuguese");
    float A[8] , numero ;
    bool a;

    for ( int i = 0 ; i < 8 ; i++ ){
        printf("Digite um valor para ser armazenado na %dº posição:\n", i+1);
        scanf("%d" , A[i]);
    }

    printf("Digie um número que deseja fazer a verificação:\n");
    scanf("%d" , &numero);

    for ( int i = 0 ; i < 8 ; i++){
        if (A[i] == numero){
            printf("A posição do número é %d:\n" , i+1);
            a = true;
            continue;
        }else{
            a = false;
        }
        
    }
    if ( a == false){printf("Esse número não existe no vetor");}
}