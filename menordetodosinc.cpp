#include<stdio.h>
#include<locale.h>

void menor(){
    int n,k;
    printf("\nDigite um valor inteiro para verificar : (0 sai da verificação)");
    scanf("%d",&n);
    k=n+1;
    while (n!=0){
        if (n<k) {
            k=n;
        }
        printf("\nDigite um valor inteiro para verificar : (0 sai da verificação)");
        scanf("%d",&n);
    }
    printf("\n %d é o menor número digitado",n);
}

int main () {
    setlocale(LC_ALL,"Portuguese");
    menor();
}