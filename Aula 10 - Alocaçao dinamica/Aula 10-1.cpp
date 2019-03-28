#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Jogar(int t){
	
	int i,num_jogador,num_cpu;
	int* vetor;
	
	vetor = (int*) malloc(t*sizeof(int));
	srand(time(NULL));
	
	for(i=0;i<t;i++){
		vetor[i] = rand() % 10;
		printf("%d ", vetor[i]);
	}
	printf("\n Escolha um numero: ");
			scanf("%d", &num_jogador);
			num_cpu = vetor[rand()%(t-1)];
			printf("Numero sorteado = %d\n", num_cpu);
			if(num_cpu==num_jogador){
				printf("VOCE GANHOU !!!");
			}else{
				printf("VOCE PERDEU!!!");
			}
			free(vetor);
}

int main(){
	
	int opcao;
	
	printf("Informe o nivel de dificuldade: \n");
	printf(" FACIL = 1 \n MEDIO = 2 \n DIFICIL = 3 \n");
	scanf("%d", &opcao);
	
	switch(opcao){
		case 1:
			printf("DIFICULDADE FACIL ( 3 OPCOES )\n");
			Jogar(3);
			break;
		case 2:
			printf("DIFICULDADE MEDIA ( 5 OPCOES )\n");
			Jogar(5);
			break;
		case 3:
			printf("DIFICULDADE DIFICIL ( 10 OPCOES )\n");
			Jogar(10);
			break;
		default :
			printf("OPCAO INVALIDA!!!");
			break;
	}
	
	return 0;
}
