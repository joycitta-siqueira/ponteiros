/*
Desenvolva um programa em C que contenha um vetor contendo 5 elementos inteiros. 
Utilizando apenas nota��o de ponteiros, leia esse vetor do teclado e imprima o endere�o 
das posi��es contendo valores pares.
*/
#include<stdio.h>
int main(){
	int vet[5], i;
	for(i=0;i<5;i++){
      	printf("Digite o valor");
        scanf("%d", vet+i);
	}
	for(i=0;i<5;i++){
		if(*(vet+i)%2==0)
      	printf("%p\n", (vet+i));
	}
}
