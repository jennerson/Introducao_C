/*Implementar as seguintes funções:

* strcpy - copia string para outro array char
* strcmp - comparação entre duas strings
* strcat - concatenação de duas strings
* strlen - retrona tamanho da string.
*/
#include <Jstring.h>


char* copystr(char* strdest, char* strfnt){
	int i=0;
	
	while(!0){
		if(strfnt[i] == '\0'){
			break;
		}
		strdest[i] = strfnt[i];
		i++;
	}
	return strdest;
}

short int compstr(char* str1, char* str2){
	int i=0;
	
	while(1){
		if(str1[i] == str2[i]){
        	i++;
        	if(i == sizeof(str1)){
        		return 0;
			} 
       }
       else{
    		return 1;
       }
	}
}

char* catstr(char* str1, char* str2){
	int i=0, j=0, aux=0;
	char* newstr = str1;
	
	while(str1[i] != '\0'){
		i++;
	}
	
	for(aux=i+1; str2[j] != '\0'; aux++){
		newstr[aux] = str2[j];
		j++;
	}
	return newstr;
}

short int (char* str){
	int i=0;
	
	while(str[i] != '\0'){
		i++;
	}
	return i;
}

