#include <stdio.h>

int main(){
	
	int i, num, result;
	
	printf("Informe um n�mero inteiro positivo: ");
	scanf("%d", &num);
	result = num;
	
	if(num>0){
		for(i=num-1; i>1; i--){
			result = result * i;
		}	
	}
	else{
		printf("Informe um n�mero valido !!! \n");
	}
	
	printf("O fatorial de %d = %d", num, result);
	return 0;	
}
