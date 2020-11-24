#include <stdio.h>
int main(void)
{
	int a = 4, b = 3, c = 1;
	a += b -= ++c * a--;
	
	printf("%d %d %d \n", a, b, c);
	return 0;
}

