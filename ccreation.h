//#include <stdio.h>
//#include <stdlib.h>
//Character Creation Screen
#ifndef CCREATION_H
#define CCREATION_H "ccreation.h"

//Calling Libraries
#include "structlib.h"
#include "cibuffer.h"
#include "string.h"
#include "penter.h"

//Defining Variables
#define MAX_PLAYER 2
#define MAX_ITEM 2

void ccreation(struct playee player[MAX_PLAYER],struct itm item[MAX_ITEM])
{
//Declaring Variables
	int Strength;

	int Speed;

	int Defense;

	int Intelligence;

	int maxhp=10;

//Input Decleration Title
	system("clear");

	printf("Character Creation\n\n");

	penter();

	ClearInputBuffer();

	printf("~Please provide a Name and Desired Stats~\n\n");

//Inputs
	printf("Input Name of New Player: ");

	scanf("%[^\n]",player[0].name);

	ClearInputBuffer();

	printf("\nInput Strength of the Player:");

	scanf("%d",&Strength);

	ClearInputBuffer();

	printf("\nInput Speed of the Player:");

	scanf("%d",&Speed);

	ClearInputBuffer();

	printf("\nInput Defense of the Player:");

	scanf("%d",&Defense);

	ClearInputBuffer();

	printf("\nInput Intelligence of the Player:");

	scanf("%d",&Intelligence);

	ClearInputBuffer();

//Equations
	int total = (Strength+Speed+Defense+Intelligence);

	float StrengthRatio = (((float)Strength/total)*100);

	float SpeedRatio = (((float)Speed/total)*100);

	float DefenseRatio = (((float)Defense/total)*100);

	float IntelligenceRatio = (((float)Intelligence/total)*100);

	int luck = (total%30);


	float eStr = (float)(StrengthRatio/5);

	float eDefen = (float)(DefenseRatio/2);

	float eIntelli = (float)(IntelligenceRatio/5);



//Getting Variables Ready for Transfer to Game
	int eIntellir = eIntelli;

	int eStrr = eStr;

	int eDefenr = eDefen;

	int eluckr = luck;

	int eSpe = SpeedRatio;


	int strengthr = StrengthRatio;

	int speedr = SpeedRatio;

	int defenser = DefenseRatio;

	int intellir = IntelligenceRatio;

//Transfer Data to Game
	//Player Data
	player[0].str=strengthr;

	player[0].spe=speedr;

	player[0].def=defenser;

	player[0].intel=intellir;

	player[0].luck=luck;

	player[0].hp=maxhp;

	//Enemy Data
	player[1].str=eStrr;

	player[1].spe=eSpe;

	player[1].def=eDefenr;

	player[1].intel=eIntellir;

	player[1].luck=eluckr;


	//Making Quick Items
	strcpy(item[0].name, "Time Machine");

	strcpy(item[1].name, "Potion");

	item[0].type = 777;

	item[1].type = 1;

	item[0].power = 10;

	item[1].power = 2;
}
#endif
