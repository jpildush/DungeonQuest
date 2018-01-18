//In Game Menu

#ifndef IGMENU_H
#define IGMENU_H "igmenu.h"

//Calling Libraries
#include "rest.h"
#include "train.h"
#include "dmlord.h"
#include "validate.h"
#include "pagain.h"
#include "roamf.h"
#include "penter.h"
#include "validate.h"
#include "cibuffer.h"
#include "save.h"

//Defining Variables
#define MAX_PLAYER 2
#define MAX_ITEM 2

int iGmenu(struct playee player[MAX_PLAYER],struct itm item[MAX_ITEM],float *days)
{
	float rdays = *days;
//Declaring

//Displays Character's Current Stats
	system("clear");
	printf("-------------------------\n");
	printf("|%10s's Stats:    |\n",player[0].name);
	printf("-------------------------\n");

	printf("|Strength:        %-5d |\n",player[0].str);

	printf("|Speed:           %-5d |\n",player[0].spe);

	printf("|Defense:         %-5d |\n",player[0].def);

	printf("|Intelligence:    %-5d |\n",player[0].intel);

	printf("|Luck:            %-5d |\n",player[0].luck);

	printf("-------------------------\n\n\n");

	int rstart = 1;

	int ret;

	//Start In-Game Menu
	while (rstart == 1)
	{
		if (rdays > 0 && player[0].hp > 0)
		{
			int select;

			fflush(stdin);

			printf("Days Remaining: %.1f   HP: %d   EXP: %d \n\n", rdays, player[0].hp,player[0].xp);

			printf("1 - Rest at Inn\n");

			printf("2 - Train\n");

			printf("3 - Roam Forest\n");

			printf("4 - Fight the Demon Lord\n");

			printf("5 - Inventory\n");

			printf("6 - Save Game\n");

			printf("7 - Quit Game\n\n");

			printf("Selection: ");

			scanf("%d", &select);

			ClearInputBuffer();

			penter();

			ClearInputBuffer();


			//select = validate (1,5);

			switch (select)
				{

					case 1:
						system("clear");

						rest_at_inn(&rdays,player);

						penter();

						rstart = 1;

						break;

					case 2:
						system("clear");

						train(&rdays,player);

						penter();

						rstart = 1;

						break;

					case 3:
						system("clear");

						roamf(&rdays,player,item);

						if(player[0].hp>0)
							printf("Came Back From an Adventure!\n\n");


						penter();

						rstart = 1;

						break;

					case 4:

						system("clear");

						dMlord(player);

						rstart = 1;

						break;

					case 5:
						invs(item,player,&rdays);

						rstart = 1;

						break;

					case 6:
						system("clear");

						saveg(player,&rdays);

						rstart = 1;

						break;

					case 7:

						pexit();

						system("clear");

						rstart = 0;

						ret = 1;

						break;

					default:

						system("clear");

						printf("\n\n\nPlease Enter a Valid Option #1-5\n\n");

						penter();
				}
		}
		else
		{
			printf("GAME OVER \n");

			ret=pAgain();

			rstart=0;

		}
	}
	return ret;
}

#endif
