#include <stdio.h>
int main(void)
{
	float a,b,d;
	char c;
	printf("Dose duo dekadikous kai ena gramma: \n");
	scanf("%f %f %ch ", &a,&b,&c);
	
	
	if (c =='S')
		{
			d = a + b;
			printf("%f",d);	
		}
	if (c =='M')
		{
			d = a * b;
			printf("%f",d);
		}
	return 0;
	
}
