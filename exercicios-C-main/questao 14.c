#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "portuguese");

    int dia, hora, minuto, seg, total, conta;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("\n");

    printf("Digite a hora: ");
    scanf("%d", &hora);
    printf("\n");

    printf("Digite o minuto: ");
    scanf("%d", &minuto);
    printf("\n");

    printf("Digite o segundo: ");
    scanf("%d", &seg);
    printf("\n");

    conta = dia*(60*60*60)+hora*(60*60)+minuto*(60)+seg;

    printf("O total em segundos é: %d", conta);

    return 0;


}
