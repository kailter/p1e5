#include <stdio.h>
int main(void)
{
	int a, b;
	printf("Dose duo arnitikous akeraious: ");
	scanf("%d %d", &a,&b);
	if (a>0 || b>0)
		{
			printf("ERROR");
		}
	a = -a;
	b = -b;
	printf("%d %d",a, b);
	return 0;
	
	
}
