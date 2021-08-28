#include<stdio.h>
int matriz(int *m[4][4]) {
    for (int i=0;i<4;i++){
       for (int j=0;j<4;j++){
        printf("digite um número:");
        scanf("%d",&m[i][j]);
        printf("\n%d",&m);
        }   
    }
};

int main (){
    int m[4][4],i,j;
    for (int i=0;i<4;i++){
       for (int j=0;j<4;j++){
            matriz(&m[i][j]);
        }
    }

}