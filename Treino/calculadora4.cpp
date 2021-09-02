// Calculadora com passagem de parametro e com retorno
#include<stdio.h>
#include<locale.h>
#include<cmath>

 int Soma (int n1, int n2){
    printf("A soma de %d e %d é:\n" , n1 , n2 );
    return (n1+n2);
}

 int Subtracao (int n1, int n2){
    printf("A subtração de %d e %d é :\n" , n1 , n2 );
    return (n1-n2);
}

int Multiplicacao (int n1, int n2){
    printf("A multiplicação de %d e %d é :\n" , n1 , n2 );
    return(n1*n2);
}

float Divisao (float n1, float n2){
    printf("A divisão de %.f e %.f é :\n" , n1 , n2 );
    return (n1/n2);
}

int Resto (int n1, int n2){
    printf("O resto da divisão de %d e %d é :\n" , n1 , n2 );
    return(n1%n2);
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
            x = Soma(n1,n2);
            printf("%d",x);
        break;
        
        case '-':
            printf("Digite o primeiro valor: ");
            scanf("%d",&n1);
            printf("Digite o segundo valor: ");
            scanf("%d",&n2);
            x = Subtracao(n1,n2);
            printf("%d",x);
        break;

        case '*':
            printf("Digite o primeiro valor: ");
            scanf("%d",&n1);
            printf("Digite o segundo valor: ");
            scanf("%d",&n2);
            x = Multiplicacao(n1,n2);
            printf("%d",x);
        break;

        case '/':
            printf("Digite o primeiro valor: ");
            scanf("%f",&N1);
            printf("Digite o segundo valor: ");
            scanf("%f",&N2);
            Divisao(N1,N2);
            b = Divisao(N1,N2);
            printf("%.2f",b);
        break;

        case '%':
            printf("Digite o primeiro valor: ");
            scanf("%d",&n1);
            printf("Digite o segundo valor: ");
            scanf("%d",&n2);
            x = Resto(n1,n2);
            printf("%d",x);
        break;
    }
}
