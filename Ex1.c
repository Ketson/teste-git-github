#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[30];
    int idade;

    printf("Informe o seu nome? \n");
    gets(nome);

    printf("Qual a sua idade? \n");
    scanf("%d",&idade);

    //essa linha foi modificada no ramo master

    return 0;

}