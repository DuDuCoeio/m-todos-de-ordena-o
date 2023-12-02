#include <stdio.h>
#include <stdlib.h>
#define N 10

int divisao(int *vet, int esq, int dir){
	int aux; //trocar posições 
	int cont = esq;
	int i;
	
	for(i=esq+1; i<=dir; i++){	
		if(vet[i] < vet[esq]){
			cont++;		
			aux			=vet[i];
			vet[i]		=vet[cont];
			vet[cont]	=aux;
		}	
	}
	aux			=vet[esq];
	vet[esq]	=vet[cont];
	vet[cont]	=aux;	

	return cont;	
}


void quick(int *vet, int esq, int dir){
	int pos; // posição na qual sera feita a troca
	if(esq < dir){
		pos = divisao(vet, esq, dir);
		quick(vet, esq, pos-1);
		quick(vet, pos+1, dir);
	}	
}



int main() {
int i;
int vet[10]={10,20,50,30,40,70,60,80,100,90};
	
	printf("lista original: ");
	for(i=0; i<N; i++){
		printf("%d ",vet[i]); 	
	}
	
	quick(vet,0,N-1);//1-uq quer ordenar ,2-onde começa,3-tamanho 
	
	printf("\nlista ordenada: ");
	for(i=0; i<N; i++){
		printf("%d ",vet[i]); 	
	}
	
	
return 0;
}

