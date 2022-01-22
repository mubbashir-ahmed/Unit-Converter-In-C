#include<stdio.h>
main()
{
	int op, sub_op;
	float num1, var;
	printf("BASIC CONVERTER");
	printf("\n1. Temperature\t2. Weight\t3. Length\t4. Power");
	printf("\nSelect the given option (1-4): ");
	scanf("%d", &op);
	
	if(op == 1)
	{
		printf("1. Celsius to Fahrenheit\t2. Fahrenheit to Celsius");
		printf("\nSelect any one conversions: ");
		scanf("%d", &sub_op);
		
		if(sub_op == 1)
		{
			printf("Enter Celsius Value: ");
			scanf("%f", &num1);
			
			var = (num1 * 9) / 5 + 32;
			printf("\nFahrenheit: %0.2f", var);
		}
		if(sub_op == 2)
		{
			printf("Enter Fahrenheit Value: ");
			scanf("%f", &num1);
			
			var = (num1 - 32) * 5 / 9;
			printf("\nCelsius: %0.2f", var);
		}
	}
	if(op == 2)
	{
		printf("1. Gram to KiloGram\t2. KiloGram to Gram");
		printf("\nSelect any one conversions: ");
		scanf("%d", &sub_op);
		
		if(sub_op == 1)
		{
			printf("Enter Gram Value: ");
			scanf("%f", &num1);
			
			var = num1 / 1000;
			printf("\nKiloGram: %0.2f", var);
		}
		if(sub_op == 2)
		{
			printf("Enter KiloGram Value: ");
			scanf("%f", &num1);
			
			var = num1 * 1000;
			printf("\nGram: %0.2f", var);
		}
	}
	if(op == 3)
	{
		printf("1. Centimeter to Meter\t2. Millimeter to Centimeter");
		printf("\nSelect any one conversions: ");
		scanf("%d", &sub_op);
		
		if(sub_op == 1)
		{
			printf("Enter Centimeter Value: ");
			scanf("%f", &num1);
			
			var = num1 / 100;
			printf("\nMeter: %0.2f", var);
		}
		if(sub_op == 2)
		{
			printf("Enter Millimeter Value: ");
			scanf("%f", &num1);
			
			var = num1 / 10;
			printf("\nCentimeter: %0.2f", var);
		}
	}
	if(op == 4)
	{
		printf("1. Watt to KiloWatt\t2. KiloWatt to Watt");
		printf("\nSelect any one conversions: ");
		scanf("%d", &sub_op);
		
		if(sub_op == 1)
		{
			printf("Enter Watt Value: ");
			scanf("%f", &num1);
			
			var = num1 / 1000;
			printf("\nKiloWatt: %0.2f", var);
		}
		if(sub_op == 2)
		{
			printf("Enter KiloWatt Value: ");
			scanf("%f", &num1);
			
			var = num1 * 1000;
			printf("\nWatt: %0.2f", var);
		}
	}
}
