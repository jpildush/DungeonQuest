//Vaidates User's Input

//#include <stdlib.h>
//#include <stdio.h>

#ifndef VALIDATE_H
#define VALIDATE_H "validate.h"
#include "penter.h"

int validate (int low, int high)
{
	int rvali = 1;



	while (rvali == 1)
	{
		int input;
		scanf("%d",&input);
		getchar();

		if (input >= low && input <= high)
		{
			printf("You have selected: %d \n", input);
			penter();
			rvali=0;
			return input;
		}

		else
		{
			printf("Not a valid input, please try again!\n");

			rvali = 1;
		}
	}

	return 0;
}

#endif
