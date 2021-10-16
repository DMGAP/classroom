#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>




main() {
    char vet[15] = "PROGRAMACAO", temp, aux[15] ;//PRGO
    int i, j, a;
    

    
    for (i=0;i<strlen(vet);i++) {
        aux[15] = vet[15];
        for(j=0;j<strlen(vet) - 1; j++) {
            if(vet[j] > vet[j+1]) {
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }
        
        if (vet[strlen(vet)] == aux[strlen(vet)]) {
            i = 15;
            j = 15;
        }
        printf("%s\n", vet);
    }
    for (i=0;i<strlen(vet);i++) {
        printf("%c", vet);
    }
    printf("\n\n");

}