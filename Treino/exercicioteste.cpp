// Calculadora com passagem de parametro e com retorno
#include<stdio.h>
#include<locale.h>
#include<cmath>

 int Soma (int *n1, int *n2, int *x){
    printf("A soma de %d e %d é:\n" , *n1 , *n2 );
    *x = (*n1+*n2);
}

 int Subtracao (int *n1, int *n2, int *x){
    printf("A subtração de %d e %d é :\n" , *n1 , *n2 );
    *x = *n1-*n2;
}

int Multiplicacao (int *n1, int *n2, int *x){
    printf("A multiplicação de %d e %d é :\n" , *n1 , *n2 );
    *x = *n1*(*n2);
}

float Divisao (float *N1, float *N2, float *b){
    printf("A divisão de %.f e %.f é :\n" , *N1 , *N2 );
    *b =  (*N1/ *N2);
}


int main (){
    setlocale(LC_ALL,"Portuguese");
    int x , n1 , n2;
    float b , N1 , N2;
    char a;
    printf("Digite qual operação você deseja fazer:\n"
    "+ para soma.\n"
    "- para subtração.\n"
    "* para multiplicação.\n"
    "/ para divisão.\n");
    fflush(stdin);
    scanf("%c",&a);
    switch(a){
        case '+':
            printf("Digite o primeiro valor: ");
            scanf("%d",&n1);
            printf("Digite o segundo valor: ");
            scanf("%d",&n2);
            Soma(&n1,&n2, &x);
            printf("%d",x);
        break;
        
        case '-':
            printf("Digite o primeiro valor: ");
            scanf("%d",&n1);
            printf("Digite o segundo valor: ");
            scanf("%d",&n2);
            Subtracao(&n1, &n2, &x);
            printf("%d",x);
        break;

        case '*':
            printf("Digite o primeiro valor: ");
            scanf("%d",&n1);
            printf("Digite o segundo valor: ");
            scanf("%d",&n2);
            Multiplicacao(&n1, &n2, &x);
            printf("%d",x);
        break;

        case '/':
            printf("Digite o primeiro valor: ");
            scanf("%f",&N1);
            printf("Digite o segundo valor: ");
            scanf("%f",&N2);
            Divisao(&N1, &N2, &b);
            printf("%.2f",b);
        break;

    }
}
