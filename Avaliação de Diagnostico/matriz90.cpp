//algorimo para girar uma matriz 90º
//0x0 0x1 0x2 | 2x0 1x0 0x0
//1x0 1x1 1x2 | 2x1 1x1 0x1
//2x0 2x1 2x2 | 2x2 1x2 0x2


#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int m[3][3] , aux , temp ;
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
            //printf("Digite o número da coluna %d e linha %d :", i+1 , j+1);
            m[i][j] = rand() % 10;//scanf("%d" , m[i][j]);
        }
    }
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<3 ; j++){
              printf("%d",m[i][j]);
        }
        printf("\n");

    }
    printf("\n\n");

    for (int i=0 ; i<3 ; i++){
        for (int j=2 ; j>=0 ; j--){
          printf("%d",m[j][i]);
        }
    printf("\n");
    }
}