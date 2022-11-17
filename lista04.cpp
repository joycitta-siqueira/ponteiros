/*
Crie uma função que aceite como parâmetro um vetor de inteiros com N valores, 
e determina o maior elemento do vetor e o número de vezes que este elemento ocorreu 
no vetor. Por exemplo, para um vetor com os seguintes elementos: 
3, 5, 12, 6, 7, 27, 9, 16, 27, a função deve retorna para o programa que a chamou o 
valor 27 e o número 2 (indicando que o número 27 ocorreu 2 vezes). 
A função deve ser do tipo void.
*/
#include<stdio.h>
void maiorNumero(int *vet, int *mValor, int *nVezes);
int main(){
	int vet[9]={3, 5, 12, 6, 7, 27, 9, 16, 27}, maiorValor, numeroVezes, *mValor, *nVezes;
	mValor = &maiorValor;
	nVezes = &numeroVezes;
	maiorNumero(vet, mValor, nVezes);
	printf("Maior valor: %d\nNumero de vezes: %d", *mValor, *nVezes);
}
void maiorNumero(int *vet, int *mValor, int *nVezes){
	int i;
	*mValor=0;
	*nVezes=0;
	for (i=0;i<9;i++){
		if (*(vet+i)>*mValor)
			*mValor = *(vet+i);
	}
	for (i=0;i<9;i++){
		if (*(vet+i)==*mValor)
			(*nVezes)++;	
	}	
}
