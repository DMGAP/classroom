//ler e imprimir a diagonal principal de uma matriz 4x4
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int m[4][4],x;

    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
        printf("Digite o valor na posiçao da linha %d e coluna %d:\n",i+1,j+1);
        scanf("%d",&m[i][j]);
    }
    }

    for (int i=0;i<4;i++){
       for (int j=0;j<4;j++){
           x=i+j;
           if (i==j){printf("O número na linha %d e coluna %d é :\n%d\n",i+1,j+1,m[i][j]);}
        }   
    }
}