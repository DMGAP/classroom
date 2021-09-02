// Calculadora sem passagem de parametro e sem retorno
#include<stdio.h>
#include<locale.h>
#include<cmath>

void Soma (){
    int n1,n2;
    printf("Digite o primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o segundo valor: ");
    scanf("%d",&n2);
    printf("A soma de %d e %d é %d" , n1 , n2 , n1+n2 );
}

void Subtracao (){
    int n1,n2;
    printf("Digite o primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o segundo valor: ");
    scanf("%d",&n2);
    printf("A subtração de %d e %d é %d" , n1 , n2 , n1-n2 );
}

void Multiplicacao (){
    int n1,n2;
    printf("Digite o primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o segundo valor: ");
    scanf("%d",&n2);
    printf("A multiplicação de %d e %d é %d" , n1 , n2 , n1*n2 );
}

void Divisao (){
    float n1,n2;
    printf("Digite o primeiro valor: ");
    scanf("%f",&n1);
    printf("Digite o segundo valor: ");
    scanf("%f",&n2);
    printf("A divisão de %.f e %.f é %.2f" , n1 , n2 , n1/n2 );
}

void Resto (){
    int n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o segundo valor: ");
    scanf("%d",&n2);
    printf("O resto da divisão de %d e %d é %d" , n1 , n2 , n1%n2 );
}

int main (){
    setlocale(LC_ALL,"Portuguese");
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
            Soma();
        break;
        
        case '-':
            Subtracao();
        break;

        case '*':
            Multiplicacao();
        break;

        case '/':
            Divisao();
        break;

        case '%':
            Resto();
        break;
    }
}
