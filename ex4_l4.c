#include <stdio.h>
#include <stdlib.h>
float inss(float sal)
{
	
	if(sal >= 1751.81)
	{
		sal = sal - sal*0.08;
	}
	else if(sal > 1751.81 && sal <= 2919.72)
	{ 
		sal = sal - sal*0.09;
	}
	else if(sal > 2919.72)
	{
		sal = sal - sal*0.11;
	}
	return (sal);

}
int main()
{
	int i=1;
	float salario=0, depois=0;
	do
	{
		printf("Entre o seu salario usando \'.\' para separar reais de centavos \n");
		scanf("%f", &salario);
		depois = inss(salario);
		printf("Seu salario apos os descontos sera de R$%.2f \n", depois);
		printf("Deseja fazer mais alguma conta ? \n [1]Sim [0]Nao \n");
		scanf("%d", &i);
	}while(i==1);

	return 0;
}
