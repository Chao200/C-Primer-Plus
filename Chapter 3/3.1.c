#include <stdio.h>
int main(void)
{
	float weight;
	float value;

	printf("Enter your weight in pounds:");

	scanf("%f", &weight);

	value = 1700.0 * weight * 14.5833;

	printf("value is $%.2f\n", value);

	return 0;
}

