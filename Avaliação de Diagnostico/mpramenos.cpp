#include<stdio.h>
#include<locale.h>
void m2 (float n){
    printf("O n�mero em decimetros � %.2f\n", n*10);
    printf("O n�mero em cent�metros � %.2f\n", n*100);
    printf("O n�mero em mil�metros � %.2f\n", n*1000);
}
float n;
int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("Esse programa transforma um n�mero qualquer de metros para dec�metros, cent�metros e mil�metros.\n");
    printf("Digite quantos metros (use [,] para separar decimal): ");
    scanf("%f", &n);
    m2(n);
    return 0;
}