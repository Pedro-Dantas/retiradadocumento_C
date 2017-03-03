#include <stdio.h>
#include <stdlib.h>

//Estudo de C, validação de retirada de documento.

int main(int argc, char *argv[]) {
	
	int idade;
	
	printf("RETIRADA DE TITULO DE ELEITOR\n");
	
	printf("\nDigite sua idade: ");
	scanf("%d", &idade);
	
	printf("\nIdade: %d\n", idade);
	
	if(idade<16){
		
		printf("\nNao eleitor.");
	
	}
	
	else if((idade>=18) && (idade<=65)){
		
		printf("\nEleitor obrigatorio.");
		
	} 
	
	else if(((idade>=16) && (idade<18)) || (idade>65)){

		printf("\nEleitor facultativo");
			
			
	}
	
	return 0;
}


