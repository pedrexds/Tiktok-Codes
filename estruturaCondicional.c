//Primeiro exemplo abordado no vídeo
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade;

	printf("Qual é a sua idade?\n");
	scanf("%d", &idade);

	if(idade >= 18)
	{
		printf("\nVocê já é maior de idade.\n");
	}
	else
	{
		printf("\nVocê é menor de idade\n");
	}

	return 0;
}

//Segundo exemplo abordado no vídeo
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade;

	printf("Qual é a sua idade?\n");
	scanf("%d", &idade);

	if(idade >= 16)
	{
		if(idade >= 18 && idade < 70)
		{
			printf("\nSeu voto é obrigatório"
				" nessas eleições.\n");
		}
		else
		{
			printf("\nSeu voto é facultativo"
				" nessas eleições.\n");
		}
	}
	else
	{
		printf("\nVocê ainda não tem idade"
			" para votar.\n");
	}

	return 0;
}
