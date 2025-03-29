#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n1, n2, n3, maior, menor;
	printf("Digite um numero inteiro.: ");
	scanf("%d", &n1);
	printf("\nDigite outro numero inteiro.: ");
	scanf("%d", &n2);
	printf("\nDigite outro numero inteiro.: ");
	scanf("%d", &n3);
	
	if(n1 >= n2 && n1>=3){
		maior = n1;
	}else if(n2 >= n1 && n2>=n3){
		maior = n2;
	}else{
		maior = n3;
	}
	
	if (n1<= n2 && n1 <= n3){
		menor = n1;
	}else if (n2 <= n1 && n2 <= n3){
		menor = n2;
	}else{
		menor = n3;
	}	
	
	printf("O maior valor e: %d", maior);
	printf("\nO menor valor e: %d", menor);
	
	
	return 0;
	getch();
}
