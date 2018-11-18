#include <stdio.h>

int main()	{
	int number;
	printf("Enter the number: ");
	scanf("%d",&number);
	int sos = (number*(number+1)*((2*number)+1))/6;
	int squareOfSum = (number*(number+1)/2);
	squareOfSum = squareOfSum*squareOfSum;
	printf("The difference between the Square of Sums and Sum of Squares = %d\n",squareOfSum-sos);
	return 0;
}