#include<stdio.h>
#include<locale.h>
//programa calcula a m�dia aritim�tica de 3 n�meros

float media (float a, float b, float c){
    return ((a+b+c)/3);
}
int main(){
    float a,b,c;
    setlocale(LC_ALL,"portuguese");
    printf("Digite o primeiro n�mero: ");
    scanf("%f",&a);
    printf("Digite o segundo n�mero: ");
    scanf("%f",&b);
    printf("Digite o terceiro n�mero: ");
    scanf("%f",&c);
    printf("A m�dia aritim�tica de %.2f , %.2f e %.2f � %.2f",a , b , c , media(a , b , c));
}