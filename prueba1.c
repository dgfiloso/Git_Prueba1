#include <stdio.h>
#include "suma.h"

int main(){
	int a,b,c;
	a=3;
	b=3;
	c=7;
	a = c+b;
	c = suma(a,c);
	printf("El valor de c deberia ser 17 y es: %d",c);
	return 0;
}