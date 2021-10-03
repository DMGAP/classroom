#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdbool.h>
#define max 100

struct DadosFornecedores
{
    int codigo;
    char nome[25],cidade[20];

};

int main (){
    setlocale(LC_ALL,"Portuguese");
    struct DadosFornecedores fornecedores[max];
    int x = 0 ;
    bool a = true;
    char menu[25] , c;

    while (true){
        printf("Digite qual parte do programa deseja acessar.\n"
        "armazenar  ou  1 para armazenar as informações de fornecedores.\n"
        "imprimir ou 2 para apresentar na tela as informações de fornecedores.\n"
        "ou sair pra finalizar o programa:\n");
        scanf("%s", &menu);

        if (strcmp ( menu, "sair" ) == 0 ) { return 0; } // sair  = acaba com a compilação
            
        if ( (strcmp ( menu, "armazenar" ) == 0) || ( strcmp ( menu, "1" ) == 0 ) ) {
            
            while (a == true){
            
                if ( x >= max ) {

                    printf("Não tem mais espaço para armazenar fornecedores.\n");
                    a = false;

                }//fimif
                    
                else {

                    a=true;

                    while ( a == true ){
                        printf("\nDigite o nome do fornecedor(a) : ");
                        scanf("%s", &fornecedores[x].nome );   // armazenamento do nome do fornecedor
                        if (strlen ( fornecedores[x].nome ) < 25 ){ a = false ; } // verificação se o nome do fornecedor enquadra na norma estipulada pelo problema
                        else{ a = true; }//fim else
                    }//fim while a
                    
                    while ( a == false ){
                    printf("\nDigite o código do fornecedor(a) : ");
                    scanf("%d", &fornecedores[x].codigo );   // armazenamento do nome do fornecedor
                    a = true;
                    }//fim while a

                    while ( a == true ){
                        printf("\nDigite o nome da cidade do fornecedor(a) : ");
                        scanf("%s", &fornecedores[x].cidade );   // armazenamento do nome do fornecedor
                        if (strlen ( fornecedores[x].cidade ) < 20 ){ a = false ; } // verificação se o nome do fornecedor enquadra na norma estipulada pelo problema
                        else{ a = true; }//fim else
                    }//fim whila a

                    printf("\nDigite (s) se deseja fazer outro cadastro de fornecedor(a) ou do contrário digite (n): ");
                    fflush(stdin);
                    scanf("%c",&c);

                    switch (c){ // switch pra direcionar o usuário pra o que ele quer fazer

                        case 's':
                            a = true ; // continuar armazenando informaçoes de outro fornecedor
                        break;
                        
                        case 'n':
                            a = false ; // parar de armazenar informações de fornecedores
                        break;
                        
                        default:
                            printf("\nA opção digitada é inválida, digite (s) se deseja continuar a cadastrar mais fornecedores ou do contrario digite (n) para sair do cadastro de fornecedores : ");
                            fflush(stdin);
                            scanf("%c",&c); // digitou outra coisa fora do menu, digita denovo
                        break;
                        
                    }//fimswitch

                    x++; // incrementa o x para a entrada de outro fornecedor caso necessario
                
                }//fim else armazenar

            }//fim while a armazenar

        }//fim if armazenar

        if ( (strcmp ( menu, "imprimir" ) == 0) || ( strcmp ( menu, "2" ) == 0 ) ) {
            
            for (int i = 0 ; i < x ; i++){

                printf("%s\n%d\n%s\n", fornecedores[i].nome, fornecedores[i].codigo, fornecedores[i].cidade);

            }//fim for

        }//fim if imprimir

    }//fim while a
    
}//fim do algoritmo