//lista de 5 numeros em um vertor A e mostrar, 5 numeros em um vetor B e mostrar, C a soma
#include<stdio.h>
#include<locale.h>


int main (){
    setlocale(LC_ALL,"Portuguese");
    int A[5],B[5],C[5];
    for (int i=1;i<=5;i++){
        printf("Digite um número para ser armazenado no vetor A posição %d º :\n",i);
        scanf("%d",&A[i]);
    }

    for (int i=1;i<=5;i++){
        printf("O número armazenado no vetor A na posição %d é : %d\n",i,A[i]);
    }

    printf("\n\n");

    for (int i=1;i<=5;i++){
        printf("Digite um número :\n");
        scanf("%d",&B[i]);
    }

    for (int i=1;i<=5;i++){
        printf("Digite um número para ser armazenado no vetor B posição %d º :\n",i);
    }

    printf("\n\n");

    for (int i=1;i<=5;i++){
        C[i]=A[i]+B[i];
        printf("O número armazenado no vetor C na posição %d é  %d\n",i,C[i]);
    }
 
}