#include <stdio.h>

int main(){

	int num;
	
	printf("----- MENU-----\n Informe a opcao desejada: (1 - 9) Digite 0 para SAIR!\n");
	scanf("%d", &num);
	
		while(true){
			if(num>0 && num<10){
				printf("----- MENU-----\n Informe a opcao desejada: (1 - 9) Digite 0 para SAIR!\n");
				scanf("%d", &num);
			}
			else if (num==0){
				printf("----- MENU-----\n Programa encerrado!");
				break;
			}
			else{
				printf("----- MENU-----\n Opcao desejada inexistente");
				break;
			}
		}
	return 0;
}
