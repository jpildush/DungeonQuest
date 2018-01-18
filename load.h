//Loading Save File Function

#ifndef LOAD_H
#define LOAD_H "load.h"

//Calling Libraries
#include "structlib.h"
#include "pexit.h"
#include "cibuffer.h"
#include <string.h>
#include "penter.h"

//Defining Variables
#define MAX_PLAYER 2
#define MAX_FN 15

int load(struct playee player[MAX_PLAYER],float *rdays)
{
	float days;

	int ret;

	system("clear");

	char filename[MAX_FN];

	printf("Load Save File: ");

	scanf("%10[^\n]",filename);

	strcat(filename,".dat");

	ClearInputBuffer();

	FILE *fp = fopen(filename,"r");

	if(fp!=NULL)
    {
        while(!feof(fp))
			fscanf(fp,"%[^,],%d,%d,%d,%d,%d,%d,%d,%d,%f",player[0].name,&player[0].lvl,&player[0].hp,&player[0].str,&player[0].spe,&player[0].def,&player[0].intel,&player[0].luck,&player[0].xp,&days);

    	fclose(fp);

    	*rdays = days;

    	ret = 1;

    	printf("\n%s Has Been Loaded!\n",filename);

    	penter();

    	ClearInputBuffer();
    }

    else
		{
			printf("\nSave File Does Not Exist!\n");

			pexit();

			ClearInputBuffer();

			system("clear");

			ret = 0;
		}

return ret;
}
#endif
