#include<stdio.h>
int main()
{
	int choice;
	printf("Enter '1' to convert temperature from Fahrenheit to Celsius \n");
	printf("Enter '2' to convert temperature from Celsius to Fahrenheit \n");
	scanf_s("%d", &choice);
	float C, F;
	switch (choice)
	{
	case 1 :
		printf("Enter your Fahrenheit temperature : ");
		scanf_s("%f", &F);
		C = 5 * (F - 32) / 9;
		printf("The Celsius Temperature is %.2f\n", C);
		break;

	case 2:
		printf("Enter your Celsius temperature : ");
		scanf_s("%f", &C);
		F = (9 * C) / 5 + 32;
		printf("The Fahrenheit Temperature is %.2f\n", F);
		break;

		default:
		printf("Wrong input\a");
		break;
	}
}