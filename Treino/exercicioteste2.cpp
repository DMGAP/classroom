#include<stdio.h>
#include<locale.h>

int Mudar (int *a, int *b, int *c){
    int aux;
    while((*a>*b) || *b>*c ){
        if (*a>*b){
            aux = *a;
            *a = *b;
            *b = aux;
        }
        if (*b>*c){
            aux = *b;
            *b = *c;
            *c = aux;
        }
    }
}

int main (){
    setlocale(LC_ALL,"Portuguese");
    int a,b,c;
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &a);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &b);
    printf("Digite o terceiro n�mero: ");
    scanf("%d", &c);
    Mudar(&a,&b,&c);
    printf("A ordem crescente � : %d - %d , %d", a, b, c);
}