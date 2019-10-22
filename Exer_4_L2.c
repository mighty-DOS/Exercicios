#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0, j=0, idade=0, man=0;
	float med;
	do
	{
		man = idade;
		printf("Qual sua idade ? \n");
		scanf("%d", &idade);
		idade = man + idade;
		j++;
		printf("Deseja entrar mais idades ? \n [0]Sim \n [1]Nao \n");
		scanf("%d", &i);
	}while(i==0);
	med = idade/j;
	printf("%d pessoas informaram sua idade e a media foi de %.0f ", j, med);
	return 0;
}
