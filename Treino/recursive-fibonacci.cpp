#include<stdio.h>
#include<locale.h>

void Recursiveget (int *total){
    printf("Digiten quantas interações você deseja fazer: ");
    scanf("%d", &*total);
}

void Recursiveprint (int *total, int *count, double *first, double *second){
    double t;
    if (*count == *total) {
        return ;
    }else{
        t = *first + *second;
        *first = *second;
        *second = t;
        printf(", %lf", &t);
        *count += *count; 
        return Recursiveprint( total , count , first , second );
    }
    
}
int main (){
    int *total, *count;
    double *first, *second;
    setlocale(LC_ALL,"Portuguese");
    Recursiveget( *total );
    printf("%d", *total);
    Recursiveprint( *total , count , first , second);
}