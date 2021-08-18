#include<stdio.h>
#include<locale.h>
float a,b,c;

int main (){
    setlocale(LC_ALL, "Portuguese");
    printf("Esse programa verifica se três números digitados formam um triângulo.\n");
    printf("Digite o primeiro número para a verificação: ");
    scanf("%f",&a);
    printf("Digite o segundo número para a verificação: ");
    scanf("%f",&b);
    printf("Digite o terceiro número para a verificação: ");
    scanf("%f",&c);
    if (a+b>c && a+c>b && b+c>a){
        printf("%.2f, %.2f e %.2f formam um triângulo.",a,b,c);
    }
    else{
        printf("Os valores digitados no formam um triângulo.");
    }
    return 0;
}