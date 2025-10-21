#include<stdlib.h>
#include <stdio.h>
#include <iostream>
const double VAT = 0.2;

int priceOfVAT(int);

int squaredNum(int);

int roundedFloat(float);
int main()
{
	int cost;
	int num;
	float round;
	printf("please input the cost\n");

	scanf_s("%d",&cost);
	
	
	int total = priceOfVAT(cost)+cost;

	printf("%d\n",total);

	printf("please input the number you want to square\n");

	scanf_s("%d", &num);
	int squared = squaredNum(num);
	printf("%d\n", squared);
	printf("please input the number you want to round\n");

	scanf_s("%f", &round);
	int rounded = roundedFloat(round);
	printf("%d\n", rounded);
}

int priceOfVAT(int a)
{
	int total = VAT * a;
	return total;
}
int squaredNum(int a)
{
	int Squared = a * a;
	return Squared;
}
int roundedFloat(float a)
{
	float rounded = round(a);
	return a;
}
