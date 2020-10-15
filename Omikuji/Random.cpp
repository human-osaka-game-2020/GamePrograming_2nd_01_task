#include "Common.h"
#include <time.h>

int Random()
{
	srand((unsigned)time(NULL));
	return rand() % 6;

}