#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a=10, b = 10;
	unsigned char c, d, e;
	
	c = (a==b);
	d = (a==c);
	e = (a==c || a==b);
	
	printf("O valor de c: %d\n", c);
	printf("O valor de d: %d\n", d);
	printf("O valor de e: %d\n", e);
	
	return 0;

}
