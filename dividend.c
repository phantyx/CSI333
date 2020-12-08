#include <stdio.h>
int main(int x, int y)
{
	int d;
	printf("Enter a number: ");
	scanf ("%d", &x);
	printf("Enter another number: ");
	scanf ("%d", &y);
	d = x % y;
	printf("Your remainder is: %d\n", d);
	return 0;
}