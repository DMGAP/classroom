#include<stdio.h>
#include<locale.h>
float a,b,c;

int main (){
    setlocale(LC_ALL, "Portuguese");
    printf("Esse programa verifica se tr�s n�meros digitados formam um tri�ngulo.\n");
    printf("Digite o primeiro n�mero para a verifica��o: ");
    scanf("%f",&a);
    printf("Digite o segundo n�mero para a verifica��o: ");
    scanf("%f",&b);
    printf("Digite o terceiro n�mero para a verifica��o: ");
    scanf("%f",&c);
    if (a+b>c && a+c>b && b+c>a){
        printf("%.2f, %.2f e %.2f formam um tri�ngulo.",a,b,c);
    }
    else{
        printf("Os valores digitados no formam um tri�ngulo.");
    }
    return 0;
}