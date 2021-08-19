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
    printf("Digite o primeiro número: ");
    scanf("%d",&a);
    printf("Digite o segundo número: ");
    scanf("%d",&b);
    ifcomp(a,b);
}