#include<stdio.h>
void somacem (){ 
    int j=1;
    for (int i=2;i<=100;i++){
        j+=i;
    }
    printf("%d",j);
}
int main(){
    somacem();
}