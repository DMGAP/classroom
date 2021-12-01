#include <stdio.h>

int Menor (int a, int b){
    if (a > b){
        return b;
    } 
    else{
        return a;
    }
}

int main (){
    int a , b , men ;
    printf("Digite um numero: ");
    scanf("%d",&a);
    printf("Digite outro numero inteiro: ");
    scanf("%d",&b);
    if ( a == b ){
        printf("Os numeros digitados sao iguais");
    }
    else {
        men = Menor( a , b );
        printf("O menor valor entre %d e %d e %d", a , b , men);
    }
}