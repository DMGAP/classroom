#include<stdio.h>

double fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

int main() {
   int n;
	printf("Type how many interactions of the fibonacci sequence you want: ");
   scanf("%d",&n);
   printf("Fibbonacci of %d: " , n);
	
   for(int i = 0;i<n;i++) {
      printf("%.lf ",fibbonacci(i));            
   }
}