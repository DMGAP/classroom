#include<stdio.h>
#include<locale.h>
//programa calcula a média aritimética de 3 números

float media (float a, float b, float c){
    return ((a+b+c)/3);
}
int main(){
    float a,b,c;
    setlocale(LC_ALL,"portuguese");
    printf("Digite o primeiro número: ");
    scanf("%f",&a);
    printf("Digite o segundo número: ");
    scanf("%f",&b);
    printf("Digite o terceiro número: ");
    scanf("%f",&c);
    printf("A média aritimética de %.2f , %.2f e %.2f é %.2f",a , b , c , media(a , b , c));
}