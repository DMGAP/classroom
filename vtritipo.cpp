#include<stdio.h>
#include<locale.h>
float a,b,c;

int main (){
    setlocale(LC_ALL, "Portuguese");
    printf("Esse programa verifica se três números digitados formam um triângulo.\n");
    printf("Digite o primeiro número para a verifição: ");
    scanf("%f",&a);
    printf("Digite o segundo número para a verifição: ");
    scanf("%f",&b);
    printf("Digite o terceiro número para a verifição: ");
    scanf("%f",&c);
    if (a+b>c && a+c>b && b+c>a){
        if (a==b==c){printf("%.2f, %.2f e %.2f formam um triângulo equilátero.",a,b,c);}
        if ((a==b && b!=c)||(a==c && c!=b)||(b==c && c  !=a)){
            printf("%.2f, %.2f e %.2f formam um triângulo isóceles.",a,b,c);
            }
        if (a!=b!=c){printf("%.2f, %.2f e %.2f formam um triângulo escaleno.",a,b,c);}
    }
    else{
        printf("Os valores digitados não formam um triãngulo.");
    }
    return 0;
}