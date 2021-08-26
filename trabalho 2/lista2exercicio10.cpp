//armazenar temperatura de janeiro a abril, calcular e imprimir menor, maior, quantos dias a temperatura foi menor que a media
#include<stdio.h>
#include<locale.h>
#include<stdbool.h>

int main (){
    int janeiro[31], fevereiro[28], marco[31], abril[30], mmenor=0;
    float media=0, menor=40, maior=15;
    bool a;
    setlocale(LC_ALL,"portuguese");
    printf("Esse programa foi feito para fazer a verificação da média, maior temperatura, menor temperatura e quantos dias a temperatura verificada foi menor que a média.\n");


    for (int i = 0 ; i < 31 ; i++){ //inserir as temperaturas do mes de janeiro
        printf("Digite a temperatura em %d de Janeiro :\n", i+1);
        scanf(" %d",&janeiro[i]);
        if (janeiro[i]>=15 && janeiro[i]<=40){a = true;}
        else{a=false;}
        while (a == false) {
            printf("O número digitado náo esta dentro da variação verificada.\n");
            printf("Digite a temperatura em %d de Janeiro:\n", i+1);
            scanf(" %d",&janeiro[i]);
            if (janeiro[i]>=15 && janeiro[i]<=40){a = true;}
        }
        if (janeiro[i]>maior){maior = janeiro[i];}
        if (janeiro[i]<menor){maior = janeiro[i];}
        media+=janeiro[i];
    }
    
    for (int i = 0 ; i < 28 ; i++){ //inserir as temperaturas do mes de fevereiro
        printf("Digite a temperatura em %d de Fevereiro\n", i+1);
        scanf(" %d",fevereiro[i]);
        if (fevereiro[i]>=15 && fevereiro[i]<=40){a = true;}
        else{a=false;}
        while (a == false) {
            printf("O número digitado náo esta dentro da variação verificada.\n");
            printf("Digite a temperatura em fevereiro %d:\n", i+1);
            scanf(" %d",&fevereiro[i]);
            if (fevereiro[i]>=15 && fevereiro[i]<=40){a = true;}
        }
        if (fevereiro[i]>maior){maior = fevereiro[i];}
        if (fevereiro[i]<menor){maior = fevereiro[i];}
        media+=fevereiro[i];
    }

    for (int i = 0 ; i < 31 ; i++){ //inserir as temperaturas do mes de marco
        printf("Digite a temperatura em %d de Marco:\n", i+1);
        scanf(" %d",marco[i]);
        if (marco[i]>=15 && marco[i]<=40){a = true;}
        else{a=false;}
        while (a == false) {
            printf("O número digitado náo esta dentro da variação verificada.\n");
            printf("Digite a temperatura em %d de Marco:\n", i+1);
            scanf(" %d",&marco[i]);
            if (marco[i]>=15 && marco[i]<=40){a = true;}
        }
        if (marco[i]>maior){maior = marco[i];}
        if (marco[i]<menor){maior = marco[i];}
        media+=marco[i];
    }

    for (int i = 0 ; i < 31 ; i++){ //inserir as temperaturas do mes de abril
        printf("Digite a temperatura em %d de Abril:\n", i+1);
        scanf(" %d",&abril[i]);
        if (abril[i]>=15 && abril[i]<=40){a = true;}
        else{a=false;}
        while (a == false) {
            printf("O número digitado náo esta dentro da variação verificada.\n");
            printf("Digite a temperatura em %d de Abril:\n", i+1);
            scanf(" %d",&abril[i]);
            if (abril[i]>=15 && abril[i]<=40){a = true;}
        }
        if (abril[i]>maior){maior = abril[i];}
        if (abril[i]<menor){maior = abril[i];}
        media+=abril[i];
    }

    media = media /120;

    for (int i = 0 ; i < 31 ; i++){
        if (janeiro[i]<media){media+=media;}
        if (i < 28){
            if (fevereiro[i]<media){media+=media;}
        }
        if (marco[i]<media){media+=media;}
        if (abril[i]<media){media+=media;}
    }

    printf("A menor temperatura entre Janeiro e Abril é : %.2f\n", menor);
    printf("A maior temperatura entre Janeiro e Abril é : %.2f\n", maior);
    printf("A temperatura média entre Janeiro e Abril é : %.2d\n", media);
    printf("Foi verificado que houve %d dias onde a temperatura foi menor que a média entre Janeiro e Abril é\n", mmenor);
}