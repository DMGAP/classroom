//armazenar os 50 primeiros numeros da serie fibonacci e imprime
#include<stdio.h>
#include<locale.h>

int main (){
    double fibonacci[50];
    setlocale(LC_ALL,"Portuguese");
    fibonacci[0] = fibonacci[1] = 1;
    for (int i = 2 ; i < 50 ; i++){//armazenamento dos números da sequencia fibonacci
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    printf("A seguência fibonacci de 50 números são:\n");
    printf("%.lf",fibonacci[0]);
    for (int i = 1 ; i < 50 ; i++){//apresentaçao dos numeros
        printf(", %.lf",fibonacci[i]);
    }
}