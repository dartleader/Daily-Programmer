#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

//Declare functions
int dice_roll(int dice_count, int faces) 				//Function to roll the dice
{
	int die_total=0;						//Initialize a variable to hold the total score
	int roll [dice_count];						//Declare array to store rolls
	printf("You are rolling %d %d-sided dice!\n",dice_count,faces);
	for (int i=0; i<dice_count;i++)
	{
		roll[i] = rand();					//Step into the array element and assign it a random number
		roll[i] = roll[i]%faces;				//Modulo the array element by faces to get the results of a faces-sided die
		roll[i]+=1;						//Increment roll by 1 to get results from 1-faces instead of 0-(faces-1)
		//printf("Die %d: %d.\n",i,roll[i]);			//Print the die roll.
		die_total = die_total+roll[i];				//Add the die roll to the running total
	}
	//printf("The total of the %d rolled dice was %d!\n",dice_count,die_total);	//Print the total of our dice rolls
	printf("%d:",die_total);
	for (int i=0; i<dice_count;i++)					//For loop to print out the successive rolls
	{
		printf(" %d", roll[i]);
	}
	printf("\n");							//Print a newline to pretty things up
}

int get_args(char* input)
{
	

}

int main()
{
		//Initialize random seed
		srand(time(NULL));				//Seed a random number using time
		//Test inputs
		dice_roll(5,12);
		dice_roll(6,4);
		dice_roll(1,2);
		dice_roll(1,8);
		dice_roll(3,6);
		dice_roll(4,20);
		dice_roll(100,100);

		//Actual inputs
		//dice_roll(5n12);
		//dice_roll(6n4);
		//dice_roll(1n2);
		//dice_roll(1n8);
		//dice_roll(3n6);
		//dice_roll(4n20);
}
