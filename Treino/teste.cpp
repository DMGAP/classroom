#include <stdio.h>
#include <stdlib.h>
//#include "ordenacoes.h"
#include <fstream>
#include <string.h>
#include <locale.h>
#define MAX 7

using namespace std;

/*void Ler(int allValues[MAX]) {
    FILE *f;
    int value, i = 0;

    f = fopen("numeros.txt", "r");
    if(f!=NULL) {
        while(!feof(f)) {
            fscanf(f, "%d", &value);
            
            allValues[i] = value;
            i++;
        }
        fclose(f);
    } else{
        printf("File does not exist");
    }
}*/

//-------------Bubblesort------------- 
void Bubblesort(int a[], int n){  
   int i, j, temp;  
   for(i = 0; i < n; i++){    
      for(j = i+1; j < n; j++){    
            if(a[j] < a[i]){    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    } 
    printf("Bubblesort\n");
    for (int i = 0 ; i < n ; i+=500){
        printf("%d\n",a[i]);
    }     
}  

//-------------Insertionsort------------- 
void Insertionsort(int a[], int n){  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j]){    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }
    printf("Insertionsort\n");
    for (int i = 0 ; i < n ; i+=500){
        printf("%d\n",a[i]);
    }       
}  

//-------------Quicksort------------- 
int partition (int a[], int start, int end){  
    int pivot = a[end]; 
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++){  
        
        if (a[j] < pivot){  
            i++;
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }
        //printArr(a[] ,7);
        //printf("\n\n");
    }  
    int t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    return (i + 1);  
}  
  

void Quicksort(int a[], int start, int end) 
{  
    if (start < end){  
        int p = partition(a, start, end); 
        Quicksort(a, start, p - 1);  
        Quicksort(a, p + 1, end);  
    }
} 

void printArr(int a[], int n)  
{  
    int i;
    printf("Quicksort\n");  
    for (int i = 0 ; i < n ; i+=500)
    {  
        printf("%d\n", a[i]);  
    }
}  

//-------------Selectionsort------------- 
void Selectionsort(int a[], int n){  
    int i, j, small;  
      
    for (i = 0; i < n-1; i++){  
        small = i; 
          
        for (j = i+1; j < n; j++){  
            if (a[j] < a[small]){  
                small = j;  
            
                int temp = a[small];  
                a[small] = a[i];  
                a[i] = temp;  
            }  
        }
    }
    printf("Selectionsort\n");
    for (int i = 0 ; i < n ; i+=500){
        printf("%d\n",a[i]);
    }  
}

//-------------Shellsort------------- 
void Shellsort(int a[], int n){

    for (int interval = n/2; interval > 0; interval /= 2){  
        for (int i = interval; i < n; i += 1){  
            int temp = a[i];  
            int j;        
            for (j = i; j >= interval && a[j - interval] > temp; j -= interval){  
                a[j] = a[j - interval];  
            
            a[j] = temp;
            
            for (int j = 0 ; j < n ; j++)  
            {
               printf("%d\t",a[j]);
            }
            printf("\n");  
            }
            for (int j = 0 ; j < n ; j++)  
            {
               printf("%d\t",a[j]);
            }
            printf("\n");  
        }  
        for (int j = 0 ; j < n ; j++)  
            {
               printf("%d\t",a[j]);
            }
            printf("\n");

    }
    printf("----------------\n");
    
}

//-------------Heapsort-------------  
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
        for( int j = 0 ; j < 6 ; j++)
        {
            printf("%d\t", a[j]);            
        }
        printf("\n\n"); 
    }
    printf("----------------\n");  
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
}  
  

int main(){
    int allValues[] = {28, 30, 12, 70, 5, 11} ;
    //Ler (allValues);
    int n = sizeof(allValues) / sizeof(allValues[0]);
    const string arr[] = {"Bubblesort", "Insertionsort", "Quicksort", "Selectionsort", "Shellsort", "Heapsort"};

    while (n<5001){
        
        //Bubblesort(allValues , n);
        //Insertionsort(allValues , n);
        Quicksort(allValues , 0 , n - 1);
        //Selectionsort(allValues , n);
        printf("shell\n");
        Shellsort(allValues , n);
        printf("heap");
        Heapsort(allValues, n);
        //n+=500;

    return 0;
    }    
    
}