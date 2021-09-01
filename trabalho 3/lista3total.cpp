#include<stdio.h>
#include<locale.h>
void Transformm (){
    float n;
    printf("Esse programa transforma um número qualquer de metros para decímetros, centímetros e milímetros.\n");
    printf("Digite quantos metros (use [,] para separar decimal): ");
    scanf("%f", &n);
    printf("O número em decimetros é %.2f\n", n*10);
    printf("O número em centímetros é %.2f\n", n*100);
    printf("O número em milímetros é %.2f\n", n*1000);
    printf("\n\n");
}

void Tabuada () {
    int n;
    printf("Esse programa calcula a tabuada (multiplicação de um a dez) de um número digitado.\n");
    printf("Digite o número que deseja calcular a tabuada: ");
    scanf("%d",&n);
    printf("A tabuada de %d é:" , n );
    for (int i = 1 ; i < 11 ; i++ ){
        printf("\n%d x %d = %d\n", i, n, i*n );
    }
    printf("\n\n");
}

void Inflacao (){
    float n;
    printf("Esse programa calcula a inflação de um valor referente ao valor.\n");
    printf("Digite um valor que deseja verificar a inflação:\n");
    scanf("%f", &n);
    if (n<100.0) {printf("A inflação será de 10%, então o valor final será :%.2f\n", n*1.1);}
    else{printf("A inflação será de 20%, então o valor final será :%.2f\n", n*1.2);}
    printf("\n\n");
}

void F2C (){
    double f;
    printf("Esse programa calcula o valor de uma temperatura em Celsius dada a temperatura em Farenheit.\n");
    printf("Digite a temperatura em Farenheit:\n");
    scanf("%lf",&f);
    printf("A temperatura de %.lf em Farenheit será %.lf em celcius.", f, ((f-32.0)*(5.0/9.0)));
    printf("\n\n");
}


int main(){
    setlocale(LC_ALL,"Portuguese");
    int x;
    printf("Esse algoritmo tem 4 exercícios diferentes.\n");
    printf("Digite o número referente a pergunta que quiser resposta:\n"
    "1 para transformar um valor em metros em centímetros, milímetros e decímetros.\n"
    "2 para a tabuada de um número digitado.\n"
    "3 para inflacionar o valor digitado dependendo do valor digitado.\n"
    "4 para transformar uma temperatura em farenheit para celsius.\n"
    "0 para sair.\n");
    scanf("%d",&x);

    while ((x>4) || (x<0)){
        printf("Número digitado ínvalido.\n");
        printf("Digite o número referente a pergunta que quiser resposta:"
        "1 para transformar um valor em metros em centímetros, milímetros e decímetros."
        "2 para a tabuada de um número digitado."
        "3 para inflacionar o valor digitado dependendo do valor digitado."
        "4 para transformar uma temperatura em farenheit para celsius.\n");
        scanf("%d",&x);
    }

    while(x>=0 && x<=4)
    switch(x){
        case 1:
            Transformm();
            printf("Esse algoritmo tem 4 exercícios diferentes.\n");
            printf("Digite o número referente a pergunta que quiser resposta:\n"
            "1 para transformar um valor em metros em centímetros, milímetros e decímetros.\n"
            "2 para a tabuada de um número digitado.\n"
            "3 para inflacionar o valor digitado dependendo do valor digitado.\n"
            "4 para transformar uma temperatura em farenheit para celsius.\n"
            "0 para sair.\n");
            scanf("%d",&x);
            while ((x>4) || (x<0)){
                printf("Número digitado ínvalido.\n");
                printf("Digite o número referente a pergunta que quiser resposta:"
                "1 para transformar um valor em metros em centímetros, milímetros e decímetros."
                "2 para a tabuada de um número digitado."
                "3 para inflacionar o valor digitado dependendo do valor digitado."
                "4 para transformar uma temperatura em farenheit para celsius.\n");
                scanf("%d",&x);
            }
    
            break;
        
        case 2:
            Tabuada();
            printf("Esse algoritmo tem 4 exercícios diferentes.\n");
            printf("Digite o número referente a pergunta que quiser resposta:\n"
            "1 para transformar um valor em metros em centímetros, milímetros e decímetros.\n"
            "2 para a tabuada de um número digitado.\n"
            "3 para inflacionar o valor digitado dependendo do valor digitado.\n"
            "4 para transformar uma temperatura em farenheit para celsius.\n"
            "0 para sair.\n");
            scanf("%d",&x);
            while ((x>4) || (x<0)){
                printf("Número digitado ínvalido.\n");
                printf("Digite o número referente a pergunta que quiser resposta:"
                "1 para transformar um valor em metros em centímetros, milímetros e decímetros."
                "2 para a tabuada de um número digitado."
                "3 para inflacionar o valor digitado dependendo do valor digitado."
                "4 para transformar uma temperatura em farenheit para celsius.\n");
                scanf("%d",&x);
            }
            break;
        
        case 3:
            Inflacao();
            printf("Esse algoritmo tem 4 exercícios diferentes.\n");
            printf("Digite o número referente a pergunta que quiser resposta:\n"
            "1 para transformar um valor em metros em centímetros, milímetros e decímetros.\n"
            "2 para a tabuada de um número digitado.\n"
            "3 para inflacionar o valor digitado dependendo do valor digitado.\n"
            "4 para transformar uma temperatura em farenheit para celsius.\n"
            "0 para sair.\n");
            scanf("%d",&x);
            while ((x>4) || (x<0)){
                printf("Número digitado ínvalido.\n");
                printf("Digite o número referente a pergunta que quiser resposta:"
                "1 para transformar um valor em metros em centímetros, milímetros e decímetros."
                "2 para a tabuada de um número digitado."
                "3 para inflacionar o valor digitado dependendo do valor digitado."
                "4 para transformar uma temperatura em farenheit para celsius.\n");
                scanf("%d",&x);
            }
            break;
        
        case 4:
            F2C();
            printf("Esse algoritmo tem 4 exercícios diferentes.\n");
            printf("Digite o número referente a pergunta que quiser resposta:\n"
            "1 para transformar um valor em metros em centímetros, milímetros e decímetros.\n"
            "2 para a tabuada de um número digitado.\n"
            "3 para inflacionar o valor digitado dependendo do valor digitado.\n"
            "4 para transformar uma temperatura em farenheit para celsius.\n"
            "0 para sair.\n");
            scanf("%d",&x);
            while ((x>4) || (x<0)){
                printf("Número digitado ínvalido.\n");
                printf("Digite o número referente a pergunta que quiser resposta:"
                "1 para transformar um valor em metros em centímetros, milímetros e decímetros."
                "2 para a tabuada de um número digitado."
                "3 para inflacionar o valor digitado dependendo do valor digitado."
                "4 para transformar uma temperatura em farenheit para celsius.\n");
                scanf("%d",&x);
            }
            break;
        
        default:
            printf("Volte sempre !");
            break;
    }
    
}