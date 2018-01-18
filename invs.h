//Inventory Menu

#include <stdio.h>
#include <stdlib.h>
#include "cibuffer.h"
#include "penter.h"
#include "pexit.h"
#include "structlib.h"

#define MAX_PLAYER 2
#define MAX_ITEM 2
#define insize 15


void invs (struct itm item[MAX_ITEM],struct playee player[MAX_PLAYER],float *rdays)

	{
		//float rdays = *days;
		int itemn;

		int sstart = 1;
		while(sstart==1)
		{

			system("clear");

			int i;
			printf("\n________________________\n");
			printf("--***Inventory Menu***--\n");
			printf("________________________\n\n");

			printf("1 -- Show Inventory\n");
			printf("2 -- Use Item\n");
			printf("3 -- Quit\n\n");

			printf("Enter: ");
			int Imenu;
			scanf("%d", &Imenu);

			penter();

			ClearInputBuffer();

			switch (Imenu)
			{
				case 1:
					//Show Inventory
					system("clear");

					printf("*Items*\n");
					printf("-------\n");
					for (i=0; i<MAX_ITEM; i++)
					{
						if(i<MAX_ITEM)
							printf("%-2d %-15s %5d\n",item[i].type,item[i].name,item[i].power);
					}

					pexit();
					ClearInputBuffer();

					break;

				case 2:
					//Use Item
					system("clear");

					printf("\nUse Item: ");
					scanf("%d", &itemn);
					ClearInputBuffer();

					if (itemn==1 || itemn==777)
					{
						if(itemn==1)
						{
							if(player[0].hp<=8)
							{
								player[0].hp=player[0].hp+item[1].power;

								printf("You Have Been Healed! Current HP: %d\n",player[0].hp);

								penter();
								ClearInputBuffer();
							}
							else if(player[0].hp>8)
							{
								player[0].hp=10;

								printf("You Have Been Healed! Current HP: %d\n",player[0].hp);
								penter();
								ClearInputBuffer();
							}
						}

						else if(itemn==777)
						{
							*rdays=item[0].power;
							player[0].hp=item[0].power;

							printf("Travelled Back In Time! Current Days Remaining: %2.2f\n\n",*rdays);

							penter();
							ClearInputBuffer();
						}

					}
					else
					{
						printf("\nThat is Not an Item!\n");
						penter();
						ClearInputBuffer();
					}

					penter();
					ClearInputBuffer();
					break;


				case 3:
				//Exit
					sstart = 0;
					break;

				default:
					printf("Please enter a Valid Option!\n");
					penter();
					ClearInputBuffer();

			}
		}
	}
