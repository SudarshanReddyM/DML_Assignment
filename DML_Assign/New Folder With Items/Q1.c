#include <stdio.h>

int main()	{
	long unsigned int number,count=0,a;
	printf("Enter the number: ");
	scanf("%lu",&number);
	for(long unsigned int i = 1; i <= number;i++)	{
		count = 0;
		if(number%i==0)	{
			for(int j = 1; j <=number;j++)	{
				if(i%j==0)	{
					count+=1;
				}
			}
		}
		if(count==2)	{
				a = i;
		}
	}
	printf("%lu\n",a);
	return 0;
}
