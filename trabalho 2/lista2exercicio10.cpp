//armazenar temperatura de janeiro a abril, calcular e imprimir menor, maior, quantos dias a temperatura foi menor que a media
#include<stdio.h>
#include<locale.h>

int main (){
    float janeiro[31], fevereiro[28], marco[31], abril[30], media = 0, menor = 40, maior = 15, soma = 0;
    int mmenor = 0;
    bool a;
    setlocale(LC_ALL,"portuguese");
    printf("Esse programa foi feito para fazer a verificação da média, maior temperatura, menor temperatura e quantos dias a temperatura verificada foi menor que a média.\n");


    for (int i = 0 ; i < 31 ; i++){ //inserir as temperaturas do mes de janeiro
        printf("Digite a temperatura em %d de Janeiro :\n", i+1);
        scanf(" %f",&janeiro[i]);
        if (janeiro[i]>=15 && janeiro[i]<=40){a = true;}
        else{a=false;}
        while (a == false) {
            printf("O número digitado náo esta dentro da variação verificada.\n");
            printf("Digite a temperatura em %d de Janeiro:\n", i+1);
            scanf(" %f",&janeiro[i]);
            if (janeiro[i]>=15 && janeiro[i]<=40){a = true;}
        }
        if (janeiro[i]>maior){maior = janeiro[i];}
        if (janeiro[i]<menor){menor = janeiro[i];}
        soma= soma + janeiro[i];
    }

    for (int i = 0 ; i < 28 ; i++){ //inserir as temperaturas do mes de fevereiro
        printf("Digite a temperatura em %d de Fevereiro\n", i+1);
        scanf(" %f",&fevereiro[i]);
        if (fevereiro[i]>=15 && fevereiro[i]<=40){a = true;}
        else{a=false;}
        while (a == false) {
            printf("O número digitado náo esta dentro da variação verificada.\n");
            printf("Digite a temperatura em fevereiro %d:\n", i+1);
            scanf(" %f",&fevereiro[i]);
            if (fevereiro[i]>=15 && fevereiro[i]<=40){a = true;}
        }
        if (fevereiro[i]>maior){maior = fevereiro[i];}
        if (fevereiro[i]<menor){menor = fevereiro[i];}
        soma = soma + fevereiro[i];
    }

    for (int i = 0 ; i < 31 ; i++){ //inserir as temperaturas do mes de marco
        printf("Digite a temperatura em %d de Marco:\n", i+1);
        scanf(" %f",&marco[i]);
        if (marco[i]>=15 && marco[i]<=40){a = true;}
        else{a=false;}
        while (a == false) {
            printf("O número digitado náo esta dentro da variação verificada.\n");
            printf("Digite a temperatura em %d de Marco:\n", i+1);
            scanf(" %f",&marco[i]);
            if (marco[i]>=15 && marco[i]<=40){a = true;}
        }
        if (marco[i]>maior){maior = marco[i];}
        if (marco[i]<menor){menor = marco[i];}
        soma = soma + marco[i];
    }

    for (int i = 0 ; i < 30 ; i++){ //inserir as temperaturas do mes de abril
        printf("Digite a temperatura em %d de Abril:\n", i+1);
        scanf(" %f",&abril[i]);
        if (abril[i]>=15 && abril[i]<=40){a = true;}
        else{a=false;}
        while (a == false) {
            printf("O número digitado náo esta dentro da variação verificada.\n");
            printf("Digite a temperatura em %d de Abril:\n", i+1);
            scanf(" %f",&abril[i]);
            if (abril[i]>=15 && abril[i]<=40){a = true;}
        }
        if (abril[i]>maior){maior = abril[i];}
        if (abril[i]<menor){menor = abril[i];}
        soma = soma + abril[i];
    }

    media = soma/120.0;   //Calculo da média de todos os dias

    for (int i = 0 ; i < 31 ; i++){ //Contagem de quantos dias a temperatura foi menor que a média
        if (janeiro[i]<media){mmenor++;}
        if (i < 28){
            if (fevereiro[i]<media){mmenor++;}
        }
        if (marco[i]<media){mmenor++;}
        if (abril[i]<30){
            if (abril[i]<media){mmenor++;}
        }
    }
    // Apresentaçao de resultados
    printf("A menor temperatura entre Janeiro e Abril é : %.2f\n", menor);
    printf("A maior temperatura entre Janeiro e Abril é : %.2f\n", maior);
    printf("A temperatura média entre Janeiro e Abril é : %.2f\n", media);
    printf("Foi verificado que houve %d dias onde a temperatura foi menor que a média entre Janeiro e Abril.", mmenor);
}