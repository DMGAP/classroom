#include<stdio.h>
#include<locale.h>


void procrepet(){
    int n;
    scanf("%d",&n);
    while (n!=0){
        if (n>0 && n<5){
            printf("%d\n",n);
        }else{
            printf("Entrada inválida.\n");
        }
        scanf("%d",&n); 
    }
}
int main (){
    setlocale(LC_ALL,"Portuguese");
    procrepet();
}