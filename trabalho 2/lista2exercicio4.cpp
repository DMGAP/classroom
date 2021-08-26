//lista de 100 a 0 numeros com vertor
#include<stdio.h>
#include<locale.h>

int Getnum(){
    int num[100],j=0;
    for (int i=100;i>=0;i--){
        j+=i;
    }
}

int main (){
    setlocale(LC_ALL,"Portuguese");
    Getnum();
}