#include <stdio.h>
#include <stdlib.h>

typedef struct dado_funcionario
{
	char nome[30];
	int cod_ma;
	int cod_cp;
	int num_dp;
	float salario;
} dados;
dados dado[30]; 
void limpar()
{
	int i, y;
	for(i=0;i<30;i++)
	{
		for(y=0;y<30;y++)
		{
			dado[i].nome[i] = 0;
		}
		dado[i].cod_ma =  0;
		dado[i].cod_cp =  0;
		dado[i].num_dp =  0;
		dado[i].salario = 0; 
	}
}
void cadastrar(int z)
{
	int i;
	i = z;
	fflush(stdin);
	printf("Entre o nome do funcionario \n");
	scanf("%s",dado[i].nome);
	printf("Entre o codigo de matricula do funcionario \n");
	scanf("%d", &dado[i].cod_ma);
	printf("Entre o cargo profissional \n");
	scanf("%d", &dado[i].cod_cp);
	printf("Entre o numero de dependentes \n");
	scanf("%d", &dado[i].num_dp);
	printf("Entre o salario \n caso use centavos separe usando \'.\' \n");
	scanf("%f", &dado[i].salario);
}
void imprime(int z)
{
	int i;
	for(i=0;i<z;i++)
	{
		printf("===========informando_dados====================\n");
		printf("Nome: \t %s \n", dado[i].nome);
		printf("Numero de matricula \t \t %d \n", dado[i].cod_ma);
		printf("Numero do cargo profissional \t %d \n", dado[i].cod_cp);
		printf("Numero de dependetes \t \t %d \n", dado[i].num_dp);
		printf("O valor do salario \t \t R$%.2f \n", dado[i].salario);
		printf("===============================================\n");
	}
}
int main()
{
	int i,y,z=0;
	limpar();
	for(y=0;y<30;y++)
	{
		printf("Escolha uma das opções \n [1]Cadastrar [2]Imprimir \n");
		scanf("%d", &i);
		switch(i)
		{
			case 1:
				cadastrar(z);
				z++;
				break;
			case 2:
				imprime(z);
				break;
			default :
				printf("Opção invalida \n");
		}	
		printf("Deseja continuar ? \n [1]Sim [0]Não \n");
		scanf("%d", &i);
		if(i==0)
		{
			return 0;
		}
	}
}
