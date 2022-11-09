#include <stdio.h>
#include <limits.h>  	// 整型限制
#include <float.h>		// 浮点型限制
int main(void)
{
	printf("Some number limits for this system:\n");
	printf("Biggest int: %d\n", INT_MAX);
	printf("Smallest long long: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system\n", CHAR_BIT);

	return 0;
}