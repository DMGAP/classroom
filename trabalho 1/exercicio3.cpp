//recebe valor inteiro e retorna o quadrado, cubo, raiz quadrada, log
#include<stdio.h>
#include<locale.h>
#include<math.h>

int Numero (){
    int num;
    printf("Digite um número inteiro:\n");
    scanf("%d",&num);
    return num;
}   

int Quadrado (int num){
    return pow(num,2);
}

int Cubo (int num){
    return pow(num,3);
}

float Raiz (int num){
    return sqrt(num);
}

float Loge (int num){
    return log(num);
}

int main(){
    int num;
    setlocale(LC_ALL,"Portuguese");
    num = Numero();
    printf("O quadrado de %d é %d\n", num, Quadrado(num));
    printf("O cubo de %d é %d\n", num, Cubo(num));
    printf("A Raiz de %d é %.3f\n", num, Raiz(num));
    printf("O Logaritmo natural de %d é %.3f", num, Loge(num));
}
