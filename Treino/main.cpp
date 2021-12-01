#include <stdio.h>
#include <stdlib.h>
#include "runme.h"
#include <fstream>
#include <string.h>
#include <locale.h>
#include <vector>

using namespace std;

void Ler(int allValues[5000]) {
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
}

int main (int argc, char** argv){
    setlocale(LC_ALL, "portuguese");
    int dado[5000];
    Ler(dado);// ler e pegar os dados do arquivo
    char matriz[7][4]; // Cria a matriz
    char *arr[] = {"Bubblesort", "Insertionsort", "Quicksort", "Selectionsort", "Shellsort", "Heapsort"};
    char *( *ptr )[6] = &arr;
    char *ar[4] = {"Ordenações","500", "1000", "5000"};
    char *( *ptrr )[4] = &ar;

       // Preenche a matriz
    for (int i=1; i<7; i++){matriz[i][0] = *arr[i-1];}
    for (int i=0; i<4; i++){matriz[0][i] = *ar[i];}    

        //Criação do arquivo html  
    ofstream arq("arquivo.html");
    string buff = "<html>";
    arq.write( buff.c_str( ), buff.length( ) );
    buff = "<head><title>Matriz</title></head>";
    arq.write( buff.c_str( ), buff.length( ) );
    buff = "<body>";
    arq.write( buff.c_str( ), buff.length( ) );
    buff = "<center><h3>Matriz gerada dinamicamente</h3><center>";
    arq.write( buff.c_str( ), buff.length( ) );
    buff = "<table border=1>";
    arq.write( buff.c_str( ), buff.length( ) );

    buff = "";
    for ( int i=0; i<7; i++ ){
        buff += "<tr>";
        for ( int j=0; j<4; j++ ){
            buff += "<td>&nbsp;";
            buff += matriz[i][j];
            buff += "&nbsp;</td>";
        }
        buff += "</tr>";
    }
    arq.write( buff.c_str( ), buff.length( ) );

    buff = "</table>";
    arq.write( buff.c_str( ), buff.length( ) );
    buff = "</body>";
    arq.write( buff.c_str( ), buff.length( ) );
    buff = "</html>";
    arq.write( buff.c_str( ), buff.length( ) );

    arq.flush( );
    arq.close( );
    return EXIT_SUCCESS;
}
