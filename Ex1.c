#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[30];
    int idade;
    float altura;

    printf("Informe o seu nome? \n");
    gets(nome);

    printf("Qual a sua idade? \n");
    scanf("%d",&idade);

    //modificada no ramo teste
    printf("Qual sua altura? \n");
    scanf("%f",&altura);

    return 0;

}