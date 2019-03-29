#include <stdio.h>
#include <sdlib.h>

typedef struct{
	int NumConta;
	char Cliente[100];
	float Saldo;
	int Senha;
	char Chave;
}contabancaria;

typedef struct{
	contabancaria* conta;
	Lista* prox;
}Lista;

Lista* CriaLista(){
	return NULL;
}

contabancaria AddConta(){
	contabancaria conta = (contabancaria) malloc(sizeof(contabancaria));
	
	return conta;
}

int main(){
	
	return 0;
}
