#include<stdio.h>
#include<locale.h>
   

int main (){
    int i=0,k,n,par=0,impar=0;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite quantas intera��es o algoritmo dever� fazer: \n");
    scanf("%d",&n);
    while (i<n){
        printf("Digite um n�mero a ser verificado se � par ou impar: \n");
        scanf("%d",&k);
        if (k%2==0 || k==0){par+=1;}
        if (k%2!=0){impar+=1;}
        i++;
    }
    printf("H� %d n�meros pares e %d n�meros �mpares.",par,impar);
}