#include <stdio.h>
#include <stdlib.h>
void limpa (int nova[10000],char nove[10000])
{
	int i;
	for(i=0;i<10000;i++)
	{
		nova[i] = 0;
		nove[i] = '0';	
	}	
}
int main()
{
	int i=0, n=0, nota[10000];
	char nome[10000];	
	printf("Entre quantos alunos deseja cadastrar max.:10000 \n");
	scanf("%d", &n);
	limpa(nota, nome);
	for(i=0;i<n;i++)
	{
		printf("Entre a matricula do aluno \n");
		scanf("%d", &nota[i]);
		printf("Entre o nome do aluno \n");
		scanf("%s", &nome[i]);		
	}
	for(i=0;i<n;i++)
	{
		printf("\n Aluno: %s \n Matricula: %d \n", &nome[i], nota[i]);
	}
	return 0;
}
