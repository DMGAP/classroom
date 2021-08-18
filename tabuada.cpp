#include<stdio.h>
#include<locale.h>

void tabuada(int n){
    printf("A tabuada de %d é:" , n );
    for (int i = 1 ; i < 11 ; i++ ){
        printf("\n%d x %d = %d\n", i, n, i*n );
    }
}

int n;

int main(){

setlocale(LC_ALL,"Portuguese");
printf("Esse programa calcula a tabuada (multiplicação de um a dez) de um número digitado.\n");
printf("Digite o número que deseja calcular a tabuada: ");
scanf("%d",&n);
tabuada(n);
return 0;

}