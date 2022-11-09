#include <stdio.h>
int main(void)
{
	printf("Type int has a size of %lu bytes.\n", sizeof(int));
	printf("Type char has a size of %lu bytes.\n", sizeof(char));
	printf("Type long has a size of %lu bytes.\n", sizeof(long));
	printf("Type long long has a size of %lu bytes.\n", sizeof(long long));
	printf("Type float has a size of %lu bytes.\n", sizeof(float));
	printf("Type doubel has a size of %lu bytes.\n", sizeof(double));
	
	//C99
	printf("C99\n");
	printf("Type int has a size of %zd bytes.\n", sizeof(int));
	printf("Type char has a size of %zd bytes.\n", sizeof(char));
	printf("Type long has a size of %zd bytes.\n", sizeof(long));
	printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
	printf("Type float has a size of %zd bytes.\n", sizeof(float));
	printf("Type doubel has a size of %zd bytes.\n", sizeof(double));


	return 0;
}

