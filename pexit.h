//Pause and Exit Function

#ifndef PEXIT_H
#define PEXIT_H "pexit.h"


int pexit()
{
	fflush(stdin);

	printf("\nPress ENTER to Exit\n\n");

    getchar();

    fflush(stdin);

    int end = 0;

	return end;
}

#endif
