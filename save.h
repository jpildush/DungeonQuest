//Save Character to File

#ifndef SAVE_H
#define SAVE_H "save.h"

//Calling Libraries
#include "structlib.h"
#include "cibuffer.h"
#include <string.h>
#include "pexit.h"

//Defining Variables
#define MAX_PLAYER 2
#define MAX_FN 15

void saveg(struct playee player[MAX_PLAYER],float *rdays)
{
	float days = *rdays;

	char filename[MAX_FN];
	printf("(Some File Names may be Over Written\n");
	printf("Enter the Name of Your New Save File (10 Letters Max!): ");

	scanf("%10[^\n]",filename);

	strcat(filename,".dat");

	ClearInputBuffer();


	FILE *fp = fopen(filename,"w");

	if(fp!=NULL)
		{
			fprintf(fp,"%s,%d,%d,%d,%d,%d,%d,%d,%d,%2.1f",player[0].name,player[0].lvl,player[0].hp,player[0].str,player[0].spe,player[0].def,player[0].intel,player[0].luck,player[0].xp,days);

			fclose(fp);

			printf("Saved! File Name: %s\n",filename);
		}

   	pexit();

   	ClearInputBuffer();

   	system("clear");

}

#endif
