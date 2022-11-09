#include <stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;

	printf("right!\n");
	printf("%d minus %d is %d\n", ten, 2, ten - two);
	printf("wrong!\n");
	// 漏了两个参数
	printf("%d minus %d is %d\n", ten);

	return 0;
}

