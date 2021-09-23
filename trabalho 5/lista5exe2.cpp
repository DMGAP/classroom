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
        "indice se deseja ver as informa��es do cliente pelo �ndice digitado.\n"
        "codigo se deseja ver as informa��es do cliente pelo codigo do cliente digitado.\n"
        "numero se deseja ver as informa��es do cliente pelo n�mero da conta digitado.\n"
        "ou sair pra finalizar o programa:\n");
        fflush(stdin);
        scanf("%s", &menu);
        
        if ( strcmp ( menu , "sair" ) == 0 ) {return 0;} // fim do menu sair

        if ( strcmp ( menu , "cadastro" ) == 0) {
            
            a = true ;
    
            while ( a == true ){ // verifica��o se o usu�rio deseja fazer outro armazenamento das informa��es do professor ou voltar para o menu 
        
                if ( x >= max ) { // verificar se ja digitou o n�mero m�ximo de cadastros

                    printf("N�o tem mais espa�o para armazenar clientes.\n");
                    a = false;

                }
                    
                else {

                    while ( a == true){ //verificar se o usu�rio digitou o nome dentro dos par�metros
                        
                        printf("\nDigite o nome do cliente : ");
                        fflush(stdin);
                        scanf("%s", &cliente[x].nome);
                        if ( strlen (cliente[x].nome) < 40 ) { a = false; }
                        else {a = true;}

                    } // fim while nome

                    while ( a == false ){ //verificar se o usu�rio digitou o c�digo dentro dos par�metros
                        
                        printf("\nDigite o c�digo ( 10 digitos de qualquer natureza ) do cliente %s : " , cliente[x].nome );
                        fflush(stdin);
                        scanf("%s",&cliente[x].codigo);
                        if ( strlen ( cliente[x].codigo ) < 10 ) { a = true; }
                        else {a = false;}

                    }// fim while codigo

                    while ( a == true ){ //verificar se o usu�rio digitou o n�mero da conta dentro dos par�metros
                        
                        printf("\nDigite o n�mero ( 10 digitos de qualquer natureza ) do cliente %s : " , cliente[x].nome );
                        fflush(stdin);
                        scanf("%s", cliente[x].numero);
                        if ( strlen ( cliente[x].numero ) < 10 ) { a = false; }
                        else {a = true;}

                    }// fim while numero
                    
                    while ( a == false ){ //verificar se o usu�rio digitou o n�mero da conta dentro dos par�metros
                        
                        printf("\nDigite o saldo do cliente %s : " , cliente[x].nome );
                        fflush(stdin);
                        scanf("%f", &cliente[x].saldo);
                        a = true;
                        
                    }// fim while saldo

                    printf("\nDigite (s) se deseja fazer outro cadastro de professor(a) ou do contr�rio digite (n): ");
                    fflush(stdin);
                    scanf("%c",&c);

                    switch (c){ // switch pra direcionar o usu�rio pra o que ele quer fazer

                        case 's':
                            a = true ; // continuar armazenando informa�oes de outro cliente
                        break;
                        
                        case 'n':
                            a = false ; // parar de armazenar informa��es de clientes
                        break;
                        
                        default:

                            printf("\nA op��o digitada � inv�lida, digite (s) se deseja continuar a cadastrar mais clientes ou do contrario digite (n) para sair do cadastro de clientes : ");
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

                printf("Digite a posi��o que deseja verificar : ");
                scanf("%d",&aux);
                aux--;

                if (aux <= max) {
                    printf("O nome do cliente � %s\n" , cliente[aux].nome );
                    printf("A c�digo do cliente � %s\n" , cliente[aux].codigo );
                    printf("O n�mero da conta � %s\n" , cliente[aux].numero );
                    printf("O saldo da conta � %.2f\n" , cliente[aux].saldo ); // imprime os dados na posi��o desejada
                } // fim if
                
                printf("\nDigite (s) se deseja fazer outro cadastro de professor(a) ou do contr�rio digite (n): ");
                fflush(stdin);
                scanf("%c",&c);

                switch (c){ // switch pra direcionar o usu�rio pra o que ele quer fazer

                    case 's':
                        a = true ; // continuar imprimindo informa�oes de outro cliente
                    break;
                    
                    case 'n':
                        a = false ; // parar de imprimir informa��es de clientes
                    break;
                    
                    default:

                        printf("\nA op��o digitada � inv�lida, digite (s) se deseja continuar a imprimir mais dados de clientes ou do contrario digite (n) para sair da impress�o de dados de clientes : ");
                        fflush(stdin);
                        scanf("%c",&c); // digitou outra coisa fora do menu, digita denovo

                    break;
                    
                }//fimswitch

            }//fim verificacao se o numero digitado esta dentro dos parametros

        }// fim if indice

        if ( strcmp ( menu , "codigo") == 0 ){
            a = true;
            while ( a == true){
                
                printf("Digite o c�digo do cliente que deseja verificar :");
                fflush(stdin);
                scanf("%s",&temp);
                if ( strlen ( temp ) <= 10 ) {
                    a = false;
                    for (int i = 0 ; i < max ; i++){

                        if ( strcmp (temp, cliente[i].codigo) == 0){aux = i;}
                            
                    }//fim for

                    printf("O nome do cliente � %s\n" , cliente[aux].nome );
                    printf("A c�digo do cliente � %s\n" , cliente[aux].codigo );
                    printf("O n�mero da conta � %s\n" , cliente[aux].numero );
                    printf("O saldo da conta � %.2f\n" , cliente[aux].saldo ); // imprime os dados na posi��o desejada
            

                }//fim if
                
                printf("\nDigite (s) se deseja fazer outro cadastro de professor(a) ou do contr�rio digite (n): ");
                fflush(stdin);
                scanf("%c",&c);

                switch (c){ // switch pra direcionar o usu�rio pra o que ele quer fazer

                    case 's':
                        a = true ; // continuar imprimindo informa�oes de outro cliente
                    break;
                    
                    case 'n':
                        a = false ; // parar de imprimir informa��es de clientes
                    break;
                    
                    default:

                        printf("\nA op��o digitada � inv�lida, digite (s) se deseja continuar a imprimir mais dados de clientes ou do contrario digite (n) para sair da impress�o de dados de clientes : ");
                        fflush(stdin);
                        scanf("%c",&c); // digitou outra coisa fora do menu, digita denovo

                    break;
                    
                }//fimswitch
                
            }//fim whila a
            
        }//fim if codigo

        if ( strcmp ( menu , "numero") == 0 ){
            a = true;
            while ( a == true){
                
                printf("Digite o n�mero do cliente que deseja verificar :");
                fflush(stdin);
                scanf("%s",&temp[10]);
                if ( strlen ( temp ) <= 10 ) {
                    a = false;
                    for (int i = 0 ; i < max ; i++){

                        if ( strcmp (temp, cliente[i].numero) == 0){aux = i;}
                                                  
                    }//fim for

                    printf("O nome do cliente � %s\n" , cliente[aux].nome );// imprime os dados na posi��o desejada
                    printf("A c�digo do cliente � %s\n" , cliente[aux].codigo );
                    printf("O n�mero da conta � %s\n" , cliente[aux].numero );
                    printf("O saldo da conta � %.2f\n" , cliente[aux].saldo ); 


                }//fim if
                
                printf("\nDigite (s) se deseja fazer outro cadastro de professor(a) ou do contr�rio digite (n): ");
                fflush(stdin);
                scanf("%c",&c);

                switch (c){ // switch pra direcionar o usu�rio pra o que ele quer fazer

                    case 's':
                        a = true ; // continuar imprimindo informa�oes de outro cliente
                    break;
                    
                    case 'n':
                        a = false ; // parar de imprimir informa��es de clientes
                    break;
                    
                    default:

                        printf("\nA op��o digitada � inv�lida, digite (s) se deseja continuar a imprimir mais dados de clientes ou do contrario digite (n) para sair da impress�o de dados de clientes : ");
                        fflush(stdin);
                        scanf("%c",&c); // digitou outra coisa fora do menu, digita denovo

                    break;
                    
                }//fimswitch
                
            }//fim whila a
            
        }//fim if numero

    } // fim do while true
    
}//fim algoritmo

