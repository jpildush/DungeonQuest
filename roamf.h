//Roam Forest Function

#ifndef ROAMF_H
#define ROAMF_H "roamf.h"

//Calling Libraries
#include "structlib.h"
#include "croam.h"
#include "penter.h"
#include "cibuffer.h"

//Defining Variables
#define MAX_PLAYER 2
#define MAX_ITEM 2

void roamf(float *rdays,struct playee player[MAX_PLAYER],struct itm item[MAX_ITEM])
{
	//float rdays = *days;
//Declaring
	system("clear");

	printf("You enter the forest and begin roaming.\n");

	int rstart = 1;

	player[1].hp = 10;

	while (rstart == 1)
    {
	    //Declaring
	    char answer;

		int menu1;

		int rbattle = 1;

	    float Patkpwr, Eatkpwr, Pmgcpwr, Emgcpwr;

	    int i;

	    for (i = 0; i < 4; ++i)
	    {
	    	printf("...roam...\n");
	    		sleep(1);
	    }
//Battle Begins

	    printf("An Enemy Attacks You!\n\n");

	    player[1].hp = 10;

	    penter();

	    printf("\n\n*******Battle Start!*******\n\n");

	    printf("Player's Current HP:%d\n",player[0].hp);

	    printf("Enemy's Current HP:%d\n",player[1].hp);

//Battle Menu
		while (rbattle == 1)
		{

			printf("HINT: input the # of the menu item\n");

		    printf("1. Attack\n\n");

		    printf("2. Magic Attack\n\n");

		    printf("Please Input Your Option: ");

		    scanf("%d",&menu1);

		    ClearInputBuffer();

//Calculation
		    //ATTACK
	   			Patkpwr = (float)player[0].str/(float)player[1].def;
	    		Eatkpwr = (float)player[1].str/(float)player[0].def;
    		//MAGIC
	    		Pmgcpwr = (float)player[0].intel/player[1].intel;
	    		Emgcpwr = (float)player[1].intel/player[0].intel;

		    switch (menu1)
		    {
		    	case 1:
		    		//Battle Calculation for Basic Attack

		    		player[1].hp = (player[1].hp - 3);
		    		player[0].hp = (player[0].hp - 1);

		    		if (player[0].hp > 0)
		    		{
		    			if (player[1].hp > 0)
		    			{
		    				system("clear");

		    				printf("\nYou Have Attacked The Enemy!\n");

		    				printf("The Enemy Has Attacked You!\n\n");

		    				printf("Player's HP: %d \n", player[0].hp);

		    				printf("Enemies HP: %d \n", player[1].hp);

		    				rbattle = 1;
		    			}
			    		else if (player[1].hp <= 0)
			    		{
			    			system("clear");

			    			printf("\nThe Enemy Has Attacked You!\n");

			    			printf("You Have Attacked The Enemy!\n\n");

			    			printf("Player's HP: %d \n", player[0].hp);

			    			printf("Enemies HP: 0\n");

			    			printf("YOU HAVE WON!\n\n\n");

			    			rbattle = 0;

			    			player[0].xp = player[0].xp + 15;

			    			*rdays = *rdays - 0.2;

			    			printf("Days Remaining: %2.2f",*rdays);

			    			penter();

 			    			system ("clear");

	 		    			rstart = croam();

			    		}
			    	}
		    		else if (player[0].hp <= 0)
		    		{
		    			system("clear");

		    			printf("\nYou Have Attacked The Enemy!\n");

		    			printf("The Enemy Has Attacked You!\n\n");

		    			printf("Enemies HP: %d\n", player[1].hp);

		    			printf("Player's HP: 0 \n");

		    			printf("YOU HAVE DIED!\n\n\n");

		    			penter();

		    			system("clear");

		    			printf("GAME OVER");

		    			rbattle = 0;

		    			rstart=0;
		    		}
		    		break;


		    	case 2:
		    		//Battle Calculation for Magic Attack

		    		player[1].hp = (player[1].hp - 4);//(Pmgcpwr * 5));
		    		player[0].hp = (player[0].hp - 1);// - (Emgcpwr * 5));

		    		if (player[0].hp > 0)
		    		{
		    			if (player[1].hp > 0)
		    			{
		    				system("clear");

		    				printf("\nYou Have Shocked The Enemy!\n");

		    				printf("The Enemy Has Attacked You!\n\n");

		    				printf("Player's HP: %d \n", player[0].hp);

		    				printf("Enemies HP: %d \n", player[1].hp);

		    				rbattle = 1;
		    			}
			    		else if (player[1].hp <= 0)
			    		{
			    			system("clear");

			    			printf("\nThe Enemy Has Attacked You!\n");

			    			printf("You Have Shocked The Enemy!\n\n");

			    			printf("Player's HP: %d \n", player[0].hp);

			    			printf("Enemies HP: 0\n");

			    			printf("YOU HAVE WON!\n\n\n");

			    			rbattle = 0;

			    			player[0].xp = (player[0].xp) + 15;

			    			*rdays = *rdays - 0.2;

			    			printf("Days Remaining: %2.2f",*rdays);

			    			penter();

			    			system ("clear");

			    			rstart = croam();
			    		}
			    	}
		    		else if (player[0].hp <= 0)
		    		{
		    			system("clear");

		    			printf("\nYou Have Shocked The Enemy!\n");

		    			printf("The Enemy Has Attacked You!\n\n");

		    			printf("Enemies HP: %d\n", player[1].hp);

		    			printf("Player's HP: 0 \n");

		    			printf("YOU HAVE DIED!\n\n\n");

		    			penter();

		    			system("clear");

		    			printf("GAME OVER");

		    			rbattle = 0;

		    			rstart = 0;
		    		}

		    		break;

		    	default:
		    		printf("\nNot a Valid Option! Try Again!\n");
			}

		 }
	 }
}

#endif
