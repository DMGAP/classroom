#include<stdio.h>
#include<locale.h>
void m2 (float n){
    printf("O número em decimetros é %.2f\n", n*10);
    printf("O número em centímetros é %.2f\n", n*100);
    printf("O número em milímetros é %.2f\n", n*1000);
}
float n;
int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("Esse programa transforma um número qualquer de metros para decímetros, centímetros e milímetros.\n");
    printf("Digite quantos metros (use [,] para separar decimal): ");
    scanf("%f", &n);
    m2(n);
    return 0;
}