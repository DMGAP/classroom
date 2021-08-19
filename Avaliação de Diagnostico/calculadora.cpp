#include<stdio.h>
#include<locale.h>
#include<math.h>
int a,b,d;
char c;

int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("Esse programa faz um calculo básico entre dois números inteiros.\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite a operação que deseja fazer:\n"
        "1 para adição\n"
        "2 para substração\n"
        "3 para multiplicação\n"
        "4 para divisão\n"
        "5 para resto da divisão\n");
    scanf("%d", &d);
    switch(d){
        case(1):
            c=43;
        break;
        case(2):
            c=45;
        break;
        case(3):
            c=42;
        break;
        case(4):
            c=47;
        break;
        case(5):
            c=37;
        break;
    }
    switch (c){
        case (43):
            printf("%d %c %d resulta em %d.",a,c,b,(a+b));
        break;
        case (45):
            printf("%d %c %d resulta em %d.",a,c,b,(a-b));
        break;
        case (42):
            printf("%d %c %d resulta em %d.",a,c,b,(a*b));
        break;
        case (47):
            printf("%d %c %d resulta em %d.",a,c,b,(a/b));
        break;
        case (37):
            printf("%d / %d resulta em no resto %d.",a,c,b,(a%b));
        break;
    
        default:
        printf("Deixa de ser tapado e digita o um dos simbolos que esta escrito no menu.");
        break;
    }
    return 0;
}