#include <stdio.h>
#include <stdlib.h>
float limpa(float pago[5][100], float dinhe[1000])
{
	int i=0, j=0, y=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<100;j++)
		{
			pago[i][j] = 0;
		}
		
	}
	for(y=0;y<1000;y++)
	{
		dinhe[y] = 0;
	}
}
int main()
{
	int i=1, j=1, y=0, k=1, m=0;
	float pague[5][100], money[1000];
	limpa(pague, money);
	do
	{
		printf("Informe seu numero de manicura \n");
		scanf("%d", &i);
		do
		{
			printf("Ola manicure %d entre o serviço prestado \n", i);
			scanf("%f", &pague[i][j]);
			printf("Deseja entrar mais algum serviço ? \n [1]Sim [2]Não \n");
			scanf("%d", &y);
			if(y==1)
			{
				j++;
				k++;
			}
			else
			{
				j=0;
			}
		}while(j!=0);
		printf("Deseja entrar mais alguma manicuri ? [1]Sim [2]Não \n");
		scanf("%d", &y);
		if(y=1)
		{
			printf("\n");
		}
		else
		{
			i=0;
		}
	}while(i!=0);
	for(i=0;i<5;i++)
	{
		for(j=0;j<k;j++)
		{
			if(pague[i][j]==1)
			{
				money[i] = money[i] + 21.00;
			}
			else if(pague[i][j]==2)
			{
				money[i] = money[i] + 35.00;
			}
			else if(pague[i][j]=3)
			{
				money[i] = money[i] + 80.00;
			}
			else
			{
				printf("\n");
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("O salario da manicuri %d sera de %.2f \n", i, money[i]*0.5);
	}
	return 0;
}
