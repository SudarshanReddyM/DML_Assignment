#include <stdio.h>

int main()	{
	unsigned long int a1 = 1;
	unsigned long int a2 = 2;
	unsigned long int a3 = 0;
	int i = 2;
	unsigned long int sum = a2;
	printf("%ld %ld ",a1,a2);
	while(a2<100000)	{
		a3 = a1 + a2;
		printf("%ld ",a3);
		a1 = a2;
		a2 = a3;
		i+=1;
		if(i%2==0)	{
			sum+=a3;
		}
	}
	printf("\n%lu\n",sum);
	return 0;
}