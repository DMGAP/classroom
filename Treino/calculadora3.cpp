// Calculadora com passagem de parametro e sem retorno
#include<stdio.h>
#include<locale.h>
#include<cmath>

void Soma (int n1, int n2){
    printf("A soma de %d e %d é %d" , n1 , n2 , n1+n2 );
}

void Subtracao (int n1, int n2){
    printf("A subtração de %d e %d é %d" , n1 , n2 , n1-n2 );
}

int Multiplicacao (int n1, int n2){
    printf("A multiplicação de %d e %d é %d" , n1 , n2 , n1*n2 );
}

float Divisao (float n1, float n2){
    printf("A divisão de %.f e %.f é %.2f" , n1 , n2 , n1/n2 );
}

int Resto (int n1, int n2){
    printf("O resto da divisão de %d e %d é %d" , n1 , n2 , n1%n2 );
}

int main (){
    setlocale(LC_ALL,"Portuguese");
    int n1,n2;
    float N1,N2;
    char a;
    printf("Digite qual operação você deseja fazer:\n"
    "+ para soma.\n"
    "- para subtração.\n"
    "* para multiplicação.\n"
    "/ para divisão.\n"
    "%% para resto.\n");
     fflush(stdin);
    scanf("%c",&a);
    switch(a){
        case '+':
            printf("Digite o primeiro valor: ");
            scanf("%d",&n1);
            printf("Digite o segundo valor: ");
            scanf("%d",&n2);
            Soma(n1,n2);
        break;
        
        case '-':
            printf("Digite o primeiro valor: ");
            scanf("%d",&n1);
            printf("Digite o segundo valor: ");
            scanf("%d",&n2);
            Subtracao(n1,n2);
        break;

        case '*':
            printf("Digite o primeiro valor: ");
            scanf("%d",&n1);
            printf("Digite o segundo valor: ");
            scanf("%d",&n2);
            Multiplicacao(n1,n2);
        break;

        case '/':
            printf("Digite o primeiro valor: ");
            scanf("%f",&N1);
            printf("Digite o segundo valor: ");
            scanf("%f",&N2);
            Divisao(N1,N2);
        break;

        case '%':
            printf("Digite o primeiro valor: ");
            scanf("%d",&n1);
            printf("Digite o segundo valor: ");
            scanf("%d",&n2);
            Resto(n1,n2);
        break;
    }
}
