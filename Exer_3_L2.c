#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, tipo;
	float peso=0, pesoT=0, preco=0, precoT=0;
	for(i=0;i<38;i++)
	{
		printf("Informe o tipo de linguica \n [1]Tipo 1 \n [2]Tipo 2 \n [3]Tipo 3 \n");
		scanf("%d", &tipo);
		printf("Informe o peso em gramas \n");
		scanf("%f", &peso);
		switch(tipo)
		{
			case 1:
				preco = 19.90;
				printf("O preco a se pagar eh R$%.2f \n", preco*(peso*0.001));
				precoT = precoT + preco;
				pesoT = pesoT + peso;
				break;		
			case 2:
				preco = 25.90;
				printf("O preco a se pagar eh R$%.2f \n", preco*(peso*0.001));
				precoT = precoT + preco;
				pesoT = pesoT + peso;
				break;
			case 3:
				preco = 29.90;
				printf("O preco a se pagar eh R$%.2f \n", preco*(peso*0.001));
				precoT = precoT + preco;
				pesoT = pesoT + peso;
				break;
			default:
				printf("Tipo de linguica invalida \n");
		}
	}
	printf("O total de gramas vendidos %.2f g e o total em dinheiro foi R$%.2f \n", pesoT, precoT);
	
	
	
	return 0;
}
