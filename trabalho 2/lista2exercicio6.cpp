//lista de 5 numeros em um vertor A e mostrar, 5 numeros em um vetor B e mostrar, C a soma
#include<stdio.h>
#include<locale.h>


int main (){
    setlocale(LC_ALL,"Portuguese");
    int A[5],B[5],C[5];
    for (int i=1;i<=5;i++){
        printf("Digite um n�mero para ser armazenado no vetor A posi��o %d � :\n",i);
        scanf("%d",&A[i]);
    }

    for (int i=1;i<=5;i++){
        printf("O n�mero armazenado no vetor A na posi��o %d � : %d\n",i,A[i]);
    }

    printf("\n\n");

    for (int i=1;i<=5;i++){
        printf("Digite um n�mero :\n");
        scanf("%d",&B[i]);
    }

    for (int i=1;i<=5;i++){
        printf("Digite um n�mero para ser armazenado no vetor B posi��o %d � :\n",i);
    }

    printf("\n\n");

    for (int i=1;i<=5;i++){
        C[i]=A[i]+B[i];
        printf("O n�mero armazenado no vetor C na posi��o %d �  %d\n",i,C[i]);
    }
 
}