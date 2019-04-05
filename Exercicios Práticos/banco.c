#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Tipo conta bancaria
typedef struct{
	int numConta;
	char cliente[100];
	float saldo;
	char senha[8];
	unsigned int chave;
}contabancaria;

//Lista de contas
typedef struct{
	contabancaria* conta;
	contabancaria* prox;
}Lista;

Lista* criaLista(){
	return NULL;
}
/*Adiçao de conta
Função para alocação dinamica de contas*/
contabancaria criaConta(){
	criaLista();
	contabancaria conta = malloc(sizeof(contabancaria));
	srand(time(NULL));
	
	conta.numConta = 1; //FAZER LOGICA PARA NUMERO DA CONTA AUTOMÁTICO
	conta.saldo = 0;	
	conta.chave = rand() % 10000;
	printf("Sua chave numérica é: %d\n"
		   "Guarde sua senha !!!", conta.chave);
	printf("Informe seu nome completo: ");
	scanf("%s", conta.cliente);
	printf("Crie sua senha: ");
	scanf("%s", conta.senha);
	return conta;
}

int main(){
	int* index = 0;
	contabancaria* raiz;
	
	contabancaria conta = criaConta();
	printf("Conta = %6d\n"
		   "Saldo = %2f\n"
		   "Titular = %s\n"
		   "Senha = %s\n"
		   "Chave = %4d\n",conta.numConta, conta.saldo, conta.cliente, conta.senha, conta.chave);
	
	return 0;
}
