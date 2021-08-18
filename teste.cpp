#include<stdio.h>
char teste;
int main () {
    scanf("%c",&teste);
    printf("\n %c",teste);
    switch (teste){
        case ('+'):
            printf("\n%c",teste);
        break;
        case ('-'):
            printf("\n%c",teste);
        break;
        case ('*'):
            printf("\n%c",teste);
        break;
        case ('/'):
            printf("\n%c",teste);
        break;
        case ('%'):
            printf("\n%c",teste);
        break;
    }
}