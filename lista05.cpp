/*
Desenvolva um programa que declare um vetor de inteiros e um ponteiro para inteiros. 
Associe o ponteiro ao vetor. Agora, some mais um (+1) a cada posição do vetor usando 
o ponteiro (use *).
*/
#include<stdio.h>
int main(){
	int vInteiros[5], *pInteiros, i;
	pInteiros = vInteiros;
	for(i=0;i<5;i++){
      	printf("Digite o valor");
        scanf("%d", pInteiros+i);
	}
	printf("\n");
	for(i=0;i<5;i++){
      	printf("%d\t", *(pInteiros+i));
	}
	printf("\n");
	for(i=0;i<5;i++){
      	printf("%d\t", *(vInteiros+i));
	}
	printf("\n");
	for(i=0;i<5;i++){
      	printf("%d\t", vInteiros[i]);
	}
}
