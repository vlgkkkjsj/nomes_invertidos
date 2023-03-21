#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<iostream>
#include<locale.h>
#define TAM 7

main(void){
	
		setlocale(LC_ALL,"Portuguese");
		
		int i=0;
		char nomes[7][20];
		
	for(i=0;i<TAM;i++)
	{
		
		printf("digite um nome: ");
		scanf("%s",&nomes[i]);
		system("clear||cls");
	}
		
	printf("\n nomes em ordem:");	
	for(i=0;i<TAM;i++)
	{
		printf(" %s,",nomes[i]);
	}
	
	printf("\n");
	
	printf("\n nomes ao contrario:");
	for (i<TAM; i>=0;i--)
	{
		printf( "%s, ",nomes[i]);
	}
}

