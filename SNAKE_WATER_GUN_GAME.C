#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeWATERgun(char you,char comp)
{
	//return 1 if you win -1 if you lose and 0 if draw
	// condition are drwaed
	if(you==comp)
	{
		return 0;
	}
	//none draw condition
	if(you =='s' && comp == 'w')
	{
		return 1;
		
	}
	
	else if(you =='g' && comp == 'w')
	{
		return -1;
		
	}
	else if(you =='s' && comp == 'g')
	{
		return -1;
	}
	else if(you =='w' && comp == 'g')
	{
		return 1;
		
	}
	
	
	else if(you =='g' && comp == 's')
	{
		return 1;
	}
	else if(you =='w' && comp == 's')
	{
		return -1;
		
	}
	
}
int main()
{
	char you,comp;
	srand(time(0));
	int number = rand()%100 + 1;
	
	if(number<33)
	{
		comp = 's';
	}
	if(number>=33 && number<=66)
	{
		comp = 'w';
	}
	else
	{
		comp = 'g';
	}
	
	printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
	
	scanf("%c",&you);
	int result = snakeWATERgun(you,comp);
	
	if(result == 1)
	{
		printf("CONGRATULATION,  YOU WON THE GAME");
	}
	else if(result == -1)
	{
		printf("YOU LOSE THE GAME");
	}
	else 
	{
		printf("GAME IS DRAW");
	}
	printf("\nYOU CHOOSE %c AND COMPUTER CHOOSE %c. ",you,comp);
	
	return 0;
}
