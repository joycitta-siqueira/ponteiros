#include<stdio.h>
main(){
	char vetor[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("Digite o valor %i:\n", i+1);
		scanf("%c", (vetor+i));
	}
	
	
	for(i=0;i<5;i++){
		printf("%d\n",(vetor+i));
	}
	printf("\n\n");
}
