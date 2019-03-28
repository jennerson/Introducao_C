#include <stdio.h>

int main(){
	
	int num=0;
	
	do{
		printf("----- MENU-----\n Informe a opcao desejada: (1 - 9) Digite 0 para SAIR!\n");
		scanf("%d", &num);
		if (num==0){
			printf("----- MENU-----\n Programa encerrado!");
		}
		else if(num<0 || num>=10){
			printf("----- MENU-----\n Opcao desejada inexistente\n");
		}	
	}while(num!=0);
	
	return 0;
}
