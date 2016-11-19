#include <stdio.h>
#include "suma.h"

int main(){
	int a,b,c;
	a=5;
	b=5;
	c=5;
	a = c+b;
	c = suma(a,c);
	printf("El valor de c deberia ser 15 y en realidad es: %d",c);
	return 0;
}
