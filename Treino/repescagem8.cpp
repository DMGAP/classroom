#include <stdio.h>

int main () {
    int a, soma=0;
    printf("Digite um numero: ");
    scanf("%d",&a);
    for (int i = a ; i > 0 ; i--){
        soma +=i;
    }
    printf("A somatoria de %d e %d",a,soma);
}