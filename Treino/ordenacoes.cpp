#include <stdio.h> 
#include "ordenacoes.h" 
void heap(int a[], int n, int i)  
{  
    int largest = i; 
    int left = 2 * i + 1; 
    int right = 2 * i + 2;
    if (left < n && a[left] > a[largest]){largest = left;}
    if (right < n && a[right] > a[largest]){largest = right;}  
    if (largest != i) {  
        int temp = a[i];  
        a[i] = a[largest];  
        a[largest] = temp;  
        heap(a, n, largest);  
    }  
}  

void Heapsort(int a[], int n){  
    for (int i = n / 2 - 1; i >= 0; i--)  
        heap(a, n, i);  
    for (int i = n - 1; i >= 0; i--) {          
        int temp = a[0];  
        a[0] = a[i];  
        a[i] = temp;  
          
        heap(a, i, 0);  
    }  
    printf("Heapsort\n");
    for (int i = 0 ; i < n ; i+=500){
        printf("%d\n",a[i]);
    } 
}  
