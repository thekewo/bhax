#include<stdio.h>
int main()
{
	int firstNumber = 2,secondNumber = 4;

		
		printf("1. number = %d\n2.number = %d\n",firstNumber,secondNumber);
	
		firstNumber	= ( firstNumber - secondNumber );
		secondNumber	= ( firstNumber + secondNumber );
		firstNumber 	= ( secondNumber - firstNumber );
				
		printf("1. number = %d\n2. number = %d\n",firstNumber, secondNumber);

	return 0;