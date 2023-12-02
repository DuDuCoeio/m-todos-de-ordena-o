#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define T 30


/*
Questão 1 - Crie uma struct chamada "Pessoa" que contenha os seguintes campos: nome, idade e altura. Em seguida,
escreva um programa que declare uma variável do tipo Pessoa, preencha seus campos e imprima os valores

struct pessoa{
	char  nome[T];
	int   idade  ;
	float altura ;
}; 
typedef struct pessoa pessoa;

int main() {
	
	pessoa p ={"edu",19,1.78};

	
	printf("aki estao seus dados : \n");
	printf("nome: %s",p.nome);
	printf("\nidade: %d",p.idade);
	printf("\naltura: %.2f",p.altura);
	return 0;
}
*/

/*
Questão 2 - Crie uma struct chamada "Tipo" que possa armazenar um valor do tipo inteiro, um valor do tipo ponto
flutuante e uma letra. Escreva um programa que demonstre o uso da struct, atribuindo valores de diferentes tipos e
imprimindo-os.


struct tipo{
	int valor_I;
	float valor_F;
	char valor_C[T];
};

typedef struct tipo tipo;

int main(){
	
	tipo t;
	
	printf("=-=-=-= insira valores abaixo =-=-=-=");
	printf("\n um numero inteiro: \n>");
		scanf("%d",&t.valor_I);
	printf("\n um numero real: \n>");
		scanf("%f",&t.valor_F);
		fflush(stdin);
	printf("\n um caracter: \n>");
		gets(t.valor_C);
	system("cls");
	
	printf("=-=-=-= valores abaixo =-=-=-=");
	printf("\n um numero inteiro: \n>%d",t.valor_I);
	printf("\n um numero real: \n>%.2f",t.valor_F);
	printf("\n um caracter: \n>%s",t.valor_C);
return 0;
}
*/

/*
Questão 3 - Crie uma struct chamada "Ponto" que represente um ponto no plano cartesiano com coordenadas x e y.
Em seguida, implemente funções para calcular a distância entre dois pontos e a inclinação da reta que os conecta.
*/


struct ponto{ 
int x;
int y;
};

typedef struct ponto ponto;

int dist (ponto p1, ponto p2);
int incl (ponto p1 ,ponto p2);

int main(){	
	ponto p1={1,2};	
	ponto p2={3,4};
	
	printf("=-=-=-= Resultado abaixo =-=-=-=");
	printf("\n\nDistancia entre os pontos: %d", dist(p1, p2));
	printf("\nInclinacao da reta: %d", incl(p1, p2));
	
	return 0;
}


int dist (ponto p1, ponto p2){
	return sqrt(pow(p2.x -p1.x, 2)+pow(p2.y-p1.y,2));
}

int incl (ponto p1 ,ponto p2){
	if(p1.x == p2.x){
		printf("\ninclinacao indefinida\n");
		return 0;
	}
}			























