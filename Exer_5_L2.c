#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0;
	float peso, pesoA=0, carga=0;
	printf("Informe a capacidade de carregamento do porto em toneladas \n");
	scanf("%f", &pesoA);
	do
	{
		printf("Informe o peso de carregamento suportado pelo navio em toneladas \n");
		scanf("%f", &peso);
		if(peso == pesoA)
		{
			printf("Informe a carga a ser entrada em toneladas \n");
			scanf("%f", &carga);
			if(carga > 100)
			{
				printf("Carga maxima excedida \n");
			}
			else
			{
				printf("Navio Pode Atracar \n");
			}
		}
		else
		{
			printf("A carga do navio eh diferente do permitido \n NAVIO RECUSADO \n");
		}
		printf("Deseja ver verificar outro navio \n [0]Sim \n [1]Nao \n");
		scanf("%d", &i);
	}while(i==0);
	
	
	return 0;
}
