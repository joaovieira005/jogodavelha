		#include <stdio.h>
		#include <stdlib.h>
		
		int main() {
		
		char player [256];
		char player2 [256];
		char nome [256];
		char nome2 [256];
		
		printf("por favor informe o nome do primeiro player: \n");
		scanf("%s",&nome);
		
		printf("\npor favor informe o nome do segundo player: \n");
		scanf("%s",&nome2);
		
		
		printf("\n%s Sua Vez \n",nome);	
		scanf("%s",&player);
		
		printf("\n%s Sua Vez \n",nome2);	
		scanf("%s",&player2);
		
		printf("\n aguarde estamos calculando o resultado... \n");
			
				if(strcmp(player,"papel") == 0) {
						
						if(strcmp(player2,"papel") == 0) {
							printf("\n Resultado: Os Player %s,%s Empataram !\n",nome,nome2);
						} else if(strcmp(player2, "tesoura") == 0) {	
							printf("\n Resultado: %s ganhou, porque tesoura corta papel \n", nome2);
						} else if(strcmp(player2, "pedra") == 0 ) {	
							printf(" \n Resultado: %s Perdeu, porque papel embrulha pedra \n",nome2);
						} else {
							printf("\n %s jogou uma informacao invalida \n", nome2);
						}
				
				} else if(strcmp(player, "tesoura") == 0) {	
				
						if(strcmp(player2,"tesoura") == 0) {
							printf("\n Resultado: Os Player %s,%s Empataram !\n",nome,nome2);
						} else if(strcmp(player2, "papel") == 0) {	
							printf("\n Resultado: %s ganhou, porque tesoura corta papel \n", nome);
						} else if(strcmp(player2, "pedra") == 0 ) {	
							printf("\n Resultado: %s ganhou, porque pedra quebra tesoura \n",nome2);
						} else {
							printf("\n %s jogou uma informacao invalida \n", nome2);
						}
				
				} else if(strcmp(player, "pedra") == 0 ) {	
						if(strcmp(player2,"pedra") == 0) {
							printf("\n Resultado: Os Player %s,%s Empataram !\n",nome,nome2);
						} else if(strcmp(player2, "papel") == 0) {	
							printf("\n Resultado: %s ganhou, porque papel embrulha pedra \n",nome2);
						} else if(strcmp(player2, "tesoura") == 0 ) {	
							printf("\n Resultado: s% ganhou, porque pedra quebra tesoura \n",nome);
						} else {
							printf("\n %s jogou uma informacao invalida \n", nome2);
						}
						
				} else {
					printf("\n %s jogou uma informacao invalida \n", nome);
				}
				
		return 0;
		}

