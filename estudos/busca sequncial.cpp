#include <stdio.h>
#include <stdlib.h>

int busca(int *vet, int tam, int num);

int main() {
	
int vet[]={5,4,30,50,66,};
int pos;


 busca(vet, 5, 4);
}

int busca(int *vet, int tam, int num){
	int i;
	for(i=0; i<tam; i++){
		if(vet[i]==num){
		printf("a posicao de seu numero esta localizada em: %d",i) ;
		}			
	}
}

