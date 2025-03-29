#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int numeroMes;
	printf("Digite o numero do mes: ");
	scanf("%d", &numeroMes);
	
	if (numeroMes == 1){
		printf("Janeiro");
	}
	else if (numeroMes == 2){
		printf("Fevereiro");
	}
	else if (numeroMes == 3){
		printf("Março");
	}
	else if (numeroMes == 4){
		printf("Abril");
	}
	else if (numeroMes == 5){
		printf("Maio");
	
	}else if (numeroMes == 6){
		printf("Junho");
	}
	else if (numeroMes == 7){
		printf("Julho");
	}
	else if (numeroMes == 8){
		printf("Agosto");
	}
	else if (numeroMes == 9){
		printf("Setembro");
	}
	else if (numeroMes == 10){
		printf("Outubro");
	}
	else if (numeroMes == 11){
		printf("Novembro");
	}
	else if (numeroMes == 12){
		printf("Dezembro");
	}
	else{
		printf("Nao e um mes");
	}
	
	return 0;
	getch();
}
