// Pergunta 4 da Terceira Lista de Exercícios Leandro
// Implemente a função strlen de string.h utilizando qualquer estrutura de repetição.
// A função strlen retorna a quantidade de caractere em uma string.
// DICA: A string termina com o caractere especial '\0'.

#include <stdio.h>
#include <string.h>
int main(void)
{
	char nome[20];
	int comprimento;
	
	printf("Entre seu nome: ");
	gets(nome);
	
	int contador = 0;
	
	for (int i = 0; nome[i] != '\0'; i++){
		contador++;
	}
	
	comprimento = contador;
	
	printf ("Seu nome tem  %d caracteres. \n", comprimento);
	
 }
 
