#include<stdio.h>
#include<locale.h>


void procrepet(){
    int n;
    setlocale(LC_ALL,"Portuguese");
    scanf("%d",&n);
    while (n!=0){
        if (n>0 && n<5){
            printf("%d\n",n);
        }else{
            printf("Valor inválido.\n");
        }
        scanf("%d",&n); 
    }
}
int main (){
    int n;
    setlocale(LC_ALL,"Portuguese");
    procrepet();
}