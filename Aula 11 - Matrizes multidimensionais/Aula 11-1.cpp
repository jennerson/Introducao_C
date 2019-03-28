#include<stdio.h>

int criaMatriz(int l, int c){
	
	int i, j, matriz[l][c];

	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("Informe o valor da linha %d e coluna %d : \n", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
	return matriz;	
}

int exibeMatriz(int** matriz){
	
	int i, j, l=(sizeof(matriz)/4), c=(sizeof(matriz[0])/4);
	for(i=0;i<l;i++){
		printf("\n");
		for(j=0;j<c;j++){
			printf(" %d  ", matriz[i][j]);
		}
	}
	
}

int somaMatriz(int* matriz){
	
	int i, j, soma=0, l=(sizeof(matriz)/4), c=(sizeof(matriz[0])/4);
	
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			if(matriz[i][j] >=0){
				soma=soma+matriz[i][j];
			}
		}
	}
	printf("\n A soma dos valores positivos e : %d ", soma);
	
}

int main(){	
	
	int matriz[][] = criaMatriz(3,4);
	exibeMatriz(matriz);
	somaMatriz(matriz);
	
	return 0;
}
