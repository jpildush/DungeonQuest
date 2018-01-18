//Pause and Continue Function

#ifndef PENTER_H
#define PENTER_H "penter.h"

void penter()
{

	fflush(stdin);

	printf("\nPress ENTER to Continue\n\n");

	getchar();

	fflush(stdin);

	int i;

	for (i = 0; i < 2; ++i)
		system("clear");
}

#endif
