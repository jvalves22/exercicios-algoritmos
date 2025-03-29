#include <stdio.h>
#include <conio.h>

int main() {
    float saldoInicial, valorCheque;

    printf("Digite o saldo inicial do cliente: ");
    scanf("%f", &saldoInicial);

    printf("Digite o valor do cheque em análise: ");
    scanf("%f", &valorCheque);

    if (saldoInicial >= valorCheque) {
        saldoInicial -= valorCheque;
        printf("Cheque descontado com sucesso. Novo saldo: %.2f\n", saldoInicial);
    } else {
        printf("Cheque não pode ser descontado. Saldo insuficiente.\n");
    }

    return 0;
    getch();
}
