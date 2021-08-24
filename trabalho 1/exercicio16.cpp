#include<stdio.h>
#include<locale.h>
void fibonacci (){
    double v[3];
    int k,i=2;
    v[0]=v[1]=1;
    scanf("%d",&k);
    if (k==1){printf("%.lf",v[0]);}
    if (k==2){printf("%.lf, %.lf",v[0],v[1]);}
    if (k>2) { 
        printf("%.lf",v[0]);
        printf(", %.lf",v[0]);
        while(i<k){
            v[2]=v[0]+v[1];
            printf(", %.lf",v[2]);
            v[0]=v[1];
            v[1]=v[2];
            i++;
        }
    } 
}
int main (){
    setlocale(LC_ALL,"Portuguese");
    fibonacci();
}