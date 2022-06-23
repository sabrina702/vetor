#include <stdio.h>

int main(){
	int i, vet[100], n;
	printf("Qtde de valores no vetor:");
	scanf("%d",&n);
	// lendo dados para o vetor
	for(i=0;i<n;i++){
	   printf("Vetor[%d]:",i);
	   scanf("%d",&vet[i]);
	}   
	// mostrando os dados do vetor
	printf("*** Dados do Vetor ***\n");
	for(i=0;i<n;i++){
	   printf("[%d] %d |",i, vet[i]);
	}  

	return 0;
}
