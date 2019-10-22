#include <stdio.h>
#include <stdlib.h>

void limpar(char prop[120][120], char bixo[120][120], char espec[120][120])
{
	int i, j;
	for(i=0;i<120;i++)
	{
		for(j=0;j<120;j++)
		{
			prop[i][j]  = "";
			bixo[i][j]  = "";
			espec[i][j] = "";
		}

	}
}
int main()
{
	int i=0, j=1, y=0, k=0;
	char prop[120][120], bixo[120][120], espec[120][120];
	limpar(prop,bixo,espec);
	do
	{
		printf("Entre o numero do animal a ser cadastrado \n");
		scanf("%d", &i);
		do
		{
			printf("Entre o nome do proprietario \n");
			scanf("%s", &prop[i][120]);
			printf("Entre o nome do animal \n");
			scanf("%s", &bixo[i][120]);
			printf("Entre o nome da especie \n");
			scanf("%s", &espec[i][120]);
			y = y + 1;
			j=0;
		}while(j!=0);
		printf("Deseja cadastrar outro animal ? \n [0]sim [1]nao \n");
		scanf("%d", &i);
		k = k + 1;
	}while(i=0);
	for(i=1;i<k;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("O animal %d \n tem como proprietario:%s \n seu npme: %s \n sua especie: %s \n",i , &prop[i][120], &bixo[i][120], &espec[i][120]);
		}		
	}
	
	
	
	return 0;
}
