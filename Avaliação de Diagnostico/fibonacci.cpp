#include<stdio.h>
#include<locale.h>
void fibonacci (){
    int v[3],k,i=2;
    v[0]=v[1]=1;
    scanf("%d",&k);
    if (k==1){printf("%d",v[0]);}
    if (k==2){printf("%d, %d",v[0],v[1]);}
    if (k>2) { 
        printf("%d",v[0]);
        printf(", %d",v[0]);
        while(i<k){
            v[2]=v[0]+v[1];
            printf(", %d",v[2]);
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