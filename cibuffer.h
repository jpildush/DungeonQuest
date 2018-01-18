#ifndef CIBUFFER_H
#define CIBUFFER_H "cibuffer.h"

//#include <stdio.h>
//#include <stdlib.h>

//Clear Input Buffer Function

void ClearInputBuffer ()
{

	while (getchar() != '\n');

}

#endif
