//Play Again Function 
#ifndef PAGAIN_H
#define PAGAIN_H "pagain.h"

#include "cibuffer.h"
#include "string.h"

int pAgain ()
{
int ret;

int rrstart = 1;
	while (rrstart == 1)
	{
		char answer[1];

		printf("\nPlay Again? (y/n): ");

		scanf("%[^\n]",answer);

		ClearInputBuffer();

		if (strcmp(answer,"y")==0)
		{
			system("clear");

			ret = 1;

			rrstart = 0;
		}
		else if (strcmp(answer,"n")==0)
		{
			system("clear");

			ret = 1;

			rrstart = 0;
		}
		else
		{
			printf("\nNot a Valid Option!\n");

			printf("Please Try Again!\n");

			rrstart = 1;
		}

	}

return ret;
}

#endif
