#include <stdio.h>

int main(){
	
	char nome1[10];
	char nome2[10];
	
	printf("Informe a primeira palavra: ");
	setbuf(stdin,0);
	fgets(nome1, 10, stdin);
	
	printf("Informe a segunda palavra: ");
	setbuf(stdin,0);
	fgets(nome2, 10, stdin);
	
	printf("Nome1 = %s \n",nome1);
	printf("Nome2 = %s \n",nome2);	

	return 0;
}
