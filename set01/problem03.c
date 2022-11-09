#include <stdio.h>

int main()
{

	int a, b, sum;
	printf("\nEnter the two number: ");
	scanf("%d %d", &a, &b);
	sum = add(a, b);
	printf("\nAddition of %d and %d is %d", a, b, sum);

	return 1;
}
int add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}
