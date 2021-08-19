#include<stdio.h>
#include<locale.h>
#include<math.h>

int raiz(int n){
    return sqrt(n);
}
int main () {
    int n;
    setlocale(LC_ALL,"Portuguese");
    for (int i=0;i<15;i++){
        scanf("%d",&n);
        printf("A raiz quadarda de %d é %d.\n",n,raiz(n));
    }
}