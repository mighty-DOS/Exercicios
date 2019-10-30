#include <stdio.h>
#include <stdio.h>
float calcula(int filho, float sal)
{
	if(sal <= 907.77)
	{
		sal = filho*46.54;
		return(sal); 
	}
	else if(sal <= 1364.43 && sal > 907.77)
	{
		sal = filho*32.80;
		return(sal);
	}
	else
	{
		return 0;
	}


}

int main()
{
	int filhos;
	float salario, bonus;
	printf("Entre o numero de dependentes menor de 14 anos \n");
	scanf("%d", &filhos);
	printf("Entre seu salario \n");
	scanf("%f", &salario);
	bonus = calcula(filhos,salario);
	salario = salario + bonus;
	printf("Seu salario + bonus sera de R$%.2f \n", salario);

	return 0;
}  
