#include <stdio.h>
#include <stdlib.h>
#define MAX 5

//inserir elemento em uma lista ordenada
void inserir_ordenado(int lista[], int *tam, int num){
	int i,j;
	
	//encontrar a posição pra inserção 
	for(i=0;i<*tam;i++){
		if(num < lista[i]){
			//move os maiores pra direita
			for(j=*tam;j>i;j--){
				lista[j]=lista[j-1];
			}
			break;
		}	
	}	
	//inseri no lugar correto
	lista[i]=num;
	(*tam)++;
}

int main(){
int lista[MAX];
int tam=0;
	
	inserir_ordenado(lista,&tam,10);
	inserir_ordenado(lista,&tam,6);
	inserir_ordenado(lista,&tam,9);
	inserir_ordenado(lista,&tam,4);
	inserir_ordenado(lista,&tam,8);
	
	
	printf("sua lista: ");
	for(int i=0; i<tam; i++){
		printf("\n%d",lista[i]);
	}
	
	

return 0;
}


















