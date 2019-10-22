#include <stdio.h>
#include <stdlib.h>

void limpa(float nodes[15][5], float meds[100])
{
	int i, j;
	for(i=0;i<15;i++)
	{
		for(j=0;j<15;j++)
		{
			nodes[i][j] = 0;
			meds[i] = 0;
		}
	}
}
int main()
{
	int i=0, j=0;
	float notas[15][5], media[100], m=0;
	limpa(notas, media);
	for(i=0;i<15;i++)
	{
		for(j=0;j<5;j++)
		{
			m = notas[i][j];
			printf("Entre a nota da prova %d do aluno %d \n", j+1, i+1);
			scaf("%f", &notas[i][j]);
			media[i] = media[i] + notas[i][j] + m;
		}
	}
	for(i=0;i<15;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("A nota do aluno %d eh %f \n",i+1, notas[i][j]);
		}
	}
	for(i=0;i<15;i++)
	{
		media[i] = media[i]/5;
		if(media[i] >= 7)
		{
			printf("Aluno %d APROVADO com media %f \n", i+1, media[i]);
		}
		else
		{
			printf("Aluno %d REPROVADO com media %f \n", i+1, media[i]);
		}
	}
	
	return 0;
}
