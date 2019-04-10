#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Tipo conta bancaria
typedef struct{
	char cliente[50];
	float saldo;
	unsigned int numConta;
	char senha[8];
	unsigned int chave;
}conta;

//Lista de contas
typedef struct str_banco{
	conta* cliente;
	struct str_banco* prox;
}banco;

//Adiçao de conta
//Função para alocação dinamica de contas
conta* criaConta(int* numcontas){
	conta* infosConta = (conta*) malloc(sizeof(conta));
	if( !infosConta ) return;
	printf("Nome: ");
	
	gets(infosConta->cliente);
	printf("Nome= ", infosConta->cliente);
	return infosConta;
}

int main(){
	banco* lista_contas = 0;
	int n, numcontas;
	
	printf("1 - Cria conta \n");
	scanf("%d", &n);
	getchar();
	
	if(n==1){
		conta* infosConta = criaConta(numcontas);
	}
	return 0;
}
