#include <stdio.h>
#include <stdlib.h>

int main(){
	float media, nota1, nota2;
	printf("Digite a nota do primeiro semestre: \n");
	scanf("%d", &nota1);
	printf("agora digite a nota do segundo semestre: \n");
	scanf("%d", &nota2);
	media = (nota1 + nota2)/ 2;
	
	if(media >= 7){
		printf("APROVADO!");
	}
	else{	
		if(media <7 || media >=4){
			printf("PROVA SUBSTITUTIVA");
		} else{
			printf("REPROVADO!");
		}
	}
	
}
