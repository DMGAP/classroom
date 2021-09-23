#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdbool.h>
#define max 10

struct TipoProfessor {

    char cpf[15] , nomeProf[30] , titulacao[40] ;    

};

struct TipoCliente {

    int codigo , telefone;
    char nomeCliente[30] , email[40];
    
};

int main (){
    setlocale(LC_ALL,"portuguese");

    TipoProfessor professor[10];
    TipoCliente cliente[10];

    bool a  ;
    char c, menu[15] = {"cowabunga"} , acessar[30] ;
    int x = 0 , y = 0 ;
    
    while ( true ){

        printf("Digite qual parte do programa deseja acessar.\n"
        "professor para acessar as informações de professores.\n"
        "cliente para acessar as informações de clientes.\n"
        "ou sair pra finalizar o programa:\n");
        scanf("%s", &menu);
        
        if (strcmp ( menu, "sair") == 0 ) { return 0; } // sair  = acaba com a compilação
        if (strcmp ( menu, "professor") == 0 ){ // armazenamento das informações do professor

            while (true){

                printf("Digite 1 ou 'acessar' pra apresentar na tela, 2 ou 'armazenar' para guardar dados, voltar para voltar para o último menu:\n");
                fflush(stdin);
                scanf("%s",&menu);

                if ( strcmp ( menu, "voltar" ) == 0 ) {break;}

                if ( (strcmp ( menu, "armazenar" ) == 0) || ( strcmp ( menu, "2" ) == 0 ) ) {
                    
                    a = true;

                    while( a == true ){ // verificação se o usuário deseja fazer outro armazenamento das informações do professor ou voltar para o menu    

                        if ( x >= max ) {

                            printf("Não tem mais espaço para armazenar professores.\n");
                            a = false;

                        }
                            
                        else {
                            
                            while ( a == true ){
                            printf("\nDigite o nome do professor(a) : ");
                            scanf("%s", &professor[x].nomeProf );   // armazenamento do nome do professor
                            if (strlen ( professor[x].nomeProf ) < 30 ){ a = false ; } // verificação se o nome do professor enquadra na norma estipulada pelo problema
                            else{ a = true; }
                            }

                            while ( a == false ){
                            printf("\nDigite o CPF do professor(a) %s :", professor[x].nomeProf);
                            scanf("%s", &professor[x].cpf ) ;   // armazenamento do CPF do professor
                            if ( ( strlen ( professor[x].cpf )  == 12 ) || ( strlen ( professor[x].cpf)  == 11 )  ) { a = true ; }  // verificação se o CPF do professor enquadra na norma estipulada pelo problema
                            else{ a = false ; }
                            }

                            while ( a == true ){
                            printf("\nDigite o Título do professor(a) %s :", professor[x].nomeProf);
                            scanf("%s", &professor[x].titulacao ) ;  // verificação se o título do professor enquadra na norma estipulada pelo problema
                            if ( strlen ( professor[x].titulacao ) < 40 ) { a = false ; }   // verificação se o nome do título do professor enquadra na norma estipulada pelo problema
                            else{ a = true ; }
                            }

                        
                            printf("\nDigite (s) se deseja fazer outro cadastro de professor(a) ou do contrário digite (n): ");
                            fflush(stdin);
                            scanf("%c",&c);

                            switch (c){ // switch pra direcionar o usuário pra o que ele quer fazer

                                case 's':
                                    a = true ; // continuar armazenando informaçoes de outro professor
                                break;
                                
                                case 'n':
                                    a = false ; // parar de armazenar informações de professores
                                break;
                                
                                default:
                                    printf("\nA opção digitada é inválida, digite (s) se deseja continuar a cadastrar mais professores ou do contrario digite (n) para sair do cadastro de professores : ");
                                    fflush(stdin);
                                    scanf("%c",&c); // digitou outra coisa fora do menu, digita denovo
                                break;
                                
                            }//fimswitch

                            x++; // incrementa o x para a entrada de outro professor caso necessario

                        }//fim else

                    }// fim while a

                } // fim if armazenar                

                if ( ( strcmp ( menu , "acessar" ) == 0 ) || ( strcmp ( menu , "1" ) == 0 ) ){

                    a = true;

                    while (a == true){
                        
                        printf("Digite o nome do professor ou qual a posição que foi digitado: \n");
                        scanf("%s", &acessar);

                        if ( strlen (acessar) > 2 ){

                            for ( int i = 0 ; i < max ; i++ ){

                                if ( strcmp ( acessar , professor[i].nomeProf ) == 0 ){

                                    printf("Nome do professor(a) : %s\nCPF do professor(a) : %s\nTítulo do professor(a) %s\n", professor[i].nomeProf , professor[i].cpf , professor[i].titulacao );

                                }

                            }

                        }

                        else if ( strlen ( acessar ) >= 1) {
                            printf("Nome do professor(a) : %s\nCPF do professor(a) : %s\nTítulo do professor(a) %s\n", professor[int(acessar)].nomeProf , professor[int(acessar)].cpf , professor[int(acessar)].titulacao );

                        }//fim else if

                        printf("\nDigite (s) se deseja fazer outro cadastro de cliente ou do contrário digite (n):\n");
                        fflush(stdin);
                        scanf("%c",&c);

                        switch (c){ // switch pra direcionar o usuário pra o que ele quer fazer

                            case 's':
                                a = true ; // continuar armazenando informações de outro cliente
                            break;
                            
                            case 'n':
                                a = false ;// parar de armazenar informações de clientes
                            break;
                            
                            default:
                                printf("\nA opção digitada é inválida, digite (s) se deseja continuar a acessar mais professores ou do contrario digite (n) para sair do acesso as informações de professores : ");
                                fflush(stdin);
                                scanf("%c",&c); // digitou outra coisa que não foi estabelecido no menu, digita denovo
                            break;

                        }//fim switch

                    } // fime while a

                }//fim if menu acessar

            } // fim while true dentro de professor

        }// fim if professor

        if ( strcmp ( menu , "cliente" ) == 0 ){

            while (true){

                printf("Digite 1 ou 'acessar' pra apresentar na tela, 2 ou 'armazenar' para guardar dados, voltar para voltar para o último menu:\n");
                fflush(stdin);
                scanf("%s",&menu);

                if ( strcmp ( menu, "voltar" ) == 0 ) {break;}

                if ( (strcmp ( menu, "armazenar" ) == 0) || ( strcmp ( menu, "2" ) == 0 ) ) {

                    a = true;
                    while( a == true ){ // verificação se o usuário deseja fazer outro armazenamento das informações do cliente ou voltar para o menu
                        
                        if ( y >= max ) { // verificar o máximo de clientes armazenado
                        printf("Não tem mais espaço para armazenar clientes.\n");
                        a = false;
                        }
                    
                        else {

                            while ( a == true ){
                                printf("\nDigite o nome do cliente: ");
                                scanf("%s", &cliente[y].nomeCliente );  // armazenamento do nome do cliente
                                if (strlen ( cliente[y].nomeCliente ) < 30 ) { a = false ; } // verificação se o nome do cliente enquadra na norma estipulada pelo problema
                                else{ a = true; }
                            }

                            while ( a == false ){
                                printf("\nDigite o código do cliente %s : ", cliente[y].nomeCliente );
                                scanf("%d", &cliente[y].codigo );   // armazenamento do código do cliente
                                a = true; 
                            }
                            
                            while ( a == true ){
                                printf("\nDigite o telefone do cliente %s sem (): ", cliente[y].telefone);
                                scanf("%d", &cliente[y].telefone ); // armazenamento do telefone do cliente
                                if ( ( cliente[y].telefone < 10^13 ) && ( cliente[y].telefone >= 10^12 ) ) { a = false ; }   // verificação se o telefone do cliente enquadra na norma estipulada pelo problema
                                else { a = true ; }
                            }
                            
                            while ( a == false ){
                                printf("\nDigite o email do cliente %s: ", cliente[y].nomeCliente);
                                scanf("%s", &cliente[y].email ) ;   // armazenamento do email do cliente
                                if ( strlen ( cliente[y].email ) < 40 ) { a = true ; } // verificação se o email digitado pelo cliente enquadra na norma estipulada pelo problema, nao verifica se o email e valido
                                else{ a = false ; }
                            }


                            printf("\nDigite (s) se deseja fazer outro cadastro de cliente ou do contrário digite (n):\n");
                            fflush(stdin);
                            scanf("%c",&c);

                            switch (c){ // switch pra direcionar o usuário pra o que ele quer fazer

                                case 's':
                                    a = true ; // continuar armazenando informações de outro cliente
                                break;
                                
                                case 'n':
                                    a = false ;// parar de armazenar informações de clientes
                                break;
                                
                                default:
                                    printf("\nA opção digitada é inválida, digite (s) se deseja continuar a cadastrar mais professores ou do contrario digite (n) para sair do cadastro de professores : ");
                                    fflush(stdin);
                                    scanf("%c",&c); // digitou outra coisa que não foi estabelecido no menu, digita denovo
                                break;

                            }//fim switch

                            y++; // incrementação para colocar um novo cliente
                            
                        } // fim else

                    } // fim whila a
                
                }// fim armazenar

                if ( ( strcmp ( menu , "acessar" ) == 0 ) || ( strcmp ( menu , "1" ) == 0 ) ){

                    a = true;

                    while (a == true){
                        
                        printf("Digite o nome do cliente ou qual a posição que foi digitado: \n");
                        scanf("%s", &acessar);

                        if ( strlen (acessar) > 2 ){

                            for ( int i = 0 ; i < max ; i++ ){

                                if ( strcmp ( acessar , cliente[i].nomeCliente ) == 0 ){

                                    printf("Nome do cliente : %s\nCódigo do cliente : %s\nTelefone do cliente : %s\nEmail do cliente : %s\n", cliente[i].nomeCliente , cliente[i].codigo , cliente[i].telefone , cliente[i].email );

                                }

                            }

                        }

                        else if ( strlen ( acessar ) >= 1) {
                            
                            printf("Nome do cliente : %s\nCódigo do cliente : %s\nTelefone do cliente : %s\nEmail do cliente : %s\n", cliente[int(acessar)].nomeCliente , cliente[int(acessar)].codigo , cliente[int(acessar)].telefone , cliente[int(acessar)].email );

                        }//fim else if

                        printf("\nDigite (s) se deseja fazer outro acesso de informações de clientes ou do contrário digite (n) para voltar ao menu principal : \n");
                        fflush(stdin);
                        scanf("%c",&c);

                        switch (c){ // switch pra direcionar o usuário pra o que ele quer fazer

                            case 's':
                                a = true ; // continuar armazenando informações de outro cliente
                            break;
                            
                            case 'n':
                                a = false ;// parar de armazenar informações de clientes
                            break;
                            
                            default:
                                printf("\nA opção digitada é inválida, digite (s) se deseja continuar a acessar mais professores ou do contrario digite (n) para sair do acesso as informações de professores : ");
                                fflush(stdin);
                                scanf("%c",&c); // digitou outra coisa que não foi estabelecido no menu, digita denovo
                            break;

                        }//fim switch

                    } // fime while a

                }//fim if menu acessar

            }// fim while true

        } // fim if cliente

    } // fim while true principal

} // fim main
