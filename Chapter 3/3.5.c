#include <stdio.h>
int main(void)
{
	char ch;

	printf("Plz enter a character\n");
	scanf("%c", &ch);
	printf("The code of %c is %d", ch, ch);

	return 0;
}

