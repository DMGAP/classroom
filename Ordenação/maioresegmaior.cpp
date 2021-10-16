#include<stdio.h>
#include<locale.h>
#include<vector>
#include<stdlib.h>
#include<limits>
#include<string.h>

using namespace std;

int main (){
    vector<float> conj;
    int d;
    char menu[25];
    float maior = std::numeric_limits<float>::min();//estipulando um numero menor possivel
    float smaior = std::numeric_limits<float>::min()+1;//estipulando um segundo menor possivel
    setlocale(LC_ALL,"portuguese");

    
    printf("Digite quantos números tem o seu conjunto de números com duas casas decimais: ");
    scanf("%d",&d); //tamanho do vetor conj
    conj.resize(d); // mudando o valor do tamanho do vetor para d
    for ( int i = 0 ; i < d ; i++ ){//loop para armazenar os valores no vetor conj
        printf("Digite (aleatorio) ou (1) se deseja que o algoritmo gere um número, (armazenar) ou (2) se deseja quiser inserir manualmente ou (sair) se deseja encerrar o algoritmo :");
        fflush(stdin);
        scanf("%s",menu);
        if (strcmp( menu , "armazenar" ) == 0 || strcmp( menu , "2" ) == 0 ){
            printf("Digite o %dº valor do seu conjunto: ",i+1);
            scanf("%f",&conj[i]); //caso o usuario ira digitar os valores
            }
        if (strcmp( menu , "aleatorio" ) == 0 || strcmp( menu , "1" ) == 0 ) {conj[i]=1.0+(rand()%100);}//estipulando valores aleatorios entre 1 e 1 00}
        if (maior < conj[i]){
            smaior = maior;
            maior = conj[i];
        }//caso o maior armazenado for menor que o numero digitado -> novo maior
    }//fim for i

    printf("\nO maior número digitado é : %.2f\nO segundo maior número digitado é : %.2f", maior , smaior );//imprimindo o maior e o segundo maior

}//fim main