#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
#include <string.h>
#include <locale.h>
#include <chrono>
#include <iostream>
#define MAX 5000
#define MAXLETRAS 30

using namespace std;

using namespace std::chrono;

typedef struct
{
    char sort[MAXLETRAS];   
    double tempo[10];
}Dados;


void Ler(int allValues[MAX])
{
    FILE *f;
    int value, i = 0;

    f = fopen("numeros.txt", "r");
    if(f!=NULL)
    {
        while(!feof(f))
        {
            fscanf(f, "%d", &value);
            
            allValues[i] = value;
            i++;
        }
        fclose(f);
    } else
    {
        printf("File does not exist");
    }
}

//-------------Bubblesort------------- 
void Bubblesort(int a[], int n)
{  
   int i, j, temp;  
   for(i = 0; i < n; i++)
   {    
      for(j = i+1; j < n; j++)
      {    
            if(a[j] < a[i])
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }    
}  

//-------------Insertionsort------------- 
void Insertionsort(int a[], int n)
{  
    int i, j, temp;  
    for (i = 1; i < n; i++)
    {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j])
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }    
}  

//-------------Quicksort------------- 
int partition (int a[], int start, int end)
{  
    int pivot = a[end]; 
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)
    {  
        
        if (a[j] < pivot){  
            i++;
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }  
    }  
    int t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    return (i + 1);  
}  
  

void Quicksort(int a[], int start, int end) 
{  
    if (start < end)
    {  
        int p = partition(a, start, end); 
        Quicksort(a, start, p - 1);  
        Quicksort(a, p + 1, end);  
    }
} 
 

//-------------Selectionsort------------- 
void Selectionsort(int a[], int n)
{  
    int i, j, small;  
      
    for (i = 0; i < n-1; i++)
    {  
        small = i; 
          
        for (j = i+1; j < n; j++)
        {  
            if (a[j] < a[small])
            {  
                small = j;  
            
                int temp = a[small];  
                a[small] = a[i];  
                a[i] = temp;  
            }  
        }
    }  
}

//-------------Shellsort------------- 
void Shellsort(int a[], int n){

    for (int interval = n/2; interval > 0; interval /= 2)
    {  
        for (int i = interval; i < n; i += 1)
        {  
            int temp = a[i];  
            int j;        
            for (j = i; j >= interval && a[j - interval] > temp; j -= interval)
            {  
                a[j] = a[j - interval];  
            
            a[j] = temp;  
            }  
        }  

    }
}

//-------------Heapsort-------------  
void heap(int a[], int n, int i)  
{  
    int largest = i; 
    int left = 2 * i + 1; 
    int right = 2 * i + 2;
    if (left < n && a[left] > a[largest]){largest = left;}
    if (right < n && a[right] > a[largest]){largest = right;}  
    if (largest != i)
    {  
        int temp = a[i];  
        a[i] = a[largest];  
        a[largest] = temp;  
        heap(a, n, largest);  
    }  
}  

void Heapsort(int a[], int n)
{  
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

    setlocale( LC_ALL , "portuguese");

    int allValues[MAX]; //declaraçao do vetor vazio de 5000 espaçoes

    Ler (allValues); //leitura e armazenamento dos números do arquivo números.txt

    int n = 499 , j ; // quantidade de números que serao inseridos nas ordenaçoes e variável que percorre a futura matriz mais rapido

    std::chrono::time_point<std::chrono::system_clock> comeco, fim; //declaração das variáveis de tempo

    Dados lista[6]; //declaração da lista com 6 espaços

    const string cabecalho[] = {"Ordenacao" , "500" , "1000" , "1500" , "2000" , "2500" , "3000" , "3500" , "4000" , "4500" , "5000"};

    strcpy(lista[0].sort, "Bubblesort");
    strcpy(lista[1].sort, "Insertionsort");
    strcpy(lista[2].sort, "Quicksort");
    strcpy(lista[3].sort, "Selectionsort");
    strcpy(lista[4].sort, "Shellsort");
    strcpy(lista[5].sort, "Heapsort");
    
    

    //Cronometragem das funçõess de ordenação e armazenamento dos tempos no vetor da struct

    for ( int i = 0 ; i < 10 ; i++)
    {   
        j=0;//reseta o valor do j


        auto comeco = system_clock::now(); //inicio da cronometragem
        Bubblesort(allValues , n); //execução da ordenação com n valores
        auto fim = system_clock::now(); //pausa na cronometragem
        lista[j].tempo[i] = chrono::duration_cast<milliseconds>(fim - comeco).count(); //armazenamento da variação de tempo em milisegundos na struct
        j++;//j=1

        auto comeco = system_clock::now(); //inicio da cronometragem
        Insertionsort(allValues , n); //execução da ordenação com n valores
        auto fim = system_clock::now(); //pausa na cronometragem
        lista[j].tempo[i] = chrono::duration_cast<milliseconds>(fim - comeco).count(); //armazenamento da variação de tempo em milisegundos na struct
        j++;//j=2

        auto comeco = system_clock::now(); //inicio da cronometragem
        Quicksort(allValues , 0 , n - 1); //execução da ordenação com n valores
        auto fim = system_clock::now(); //pausa na cronometragem
        lista[j].tempo[i] = chrono::duration_cast<milliseconds>(fim - comeco).count();
        j++;//j=3

        auto comeco = system_clock::now(); //inicio da cronometragem
        Selectionsort(allValues , n); //execução da ordenação com n valores
        auto fim = system_clock::now(); //pausa na cronometragem
        lista[j].tempo[i] = chrono::duration_cast<milliseconds>(fim - comeco).count(); //armazenamento da variação de tempo em milisegundos na struct
        j++;//j=4

        auto comeco = system_clock::now(); //inicio da cronometragem
        Shellsort(allValues , n); //execução da ordenação com n valores
        auto fim = system_clock::now();
        lista[j].tempo[i] = chrono::duration_cast<milliseconds>(fim - comeco).count(); //armazenamento da variação de tempo em milisegundos na struct
        j++;//j=5

        auto comeco = system_clock::now();
        Heapsort(allValues, n); //execução da ordenação com n valores
        auto fim = system_clock::now();
        lista[j].tempo[i] = chrono::duration_cast<milliseconds>(fim - comeco).count(); //armazenamento da variação de tempo em milisegundos na struct
        
        n+=500;//n começa com 499 e vai ate 4999
    }

    //inicio da apresentaçao da tabela
    
    //cabeçalho
    printf("%*s%10s%10s%10s%10s%10s%10s%10s%10s%10s%10s", -MAXLETRAS , cabecalho[0].c_str() , cabecalho[1].c_str() , cabecalho[2].c_str() , cabecalho[3].c_str() , cabecalho[4].c_str() , cabecalho[5].c_str() , cabecalho[6].c_str() , cabecalho[7].c_str() , cabecalho[8].c_str() , cabecalho[9].c_str() , cabecalho[10].c_str());  
    
    //restante das tabela

    for ( int i = 0 ; i < 6 ; i++)
    {
        printf("%*s%10d%10d%10d%10d%10d%10d%10d%10d%10d%10d", -MAXLETRAS , lista[i].sort , lista[0].tempo[i] , lista[1].tempo[i] , lista[2].tempo[i] , lista[3].tempo[i] , lista[4].tempo[i] , lista[5].tempo[i] , lista[6].tempo[i] , lista[7].tempo[i] , lista[8].tempo[i] , lista[9].tempo[i] );
    }

    return 0;
}