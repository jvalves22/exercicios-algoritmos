#include <stdio.h>

int main() {
    int mes;
    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
            printf("O mes e: Janeiro\n");
            break;
        case 2:
            printf("O mes e: Fevereiro\n");
            break;
        case 3:
            printf("O mes e: Marco\n");
            break;
        case 4:
            printf("O mes e: Abril\n");
            break;
        case 5:
            printf("O mes e: Maio\n");
            break;
        case 6:
            printf("O mes e: Junho\n");
            break;
        case 7:
            printf("O mes e: Julho\n");
            break;
        case 8:
            printf("O mes e: Agosto\n");
            break;
        case 9:
            printf("O mes e: Setembro\n");
            break;
        case 10:
            printf("O mes e: Outubro\n");
            break;
        case 11:
            printf("O mes e: Novembro\n");
            break;
        case 12:
            printf("O mes e: Dezembro\n");
            break;
        default:
            printf("Numero invalido. Digite um numero entre 1 e 12.\n");
            break;
    }

    return 0;
}

