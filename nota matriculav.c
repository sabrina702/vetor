#include <stdio.h>

int main(){
	float nota[30];
	int n,i,matricula[30],mbusca;
	printf("Quantidade de alunos:");
	scanf("%d",&n);
	printf("Entre com a matricula e nota de cada aluno\n");
	for(i=0;i<n;i++){
		printf("Matricula[%d]:",i);
		scanf("%d",&matricula[i]);
		printf("Nota[%d]:",i);
		scanf("%f",&nota[i]);
	}// fim for
	printf("*** RELATORIO DE NOTAS ***\n");
	for(i=0;i<n;i++){
		printf("Matricula[%d]:\t%d ",i,matricula[i]);
		printf("Nota[%d]:\t%.2f\n",i,nota[i]);
	}// fim for
	
	printf("*** BUSCA DE NOTAS ***\n");
	do{
		printf("Matricula para busca:");
		scanf("%d",&mbusca);
		for(i=0;i<n;i++){
			if(mbusca==matricula[i])
				printf("Nota[%d]:\t%.2f\n",i,nota[i]);
		}// fim for
	
	}while(1);
	return 0;
}
