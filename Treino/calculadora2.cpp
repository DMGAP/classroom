// Calculadora sem passagem de parametro e com retorno
#include<stdio.h>
#include<locale.h>
#include<cmath>

int Soma (){
    int n1,n2;
    printf("Digite o primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o segundo valor: ");
    scanf("%d",&n2);
    printf("A soma de %d e %d �:\n" , n1 , n2 );
    return (n1+n2);
}

int Subtracao (){
    int n1,n2;
    printf("Digite o primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o segundo valor: ");
    scanf("%d",&n2);
    printf("A subtra��o de %d e %d � :\n" , n1 , n2 );
    return (n1-n2);
}

int Multiplicacao (){
    int n1,n2;
    printf("Digite o primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o segundo valor: ");
    scanf("%d",&n2);
    printf("A multiplica��o de %d e %d � :\n" , n1 , n2 );
    return(n1*n2);
}

float Divisao (){
    float n1,n2;
    printf("Digite o primeiro valor: ");
    scanf("%f",&n1);
    printf("Digite o segundo valor: ");
    scanf("%f",&n2);
    printf("A divis�o de %.f e %.f � :\n" , n1 , n2 );
    return (n1/n2);
}

int Resto (){
    int n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o segundo valor: ");
    scanf("%d",&n2);
    printf("O resto da divis�o de %d e %d � :\n" , n1 , n2 );
    return(n1%n2);
}

int main (){
    setlocale(LC_ALL,"Portuguese");
    int x;
    float b;
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
            x = Soma();
            printf("%d",x);
        break;
        
        case '-':
            x = Subtracao();
            printf("%d",x);
        break;

        case '*':
            x = Multiplicacao();
            printf("%d",x);
        break;

        case '/':
            b = Divisao();
            printf("%.2f",b);
        break;

        case '%':
            x = Resto();
            printf("%d",x);
        break;
    }
}
