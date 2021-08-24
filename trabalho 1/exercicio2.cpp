//recebe valor em kg, retorna g
#include<stdio.h>
#include<locale.h>

float Kg2g (){
    float kg,g;
    printf("Digite um peso em Kg:\n");
    scanf("%f",&kg);
    return kg*1000;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("O peso em gramas é : %.f", Kg2g());
}