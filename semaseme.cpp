#include<stdio.h>
#include<locale.h>
void ifcomp (int a, int b){
    int c = a+b;
    if (c>20){printf("%d",c+8);}
    else{
        if (c<20){printf("%d",c-5);}
    }
    
}

int a,b;

int main (){
    setlocale(LC_ALL,"Portuguese");
    printf("Digite o primeiro n�mero: ");
    scanf("%d",&a);
    printf("Digite o segundo n�mero: ");
    scanf("%d",&b);
    ifcomp(a,b);
}