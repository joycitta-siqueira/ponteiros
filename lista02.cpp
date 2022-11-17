/*
Crie um programa em C que receba tr�s n�meros do usu�rio depois crie uma fun��o que receba 
os 3 n�meros como par�metros: A, B e C. Ordene de tal forma que, ao final da fun��o, A 
contenha o menor n�mero e C o maior. Imprima os tr�s n�meros. Obs: Utilize ponteiro 
para solucionar o problema.
*/
#include<stdio.h>
void ordenar (int *pMenor, int *pCentro, int *pMaior);
int main(){
     int menor, maior, centro;
     int *pMenor, *pMaior, *pCentro;
	pMenor = &menor;
	pMaior = &maior;
	pCentro = &centro;
	
	 ordenar(pMenor, pCentro, pMaior); //chamo a fun��o ordenar que passa os 3 ponteiros como par�metro
	 printf("A = %d - B = %d - C = %d\n", *pMenor, *pCentro, *pMaior); //imprimir o conte�do da vari�vel apontada pelo ponteiro
}
void ordenar (int *pMenor, int *pCentro, int *pMaior){//retorno por refer�ncia, usando ponteiros, sendo assim, n�o precisamos do return
 	int a, b, c; 
 	printf("Digite os valores de a, b, c");
	 scanf("%d", &a); //recebimento dos valores (normal)
	 scanf("%d", &b);
	 scanf("%d", &c);
	 
	 if (a <= b && b <= c){
		*pMenor = a;
      	*pCentro = b;
      	*pMaior = c;	
	}
	else if (a <= c && c <= b){
		*pMenor = a;
      	*pCentro = c;
      	*pMaior = b;
	}
  	else if (b <= a && a <= c){
  		*pMenor = b;
      	*pCentro = a;
     	*pMaior = c;
    }
  else if (b <= c && c <= a){
      *pMenor = b;
      *pCentro = c;
      *pMaior = a;
    }
  else if (c <= a && a <= b){
	    *pMenor = c;
	    *pCentro = a;
	    *pMaior = b;
    }
  else{
	    *pMenor = c;
	    *pCentro = b;
	    *pMaior = a;
    }
    //retorna tr�s valores por ponteiros
}
		

