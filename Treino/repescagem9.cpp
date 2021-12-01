#include <stdio.h>

int fatorial (int a){
    for (int i = a-1 ; i > 0 ; i--){
        a*=i;
    }
    return (a);
}

int main (){
    int a, fat;
    printf("Digite um numero:");
    scanf("%d",&a);
    fat = fatorial (a);
    printf("O fatorial de %d e %d", a, fat);

}