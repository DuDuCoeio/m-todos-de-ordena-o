#include <stdio.h>
#include <stdlib.h>
#define N 9
void insertion(int *lista, int tamanho){ //lista=vetor a ser ordenado , tamanho = n° de itens do vetor 
	int i; //controle do laço principal
	int j; //controle do laço interno
	int aux; //variavel que vai auxiliar nas trocas / item comparado 
		for(i=0; i<tamanho-1; i++)// sempre até o penultimo
		{  
			if(lista[i]>lista[i+1])// faz as comparações como o bubble 
			{ 
				aux			=lista[i+1];
				lista[i+1]	=lista[i];
				lista[i]	=aux;
				j=i-1;	
				while(j>=0){
					if(aux<lista[j]){//compara com o elemento anterior
						lista[j+1]	=lista[j];
						lista[j]	=aux;
					}else{
					  break;
					}
				j=j-1;	
			}	
		}
	}	
}
int lista[9]={4,9,5,6,7,8,3,1,2};

int main() {
	int k;
	printf("lista original: ");
	for(k=0; k<N; k++){
		printf("%d ",lista[k]); 	
	}
	
	insertion(lista,N);
	
	printf("\nlista ordenada: ");
	for(k=0; k<N; k++){
		printf("%d ",lista[k]);	
	}

}



