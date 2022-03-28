#include <stdio.h>
#include <stdlib.h>

int main()
{
	char nome[10];

	printf("Qual é o seu nome?\n\n");
	scanf("%s", nome);

	printf("Seja bem vindo, %s!\nEste"
		" programa segue o modelo "
		"sequencial.\n\n", nome);

	printf("Qual é o seu nome?\n\n");
	scanf("%s", nome);

	printf("Seja bem vindo, %s!\nEste"
		" programa segue o modelo "
		"sequencial.\n\n", nome);

	return 0;
}