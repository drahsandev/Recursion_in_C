#include <stdio.h>
void greeting(int var)
{
	if(var==0) return;
	printf("Good Morning\n");
	greeting(var-1);
	return;
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	greeting(n);
	return 0;
}
