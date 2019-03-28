#include <stdio.h>

void Primo(int num){
	int i=0, primo=0;
	
	for(i=num/2; i>=2; i--){
		if(num%i==0){
			primo ++;
		}
		//printf("num=%d  i=%d primo=%d \n", num, i, primo);              //DEBUG
	}
	
	if(primo>0){
		printf("O numero %d nao e primo!!! \n", num);
	}
	else{
		printf("O numero %d e primo!!! \n" , num);
	}
}

int main(){
	
	int num;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &num);
	Primo(num);
	
	return 0;
}
