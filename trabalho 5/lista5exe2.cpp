#include<stdio.h>
#include<stdbool.h>
#include<locale.h>
#include<string.h>
#define max 10

struct TipoCadastro  // Cadastro
{
    
    char codigo[10] , nome[40] , numero[10]; // codigo do cliente, nome do cliente, numero da conta
    float saldo; // saldo da conta

};


int main (){
    setlocale ( LC_ALL , "Portuguese" );

    struct TipoCadastro cliente[max]; //struct dos dados do cliente

    char menu[15] = {"loucura"} , temp[10] , c;

    bool a ;

    int x = 0 , aux;
    
    while ( true ){

        printf("Digite qual parte do programa deseja acessar.\n"
        "cadastro para inserir um cadastro.\n"
        "indice se deseja ver as informações do cliente pelo índice digitado.\n"
        "codigo se deseja ver as informações do cliente pelo codigo do cliente digitado.\n"
        "numero se deseja ver as informações do cliente pelo número da conta digitado.\n"
        "ou sair pra finalizar o programa:\n");
        fflush(stdin);
        scanf("%s", &menu);
        
        if ( strcmp ( menu , "sair" ) == 0 ) {return 0;} // fim do menu sair

        if ( strcmp ( menu , "cadastro" ) == 0) {
            
            a = true ;
    
            while ( a == true ){ // verificação se o usuário deseja fazer outro armazenamento das informações do professor ou voltar para o menu 
        
                if ( x >= max ) { // verificar se ja digitou o número máximo de cadastros

                    printf("Não tem mais espaço para armazenar clientes.\n");
                    a = false;

                }
                    
                else {

                    while ( a == true){ //verificar se o usuário digitou o nome dentro dos parâmetros
                        
                        printf("\nDigite o nome do cliente : ");
                        fflush(stdin);
                        scanf("%s", &cliente[x].nome);
                        if ( strlen (cliente[x].nome) < 40 ) { a = false; }
                        else {a = true;}

                    } // fim while nome

                    while ( a == false ){ //verificar se o usuário digitou o código dentro dos parâmetros
                        
                        printf("\nDigite o código ( 10 digitos de qualquer natureza ) do cliente %s : " , cliente[x].nome );
                        fflush(stdin);
                        scanf("%s",&cliente[x].codigo);
                        if ( strlen ( cliente[x].codigo ) < 10 ) { a = true; }
                        else {a = false;}

                    }// fim while codigo

                    while ( a == true ){ //verificar se o usuário digitou o número da conta dentro dos parâmetros
                        
                        printf("\nDigite o número ( 10 digitos de qualquer natureza ) do cliente %s : " , cliente[x].nome );
                        fflush(stdin);
                        scanf("%s", cliente[x].numero);
                        if ( strlen ( cliente[x].numero ) < 10 ) { a = false; }
                        else {a = true;}

                    }// fim while numero
                    
                    while ( a == false ){ //verificar se o usuário digitou o número da conta dentro dos parâmetros
                        
                        printf("\nDigite o saldo do cliente %s : " , cliente[x].nome );
                        fflush(stdin);
                        scanf("%f", &cliente[x].saldo);
                        a = true;
                        
                    }// fim while saldo

                    printf("\nDigite (s) se deseja fazer outro cadastro de professor(a) ou do contrário digite (n): ");
                    fflush(stdin);
                    scanf("%c",&c);

                    switch (c){ // switch pra direcionar o usuário pra o que ele quer fazer

                        case 's':
                            a = true ; // continuar armazenando informaçoes de outro cliente
                        break;
                        
                        case 'n':
                            a = false ; // parar de armazenar informações de clientes
                        break;
                        
                        default:

                            printf("\nA opção digitada é inválida, digite (s) se deseja continuar a cadastrar mais clientes ou do contrario digite (n) para sair do cadastro de clientes : ");
                            fflush(stdin);
                            scanf("%c",&c); // digitou outra coisa fora do menu, digita denovo

                        break;
                        
                    }//fimswitch

                    x++; // incrementa o x para a entrada de outro professor caso necessario

                }//fim else

            }// fim while a
                
        } // fim do menu cadastro

        if ( strcmp ( menu , "indice") == 0 ) {

            a = true;

            while (a == true){ // verificar se o aux e deve ser digitado denovo

                printf("Digite a posição que deseja verificar : ");
                scanf("%d",&aux);
                aux--;

                if (aux <= max) {
                    printf("O nome do cliente é %s\n" , cliente[aux].nome );
                    printf("A código do cliente é %s\n" , cliente[aux].codigo );
                    printf("O número da conta é %s\n" , cliente[aux].numero );
                    printf("O saldo da conta é %.2f\n" , cliente[aux].saldo ); // imprime os dados na posição desejada
                } // fim if
                
                printf("\nDigite (s) se deseja fazer outro cadastro de professor(a) ou do contrário digite (n): ");
                fflush(stdin);
                scanf("%c",&c);

                switch (c){ // switch pra direcionar o usuário pra o que ele quer fazer

                    case 's':
                        a = true ; // continuar imprimindo informaçoes de outro cliente
                    break;
                    
                    case 'n':
                        a = false ; // parar de imprimir informações de clientes
                    break;
                    
                    default:

                        printf("\nA opção digitada é inválida, digite (s) se deseja continuar a imprimir mais dados de clientes ou do contrario digite (n) para sair da impressão de dados de clientes : ");
                        fflush(stdin);
                        scanf("%c",&c); // digitou outra coisa fora do menu, digita denovo

                    break;
                    
                }//fimswitch

            }//fim verificacao se o numero digitado esta dentro dos parametros

        }// fim if indice

        if ( strcmp ( menu , "codigo") == 0 ){
            a = true;
            while ( a == true){
                
                printf("Digite o código do cliente que deseja verificar :");
                fflush(stdin);
                scanf("%s",&temp);
                if ( strlen ( temp ) <= 10 ) {
                    a = false;
                    for (int i = 0 ; i < max ; i++){

                        if ( strcmp (temp, cliente[i].codigo) == 0){aux = i;}
                            
                    }//fim for

                    printf("O nome do cliente é %s\n" , cliente[aux].nome );
                    printf("A código do cliente é %s\n" , cliente[aux].codigo );
                    printf("O número da conta é %s\n" , cliente[aux].numero );
                    printf("O saldo da conta é %.2f\n" , cliente[aux].saldo ); // imprime os dados na posição desejada
            

                }//fim if
                
                printf("\nDigite (s) se deseja fazer outro cadastro de professor(a) ou do contrário digite (n): ");
                fflush(stdin);
                scanf("%c",&c);

                switch (c){ // switch pra direcionar o usuário pra o que ele quer fazer

                    case 's':
                        a = true ; // continuar imprimindo informaçoes de outro cliente
                    break;
                    
                    case 'n':
                        a = false ; // parar de imprimir informações de clientes
                    break;
                    
                    default:

                        printf("\nA opção digitada é inválida, digite (s) se deseja continuar a imprimir mais dados de clientes ou do contrario digite (n) para sair da impressão de dados de clientes : ");
                        fflush(stdin);
                        scanf("%c",&c); // digitou outra coisa fora do menu, digita denovo

                    break;
                    
                }//fimswitch
                
            }//fim whila a
            
        }//fim if codigo

        if ( strcmp ( menu , "numero") == 0 ){
            a = true;
            while ( a == true){
                
                printf("Digite o número do cliente que deseja verificar :");
                fflush(stdin);
                scanf("%s",&temp[10]);
                if ( strlen ( temp ) <= 10 ) {
                    a = false;
                    for (int i = 0 ; i < max ; i++){

                        if ( strcmp (temp, cliente[i].numero) == 0){aux = i;}
                                                  
                    }//fim for

                    printf("O nome do cliente é %s\n" , cliente[aux].nome );// imprime os dados na posição desejada
                    printf("A código do cliente é %s\n" , cliente[aux].codigo );
                    printf("O número da conta é %s\n" , cliente[aux].numero );
                    printf("O saldo da conta é %.2f\n" , cliente[aux].saldo ); 


                }//fim if
                
                printf("\nDigite (s) se deseja fazer outro cadastro de professor(a) ou do contrário digite (n): ");
                fflush(stdin);
                scanf("%c",&c);

                switch (c){ // switch pra direcionar o usuário pra o que ele quer fazer

                    case 's':
                        a = true ; // continuar imprimindo informaçoes de outro cliente
                    break;
                    
                    case 'n':
                        a = false ; // parar de imprimir informações de clientes
                    break;
                    
                    default:

                        printf("\nA opção digitada é inválida, digite (s) se deseja continuar a imprimir mais dados de clientes ou do contrario digite (n) para sair da impressão de dados de clientes : ");
                        fflush(stdin);
                        scanf("%c",&c); // digitou outra coisa fora do menu, digita denovo

                    break;
                    
                }//fimswitch
                
            }//fim whila a
            
        }//fim if numero

    } // fim do while true
    
}//fim algoritmo

