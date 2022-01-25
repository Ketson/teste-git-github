#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[40];
    int idade;
    float altura;

    printf("Informe o seu nome? \n");
    gets(nome);

    printf("Qual a sua idade? \n");
    scanf("%d",&idade);

    //essa linha foi modificada no ramo master
    //modificada no ramo teste
    printf("Qual sua altura? \n");
    scanf("%f",&altura);

    return 0;

}