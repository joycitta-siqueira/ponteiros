#include<stdio.h>
main(){
	int x, y;
	int *px;
	y=10;
	
	printf("Digite um valor inteiro:\n");
	scanf("%i", &x);
	px = &x;
	
	printf("Valor de x = %i\n\n", x);
	printf("Valor de x = %i\n\n", *px);
	printf("Endereco de x = %x\n", &x);
	printf("Endereco de px = %x\n", px);	
}
