#include <stdio.h>
#include <stdlib.h>
#define TAM 5
/*bubble sort */

int main() {
	int num[TAM];
	int i, aux, cont;
	
	
	printf("insira 5 numeros : ");
	for(i=0;i<TAM;i++){
		scanf("%d",&num[i]);
	}
	
	printf("ordem normal,sem ordenar : ");
	
	for(i=0;i<TAM;i++){
		printf("\n>%d",num[i]);
	}
	
	for(cont=1; cont<TAM; cont++){ 
	 for(i=0; i<TAM-1; i++){ //SEMPRE PEGAR ATÉ O PENULTIMO (TAM-1) 
	 	 if(num[i] > num[i+1]){
	 		aux      = num[i];
	 		num[i]   = num[i+1];
	 		num[i+1] = aux;
		 }
	 }	
	}
	
	printf("mostrando ordenados pela bolha : \n");
	for(i=0; i<TAM; i++){
		printf("%d", num[i]);
	}
	printf("\n");
	return 0;
}
