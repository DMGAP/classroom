#include<stdio.h>
#include<locale.h>

void UmaCem (){
    for (int i=1;i<=100;i++){
        printf("%d\n",i);
    
    }
}

int main (){
    setlocale(LC_ALL,"Portuguese");
    UmaCem();
}