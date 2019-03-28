#include <stdio.h>

typedef struct{
	int NumConta;
	char Cliente[100];
	float Saldo;
	int Senha;
	char Chave;
}contabancaria;

contabancaria lista_contas[20]; //VARIAVEL GLOBAL PARA ARMAZENAR AS CONTAS

int criaID(){					//GERADOR DE ID PARA NUMERO DA CONTA
	int id, nContas, i;
	contabancaria conta;
	
	for(i=0; i<sizeof(lista_contas);i++){
		conta = lista_contas[i];
		if(conta.NumConta!=){
			
		}
	}
	
	return id;
}
contabancaria CriaConta(){
	contabancaria conta;
	printf("Informe seu nome completo: \n");
	scanf("%c", &conta.Cliente);
	printf("Informe sua senha numerica: \n");
	scanf("%d", &conta.Senha);
}

int main(){
	
	return 0;
}
