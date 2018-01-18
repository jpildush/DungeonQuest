//Rest at Inn Funciton

#ifndef REST_H
#define REST_H "rest.h"

//Calling Libraries
#include "structlib.h"

//Defining Variables
#define MAX_PLAYER 2
#define MAX_ITEM 2

void rest_at_inn(float *rdays,struct playee player[MAX_PLAYER])
	{
		//Defining Variables
		int maxhp=10;

		if (*rdays >= 1)
			{
				*rdays = (*rdays) - 1;

				player[0].hp=maxhp;

				printf("Rested up at the inn!\n\n");
			}
	}

#endif
