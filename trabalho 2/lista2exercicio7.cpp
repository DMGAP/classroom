//ler 8 valores de um vetor, digitar no um valor e verificar se ele esta no vetor se ele existir imprimir a posição se nao imprimir que nao existe
#include<stdio.h>
#include<locale.h>

int main (){
    setlocale(LC_ALL,"Portuguese");
    float A[8] , numero;
    int j=0, a[8];
    

    for ( int i = 0 ; i < 8 ; i++ ){
        printf("Digite um valor para ser armazenado na %dº posição:\n", i+1);
        scanf("%d" , &A[i]);
    }

    printf("Digie um número que deseja fazer a verificação:\n");
    scanf("%d" , &numero);

    for ( int i = 0 ; i < 8 ; i++){
        if (A[i] == numero){
            a[j]=i; // 1 verificaçao verdadeira a[0] = 3 j -> 1
            j++;
        }    
    }
    if (j>0){
        printf("O número digitado existe nos índices: ");
        for (int i=0; i<j; i++){
            printf(" %d",a[i]);
        }
    }
    else{
        printf("Esse número não existe no vetor");
    }
    
}