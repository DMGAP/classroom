#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define MAX 5000


int ler(int allValues[MAX]) {
    FILE *f;
    int value, i = 0;

    f = fopen("dados.txt", "r");
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
 return 0;
}

 void bubbleSort(int allValues[MAX]) {
    int i, j, aux, temp;


    for (i = 0; i < MAX ; i++) {
        for(j = 0; j < MAX ; j++) {
            if(allValues[j] > allValues[j+1]) {
                aux = allValues[j];
                allValues[j] = allValues[j+1];
                allValues[j+1] = aux;
            }
        }
    }
    printf("_________________Bubble_Sorte_____________\n");
    for (i=0; i < MAX; i++){
        printf("%d\n" ,i+1,allValues[i]);
    }

     printf("\n\n");

 return 0;
}
 void main() {
        int allValues[MAX];
        clock_t tempo;

    ler(allValues);

    tempo = clock();
    bubbleSort(allValues);
    //t = clock() -t;

  printf("Tempo:%f",(clock() - tempo) / (double)CLOCKS_PER_SEC);

return 0;
}

