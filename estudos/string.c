#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20
#define T 3
/*
vetor (){

//j1
int main(){
	int v[5]={50,40,30,20,10};
	float m;
	
	m=(v[0]+v[1]+v[2]+v[3]+v[4] ) / 5 ;
	
	printf("resultado : %f",m);

return 0;
}

//j2
int main(){
	int v[5];
	float m;
	
	v[0] = 10;
	v[1] = 20;
	v[2] = 30;
	v[3] = 40;
	v[4] = 50;
	
	m=(v[0]+v[1]+v[2]+v[3]+v[4] ) / 5 ;
	
	printf("resultado : %f",m);

return 0;
}

//j3
int main(){
	
	int v[5]={50,40,30,20,10};
	int i;
	float s = 0;
	
	for(i=0;i<5;i++){
		s += v[i];
	}
	
	printf("resultado: %f\n",s/5);
	
	return 0;
}

}
*/

/*
strings main(){

int main (){

//strcpy	
printf("strcpy abaixo: \n\n");	
	
	char j1[N] ={"deu par"};
	char j2[N]={"deu impar"};
	
	printf("antes do strcpy: \n");
	 puts(j1);
	 puts(j2);
	
	strcpy(j2,j1);
	
	printf("depois do strcpy: \n");
	 puts(j1);
	 puts(j2);	
	
//strcat
printf("\n\n\n");
printf("strcat abaixo: \n\n");
	
	char nome[N] ={"Miguel "};
	char sobrenome[N]={"O'hara"};
	
	printf("antes do strcat: \n");
	 puts(nome);
	 puts(sobrenome);
	
	strcat(nome,sobrenome);
	
	printf("depois do strcat: \n");
	 puts(nome);
	 
//strlen
printf("\n\n\n");
printf("strlen abaixo: \n\n");

char s[N];
int i;

printf("coe cria , na paz ? \n");
gets(s);
i = strlen(s);

printf("tamanho da tua paz :%d\n\n",i);
printf("tua resposta :");
	for(i=0;i<strlen(s);i++){
		printf("%c",s[i]);
	}

//strcmp
printf("\n\n\n");
printf("strcmp abaixo: \n\n");

	char SenhaUser[N]={"senhadif"};
	char Senhacmp[N];	
	int ok;
	
	printf("digite sua senha :");
	gets(Senhacmp);
	ok= strcmp(SenhaUser,Senhacmp);
	
	if (ok == 0)
	 printf("senha certa !");
	else
	 printf("senha errada tente novamente !");
	
}
}
*/


/*
matriz (){
int main(){
	
	int mat [3][3]={ {1,2,3}
					,{4,5,6}
					,{7,8,9}};
	int i,j;

	
	printf("imprimindo a matriz :");
	for(i=0;i<3;i++){
		printf("\n");
	 for(j=0;j<3;j++){	
		printf("  %d",mat[i][j]);
	}
}	
	
	return 0;
}
}
*/


/*
struct (){}
*/

struct infos{
	char nome [N];
	char curso[N];
	int  idade;	
};

typedef struct infos infos;

int main(){

infos listaAlunos[T];	 
int i;	 

     for(i=0;i<T;i++){
     	printf("insira seus dados abaixo : ");
     	
     	puts("\nNome: \n");
     	 gets(listaAlunos[i].nome);
     	  fflush(stdin);
     	
		printf("Idade: \n");
     	 scanf("%d",&listaAlunos[i].idade);
     	  fflush(stdin);
     
	 	puts("Curso: ");
     	 gets(listaAlunos[i].curso);
     	  fflush(stdin);
}	 
	 system("cls");
	 printf("aki estao suas informacoes : \n");
	
	for(i=0;i<T;i++){	 
	 printf("\n\nnome  :%s",listaAlunos[i].nome);
	 printf("\n\nidade :%d",listaAlunos[i].idade);
	 printf("\n\ncurso :%s",listaAlunos[i].curso);
}
	 
return 0;
}







