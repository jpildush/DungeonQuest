//This Function Trains your Character

#ifndef TRAIN_H
#define TRAIN_H "train.h"

//Calling Libraries
#include "structlib.h"

//Defining Variables
#define MAX_PLAYER 2
#define MAX_ITEM 2


void train(float *rdays,struct playee player[MAX_PLAYER])
	{

		if (player[0].hp > 2)
			{

				player[0].hp=player[0].hp - 2;

				player[0].xp = player[0].xp + 10;

				*rdays=(*rdays) - 0.5;

				printf("Did some training!\n\n");


			}
		else
			{
				printf("Not Enough HP to Train\n");

				printf("Hint: Go to The Inn\n");

			}

	}

#endif
