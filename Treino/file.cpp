#include <stdio.h>

void ler(int allValues[5000]) {
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

main() {
    int allValues[5000];

    
    ler(allValues);

    for(int i=0; i<5000; i+=500) {
        printf("Numero: %d\n", allValues[i]);
    }

}