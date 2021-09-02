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
    printf("A soma de %d e %d é:\n" , n1 , n2 );
    return (n1+n2);
}

int Subtracao (){
    int n1,n2;
    printf("Digite o primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o segundo valor: ");
    scanf("%d",&n2);
    printf("A subtração de %d e %d é :\n" , n1 , n2 );
    return (n1-n2);
}

int Multiplicacao (){
    int n1,n2;
    printf("Digite o primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o segundo valor: ");
    scanf("%d",&n2);
    printf("A multiplicação de %d e %d é :\n" , n1 , n2 );
    return(n1*n2);
}

float Divisao (){
    float n1,n2;
    printf("Digite o primeiro valor: ");
    scanf("%f",&n1);
    printf("Digite o segundo valor: ");
    scanf("%f",&n2);
    printf("A divisão de %.f e %.f é :\n" , n1 , n2 );
    return (n1/n2);
}

int Resto (){
    int n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%d",&n1);
    printf("Digite o segundo valor: ");
    scanf("%d",&n2);
    printf("O resto da divisão de %d e %d é :\n" , n1 , n2 );
    return(n1%n2);
}

int main (){
    setlocale(LC_ALL,"Portuguese");
    int x;
    float b;
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
