//#include <stdio.h>
//#include <stdlib.h>

//Function which asks user if they would like to continue roaming within the forest

#ifndef CROAM_H
#define CROAM_H "croam.h"

#include "cibuffer.h"
#include "penter.h"
#include "invs.h"
#include "structlib.h"

#define MAX_PLAYER 2
#define MAX_ITEM 2

int croam()
{
	//float rdays = *days;
	int menu2;
	int rstart;

	printf("~MENU~\n\n");

	printf("1 - Continue Roaming\n");

	printf("2 - Go Back To Village\n");

	printf("Select:");

	scanf("%d", &menu2);

	ClearInputBuffer();

	system("clear");
	switch (menu2)
		{

			case 1:
				rstart = 1;

				break;

			case 2:
				rstart = 0;

				break;

			default:
				printf("Please Enter a Valid Option!\n");

		}

	return rstart;

}

#endif
