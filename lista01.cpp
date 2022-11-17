/*
Faça um programa em C que armazene em um vetor 3 valores, 
e imprima os valores utilizando notação de ponteiro.
*/
#include<stdio.h>
int main(){
     int valores[3], i;
    for(i=0;i<3;i++){
      	printf("Digite o valor");
        scanf("%d", valores+i); 
	}
	for(i=0;i<3;i++){
      	printf("%d\n", *(valores+i));
	}
   
}
