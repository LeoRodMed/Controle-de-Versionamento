#include<stdio.h>
#include<stdlib.h>

// Este programam eh para parabenizar a Juliana Bueno pelo seu dia das maes.

char nome[10];
int filhos;
int idade1, idade2, idade3, condicao;

//Início
char main(){
	
	
	printf("\nOla, muito feliz em conhece-la!\n"); //Apresentação
	
	printf("\nQual eh o seu nome?:"); //Essa linha pergunta o nome  
	scanf ("%s", &nome); // Essa linha lê nome e armazena na variável nome.
	
	printf("\nQuantos anos de idade voce tem?:\n"); // Essa linha pergunta a idade 
	scanf ("%d", &idade1);	// Essa linha lê a idade e amazena na variável idade1.
	
	printf("\nQuantos filhos(as) voce tem?:\n"); // Essa linha pergunta quantidade de filhos.
	scanf ("%d", &filhos); // Essa lina lê quantidade de filhos e armazena na variável filhos.
	
	printf("\nQual a idade dos seus filhos(as)?:\n"); // Essa linha pergunta a idade dos filhos.
	scanf ("%d", &idade2); // Essa linha lê idade e armazena na variável idade2.
	scanf ("%d", &idade3); // Essa linha lê idade e armazena na variável idade2.
	
	printf("\nVoce eh feliz em ser mae\n"); // Essa linha faz uma pergunta.
	printf("\nSe sim digite 0, Se nao digite 1: \n"); // Essa linha explica as condições.
	scanf ("\n%d", &condicao); // Essa linha  lê resposta e armazena na variável condicao.
	
	if(condicao == 1) // Essa condição será executada se a resposta for sim.
		{
				printf("\nParabens: %s\n", nome); // Mostrar string da variável nome.
				printf("\nVoce tem %d anos de idade, es linda\n", idade1); // Mostrar inteiro da variável idade1
				printf("\nTem %d filhos(as) abencoados. Um tem %d anos de idade, e o outro tem %d de idade.\n", filhos, idade2, idade3); // Mostrar inteiro das variáveis filhos, idade1, idade2.
				printf("\nParabens, HOJE eh o seu dia, dia das maes. Jesus Cristo te ama\n"); // Essa linha mostra parabenização pelo dia das maes.	
    	} 	
	else if(condicao == 0) // Essa condição será executada se a resposta for não.

	 	printf("\nSer mae eh um presente de DEUS, voce deveria ser feliz. Que DEUS te conceda muita graca e paz para ser feliz como mae.\n"); // Essa mostra resultado da condição.
	
	
	return (0);
}
