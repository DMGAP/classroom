#include<stdio.h>

int Soma_mais_um (int *a){
    *a = *a + 1;
    printf("O valor dentro da funcao e: %d\n",*a);
    return *a;
}

int main() {
    int n1=0,n2;
    printf("O valor de n antes da funcao e: %d\n",n1);
    n2=Soma_mais_um(&n1);
    printf("O valor de n depois da funcao e: %d\n",n1);
    printf("O valor de n depois da funcao e: %d\n",n2);
    
}