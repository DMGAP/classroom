#include <stdio.h>
#include <string.h>
#define MAX 3

typedef struct
{
    float salario;
    char nome[20];
}Dados ;


int main (){
    Dados TabFunc[MAX] ;
    float media = 0;

    for (int i = 0 ; i < MAX ; i++){
        printf("Digite o nome do %d funcionario:",i+1);
        scanf("%s",TabFunc[i].nome);
        printf("\nDigite o salario do %d funcionario:",i+1);
        scanf("%f",&TabFunc[i].salario);
        printf("\n");
        media+=TabFunc[i].salario;
    }
    media = media / MAX;
    for (int i = 0 ; i < MAX ; i++){        
        if (TabFunc[i].salario < media){
            printf("%.2s\t%f\n",TabFunc[i].nome,TabFunc[i].salario);
        }
    }    
}