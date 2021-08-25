//lista de 0 a 100 numeros com vertor
#include<stdio.h>
#include<locale.h>

int Getnum(){
    int num[100],j=0;
    for (int i=1;i<=100;i++){
        j+=i;
    }
}

int main (){
    setlocale(LC_ALL,"Portuguese");
    Getnum();
}