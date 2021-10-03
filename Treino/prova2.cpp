#include<stdio.h>

main (){
    int a,b;
    int *p;
    a=10;
    b=20;
    p=&a;
    printf("%d",*p);
    b=*p;
    
}