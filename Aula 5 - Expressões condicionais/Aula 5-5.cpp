#include <stdio.h>

int main(){
	
	int mes;
	
	printf("Informe o numero do mes: ");
	scanf("%d", &mes);
	
	switch(mes){
		case 0:
		case 1:
			printf("Mes de JANEIRO: POSSUI 31 DIAS \n");
			break;
		case 2:
			printf("Mes de FEVEREIRO: NAO POSSUI 31 DIAS \n");
			break;
		case 3:
			printf("Mes de MARCO: POSSUI 31 DIAS \n");
			break;
		case 4:
			printf("Mes de ABRIL: NAO POSSUI 31 DIAS \n");
			break;
		case 5:
			printf("Mes de MAIO: POSSUI 31 DIAS \n");
			break;
		case 6:
			printf("Mes de JUNHO: NAO POSSUI 31 DIAS \n");
			break;
		case 7:
			printf("Mes de JULHO: POSSUI 31 DIAS \n");
			break;
		case 8:
			printf("Mes de AGOSTO: POSSUI 31 DIAS \n");
			break;
		case 9:
			printf("Mes de SETEMBRO: NAO POSSUI 31 DIAS \n");
			break;
		case 10:
			printf("Mes de OUTUBRO: POSSUI 31 DIAS \n");
			break;
		case 11:
			printf("Mes de NOVEMBRO: NAO POSSUI 31 DIAS \n");
			break;
		case 12:
			printf("Mes de DEZEMBRO: POSSUI 31 DIAS \n");
			break;
	}
	
	return 0;
	
}
