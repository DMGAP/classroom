// Calculadora com passagem de parametro e sem retorno
#include<stdio.h>
#include<locale.h>
#include<cmath>

void Soma (int n1, int n2){
    printf("A soma de %d e %d � %d" , n1 , n2 , n1+n2 );
}

void Subtracao (int n1, int n2){
    printf("A subtra��o de %d e %d � %d" , n1 , n2 , n1-n2 );
}

int Multiplicacao (int n1, int n2){
    printf("A multiplica��o de %d e %d � %d" , n1 , n2 , n1*n2 );
}

float Divisao (float n1, float n2){
    printf("A divis�o de %.f e %.f � %.2f" , n1 , n2 , n1/n2 );
}

int Resto (int n1, int n2){
    printf("O resto da divis�o de %d e %d � %d" , n1 , n2 , n1%n2 );
}

int main (){
    setlocale(LC_ALL,"Portuguese");
    int n1,n2;
    float N1,N2;
    char a;
    printf("Digite qual opera��o voc� deseja fazer:\n"
    "+ para soma.\n"
    "- para subtra��o.\n"
    "* para multiplica��o.\n"
    "/ para divis�o.\n"
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
