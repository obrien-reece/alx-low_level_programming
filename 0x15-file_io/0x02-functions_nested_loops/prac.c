#include <stdio.h>

int lower(int num1, int num2){
	if (num1 == num2)
		printf("Both numbers are equal\n");
	else if (num1 < num2)
		printf("Number 2 is greater than number1\n");
	else
		printf("Number 1 is greater\n");
	return (0);
}
int lower(int num1, int num2);
int main(void)
{
	int a;
	int b;
	int ret;

	printf("Enter number 1: ");
	scanf("%d", &a);
	printf("Enter number 2: ");
	scanf("%d", &b);
	
	ret = lower(a, b);
	printf("%d\n", ret);

	return (0);
}



