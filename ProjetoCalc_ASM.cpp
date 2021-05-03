#include <iostream>

extern "C" int SomaASM(int a, int b);
extern "C" int SubASM(int a, int b);
extern "C" int MultASM(int a, int b);
extern "C" int DivASM(int a, int b);

int main()
{
	int a, b;
	int op = 1;

	while (op != 5)
	{
		printf("\n\tCalculadora Assembler\n\n");
		printf("\tDigite 1 para somar dois numeros\n");
		printf("\tDigite 2 para subtrair dois numeros\n");
		printf("\tDigite 3 para multiplicar dois numeros\n");
		printf("\tDigite 4 para dividir dois numeros\n");
		printf("\tDigite 5 para sair da calculadora\n\n\t--> \t");
		scanf_s("%d", &op);

		switch (op)
		{
		case 1:
			printf("\n\tPrimeiro numero da soma | -->\t");
			scanf_s("%d", &a);
			printf("\tSegundo numero da soma | -->\t");
			scanf_s("%d", &b);
			printf("\tSoma = %d\n", SomaASM(a, b));
			system("PAUSE");
			system("cls");
			break;
		case 2:
			printf("\n\tPrimeiro numero da subtracao | -->\t");
			scanf_s("%d", &a);
			printf("\tQuantidade a ser subtraida | -->\t");
			scanf_s("%d", &b);
			printf("\tSubtracao de %d em %d = %d\n", a, b, SubASM(a, b));
			system("PAUSE");
			system("cls");
			break;
		case 3:
			printf("\n\tPrimeiro numero da multiplicacao | -->\t");
			scanf_s("%d", &a);
			printf("\tSegundo numero da multiplicacao  | -->\t");
			scanf_s("%d", &b);
			printf("\tMultiplicacao de %d em %d = %d\n", a, b, MultASM(a, b));
			system("PAUSE");
			system("cls");
			break;
		case 4:
			printf("\n\tDenominador | -->\t");
			scanf_s("%d", &a);
			printf("\tDivisor | -->\t");
			scanf_s("%d", &b);
			printf("\tDivisao (%d/%d) = %d\n", a, b, DivASM(a, b));
			system("PAUSE");
			system("cls");
			break;
		case 5:
			break;
		default:
			break;
		}
	}
	return 0;
}
