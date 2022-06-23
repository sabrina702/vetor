#include <stdio.h>

int main(){
	int vet[10],i,n,par=0;
	printf("Quantidade de valores do vetor: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("vetor[%d]: ",i);
		scanf("%d",&vet[i]);
	}
	printf("* Dados do vetor *\n");
	for(i=0;i<n;i++){
		printf(" %d |",vet[i]);
		if(vet[i]%2==0){
			par++;
		}
	}
	printf("\nQuantidade de numeros pares: %d",par);
	return 0;
}
