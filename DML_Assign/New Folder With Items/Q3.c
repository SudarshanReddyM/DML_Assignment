#include <stdio.h>
#include <math.h>	

int main()	{
	int a;
	int b;
	int c1,c; 
		for(a=1;a<100;a++)	{
			for(b=1;b<1000;b++)	{
				c1 = (a*a)+(b*b);
				c = pow(c1,0.5);
				if(a+b+c==1000)	{
					printf("%d %d %d\n",a,b,c);
					printf("%d\n",a*b*c);
					return 0;
				}
			}
		}
	}
