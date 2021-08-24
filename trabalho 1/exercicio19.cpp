#include<stdio.h>
#include<locale.h>
   

int main (){
    int i=0,k,n,par=0,impar=0;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite quantas interações o algoritmo deverá fazer: \n");
    scanf("%d",&n);
    while (i<n){
        printf("Digite um número a ser verificado se é par ou impar: \n");
        scanf("%d",&k);
        if (k%2==0 || k==0){par+=1;}
        if (k%2!=0){impar+=1;}
        i++;
    }
    printf("Há %d números pares e %d números ímpares.",par,impar);
}