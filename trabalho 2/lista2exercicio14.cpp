//imprimir matriz 10x10, imprimir todos os elementos que estao acima na diagonal principal
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int m[10][10],x;

    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
        printf("Digite o valor na posiçao da linha %d e coluna %d:\n",i+1,j+1);
        scanf("%d",&m[i][j]);
    }
    }

    for (int i=0;i<10;i++){
       for (int j=0;j<10;j++){
           x=i+j;
           if (i < j ){printf("O número na linha %d e coluna %d é :\n%d\n",i+1,j+1,m[i][j]);}
        }   
    }
}
