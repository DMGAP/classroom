#include<stdio.h>
#include<locale.h>
#include<string>
#include<stdbool.h>

struct TipoProfessor {

    char cpf[11] , nomeProf[30] , titulacao[40] ;    
};

struct TipoCliente {

    int codigo , telefone;
    char nomeCliente[30] , email[40];
};

int main (){
    setlocale(LC_ALL,"Portuguese");

    TipoProfessor professor[10];
    TipoCliente cliente[10];

    bool a , b;
    char c, menu;
    int x = 0 , y = 0;
    
    while ( menu != 'sair'){
        
        a = true;
        while( a == true ){ // verificação se o usuário deseja fazer outro armazenamento das informações do professor ou voltar para o menu

            while ( x < 10 ){// armazenamento das informações do professor
        

                while ( a == true ){
                printf("\nDigite o nome do professor:");
                scanf("%s", &professor[x].nomeProf );   // armazenamento do nome do professor
                if (strlen ( professor[x].nomeProf ) <30 ){ a = false ; } // verificação se o nome do professor enquadra na norma estipulada pelo problema
                else{ a = true; }
                }

                while ( a == false ){
                printf("\nDigite o CPF do professor %s :", professor[x].nomeProf);
                scanf("%s", &professor[x].cpf ) ;   // armazenamento do CPF do professor
                if ( strlen ( professor[x].cpf ) == 11 ) { a = true ; }  // verificação se o CPF do professor enquadra na norma estipulada pelo problema
                else{ a = false ; }
                }

                while ( a == true ){
                printf("\nDigite o Título do professor %s :", professor[x].nomeProf);
                scanf("%s", &professor[x].titulacao ) ;  // verificação se o título do professor enquadra na norma estipulada pelo problema
                if ( strlen ( professor[x].titulacao ) < 40 ) { a = false ; }   // verificação se o nome do título do professor enquadra na norma estipulada pelo problema
                else{ a = true ; }
                }

            
                printf("\nDigite (s) se deseja fazer outro cadastro de professor ou do contrário digite (n):");
                scanf("%s",&c);

                switch (c){
                    case 's':
                        a = true ; // continuar armazenando informaçoes de outro professor
                        break;
                    
                    case 'n':
                        a = false ; // parar de armazenar informações de professores
                        break;
                    
                    default:
                        printf("\nA opção digitada é inválida, digite (s) se deseja continuar a cadastrar mais professores ou do contrario digite (n) para sair do cadastro de professores:");
                        scanf("%s",&c); // digitou outra coisa fora do menu, digita denovo
                        break;
                    
                }
                x++; // incrementa o x para a entrada de outro professor caso necessario
            }

        a = true;
        while( a == true ){ // verificação se o usuário deseja fazer outro armazenamento das informações do cliente ou voltar para o menu

            while ( y < 10 ){ 

                while ( a == true ){
                    printf("\nDigite o nome do cliente:");
                    scanf("%s", &cliente[y].nomeCliente );  // armazenamento do nome do cliente
                    if (strlen ( cliente[y].nomeCliente ) <30 ) { a = true ; } // verificação se o nome do cliente enquadra na norma estipulada pelo problema
                    else{ a = false; }
                }

                while ( a == true ){
                    printf("\nDigite o código do cliente %s :", cliente[y].nomeCliente );
                    scanf("%s", &cliente[y].codigo );   // armazenamento do código do cliente
                    a = false; 
                }
                
                while ( a == false ){
                    printf("\nDigite o telefone  do cliente %s:", cliente[y].telefone);
                    scanf("%d", &cliente[y].telefone ); // armazenamento do telefone do cliente
                    if ( ( cliente[y].telefone < 10^13 ) && ( cliente[y].telefone >= 10^12 ) ) { a = true ; }   // verificação se o telefone do cliente enquadra na norma estipulada pelo problema
                    else { a = false; }
                }
                
                while ( a == true ){
                printf("\nDigite o Título do cliente %s :", cliente[y].nomeCliente);
                scanf("%s", &cliente[y].email ) ;   // armazenamento do email do cliente
                if ( strlen ( cliente[y].email ) < 40 ) { a = false ; } // verificação se o email digitado pelo cliente enquadra na norma estipulada pelo problema, nao verifica se o email e valido
                else{ a = true ; }
                }


                printf("\nDigite (s) se deseja fazer outro cadastro de cliente ou do contrário digite (n):");
                scanf("%s",&c);

                switch (c){
                    case 's':
                        a = true ; // continuar armazenando informações de outro cliente
                        break;
                    
                    case 'n':
                        a = false ;// parar de armazenar informações de clientes
                        break;
                    
                    default:
                        printf("\nA opção digitada é inválida, digite (s) se deseja continuar a cadastrar mais professores ou do contrario digite (n) para sair do cadastro de professores:");
                        scanf("%s",&c); // digitou outra coisa que não foi estabelecido no menu, digita denovo
                        break;
                }
                y++; // incrementação para colocar um novo cliente
            }
            

        }
    }
}
