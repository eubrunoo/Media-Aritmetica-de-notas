#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	system("color A");
	
	char aluno[50];
	float nota1, nota2, media;
	printf("Qual o nome do aluno? \n");
	gets(aluno);
	system("cls");
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	system("cls");
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	system("cls");
	media = (nota1 + nota2)/2;
	printf("A média é: %.1f", media);
	system("cls");
	
	if (media>=7){
		printf("O aluno ""%s"" está aprovado, parabéns!\n", aluno);
	}	else {
			printf("A média %.1f é inferior ao mínimo exigido, exame é necessário.\n ", media);
}
	
	return 0;
}
