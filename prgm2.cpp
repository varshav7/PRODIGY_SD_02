#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int original,guess,ctr=0;
	srand(time(0));
	original=rand();
	label1:
	printf("\nEnter your guess:\t");
	scanf("%d",&guess);
	if(guess!=original)
	{
		printf("wrong,try again\n");
		if(original>guess)
		printf("The number is higher than the guess");
		else
		printf("The number is lower than the guess");
		printf("\n %d",original);
		ctr++;
		goto label1;
	}
	else
	printf("\nGuess is right, you took %d tries to get the answer",ctr+1);
	
}
