#include<stdio.h>
#include<locale.h>

int n;
int main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Esse programa escreve o número por extenso.\n");
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    switch (n){
        case 0 :
            printf("%d -> Zero",n);
        break;
        case 1 :
            printf("%d -> Um",n);
        break;
        case 2 :
            printf("%d -> Dois",n);
        break;
        case 3 :
            printf("%d -> Três",n);
        break;
        case 4 :
            printf("%d -> Quatro",n);
        break;
        case 5 :
            printf("%d -> Cinco",n);
        break;
    
    default:
        printf("O número digitado deve é menor que 0 ou maior que cinco.\n");
        break;
    }
    return 0;
}