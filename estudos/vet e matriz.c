#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimeM (int m[][3],int n ){
	int i , j;
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}	
}

void imprimeV (int v[5]){
	int i;
	for(i=0;i<5;i++){
		printf("%d ",v[i]);
	}
}	

int main() {
	int vet[5] = {1,2,3,4,5};

	int mat[3][3] ={{1,2,3}
				   ,{4,5,6}
				   ,{7,8,9}};
				
				   
	puts("imprimindo valores do vetor : ");
	imprimeV(vet);
	
	puts("\nimprimindo valores da matriz : ");
	imprimeM(mat,3);
	
	
	return 0;
}
