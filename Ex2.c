
// Impressão de Expressões aritméticas
#include <stdio.h>
// necessário para as funções clrscr e getch
int main()
{
    int NroDeAndares;
    int AlturaPorAndar;

    clrscr(); // Limpa a tela
    NroDeAndares = 7;
    AlturaPorAndar = 3;

    printf("Altura Total do Prédio: %d metros", NroDeAndares * AlturaPorAndar);
    // No momento da execução sinal %d vai ser substituído
    // pelo valor da multiplicação
    getch(); // espera que o usuário pressione uma tecla
}