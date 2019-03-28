#include <stdio.h>

int main(){
	
	int hora;
	
	printf("Informe a parte inteira do horário: ");
	scanf("%d", &hora);
	
	if( hora >= 6 && hora < 12 ){
		printf("BOM DIA !!!");
	}
	else if (hora >= 12 && hora < 18){
		printf("BOA TARDE !!!");
	}
	else if(hora > 24 || hora < 0){
		printf("HORARIO INVALIDO, TENTE NOVAMENTE!");
	}
	else {
		printf("BOA NOITE !!!");
	}
	
	return 0;
}
