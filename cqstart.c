//CodeQuest!
//By: Joseph Pildush
//Dungeon Quest


//Calling Libraries
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "structlib.h"
#include "ccreation.h"
#include "croam.h"
#include "dmlord.h"
#include "igmenu.h"
#include "load.h"
#include "pagain.h"
#include "rest.h"
#include "roamf.h"
#include "train.h"
#include "validate.h"
#include "penter.h"
#include "cibuffer.h"

//Defining Variables
#define MAX_PLAYER 2
#define MAX_ITEM 2

void main()
{

system("clear");

		printf("\n\n+-----------------------+\n");
		printf("|                       |\n");
		printf("|    !  Code Quest !    |\n");
		printf("|                       |\n");
		printf("+-----------------------+\n\n\n");
//Declare
int Smenu = 1;

int start;

struct playee player[MAX_PLAYER];

struct itm item[MAX_ITEM];

float rdays = 8;

//main menu
	while (Smenu == 1)
		{
			int select;

			printf("\n  -- Main-Menu --\n");

			printf("\n1 - New Game\n");

			printf("\n2 - Load Game\n");

			printf("\n3 - Exit\n");

			printf("\nSelection: ");

			scanf("%d", &select);

			ClearInputBuffer();

			switch (select)
				{
					//New Game
					case 1:

						ccreation(player,item);

						Smenu = iGmenu(player,item,&rdays);

						break;

					//Load Game
					case 2:

						start = load(player,&rdays);

						if (start == 1)
							Smenu = iGmenu(player,item,&rdays);
						else if(start == 0)
							Smenu = 1;

						break;

					//Exit
					case 3:

						Smenu = 0;

						system("clear");

						break;

					default:

						printf("Invalid Input, Try Again: ");

						system("clear");
				}
		}


}
