#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	float preco=0, total=0, man=0;
	for(i=0;i<10;i++)
	{
		man = preco;
		printf("Entre o valor do produto \n");
		scanf("%f", &preco);
		total = preco + man;
	}
	printf("Valor total sem impostos R$%.2f valor total com impostos R$%.2f \n", total, total*1.078);
	
	
	return 0;
}

