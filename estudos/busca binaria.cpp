#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int busca_bin(int v[], int tam, int num);

int main(){
	int v[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int tam=sizeof(v) / sizeof(v[0]);
	int num;

	printf("fala teu numero meu mano: ");
	scanf("%d",&num);

	int resultado = busca_bin(v,tam,num);
	
	if(resultado != -1){
		printf("o numero que deseja esta em: %d",resultado);
	}else{
		printf("o numero desejado nao foi encontrado");
	}
	
	return 0;
}


int busca_bin(int v[], int tam, int num){
	
	int i=0; // inicio do vetor
	int f=tam -1 ; //fim do vetor 
	

	while (i <= f ){
		
		int c =i+(f-i)/2;//c = centro do vetor
		
		//se o elemento estiver no meio moxtra a posição panoix
		if(v[c]==num){
			return c;
		}
		
		//se o elemento buscado for maior ignore a direita
		if(v[c]>num){
			f=c-1;
		}
		
		//se o elemento for maior ignore a esquerda
		else{
			i = c+1;
		}
		
		//se n tiver na lista volte o -1				
	}
	return -1;
}
	
	
	
	
	
	
	
	
	
