#include <stdio.h>

void func(int a){
	a=20;
	printf("%d",a);
}

void func2(int *a){
	*a = 20;
}

int main(){
	
	int a;
	a=10;
	
	func(a);
	printf("%d",a);
	func2(&a);
	printf("%d",a);
	
	return 0;
}
