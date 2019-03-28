#include <stdio.h>

enum baralho{
	espada = 0,
	ouro = 10,
	copas = 20,
	paus = 3
}carta;


int main(){
	carta = ouro;
	printf("Tamanho da variavel enum carta = %d bytes"
		   ", valor: %d", sizeof(carta), carta);
	return 0;		
}
