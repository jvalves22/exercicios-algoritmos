#include <stdio.h>

int main() {
    int numero;
    
    // Solicita ao usu�rio que digite um n�mero inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    // Verifica se o n�mero � par ou �mpar
    if (numero % 2 == 0) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }
    
    return 0;
}

