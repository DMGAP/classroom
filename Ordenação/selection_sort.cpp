#include<stdio.h>
#include<stdlib.h>
#include<string>
#define max 8

main (){
    char vet[50] = {professor}, min , aux ;

    /*for (int i = 0 ; i < max ; i++){
        vet[i] = 1 + rand() % 60;
    }*/

    for ( int i = 0 ; i < max - 1 ; i++ ){
        min = i;
        for ( int j = i + 1 ; j < max ; j ++){
            if ( vet[j] < vet[min] ) {min = j;}  
        }
        aux = vet[min];
        vet[min] = vet[i];
        vet[i] = aux;
        for ( int j = 0 ; j < max ; j ++ ){printf("%d\t",vet[j]);}
        printf("\n");
    }

    printf("\n");

    for ( int i = 0 ; i < max ; i++ ){
        printf("%d\t",vet[i]);
    }
    
}