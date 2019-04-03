#include <stdio.h>
#include <sdlib.h>
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
	Lista* prox;
}Lista;

Lista* CriaLista(){
	return NULL;
}

contabancaria AddConta(){
	int index;
	
	contabancaria conta = (contabancaria) malloc(sizeof(contabancaria));
	srand(time(NULL));
	
	conta.Saldo = 0;
		
	conta.chave = rand() % 10000;
	printf("Sua chave numérica é: %d\n")
		  ("Guarde sua senha !!!", conta.chave);
	
	printf("Informe seu nome completo: ");
	scanf("%s", conta.Cliente);
	
	printf("Crie sua senha: ");
	scanf("%s", conta.senha);
	
	
	return conta;
}

int main(){
	
	return 0;
}
