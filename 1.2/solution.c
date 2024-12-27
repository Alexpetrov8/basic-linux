#include <stddef.h>

int stringStat(const char *string, size_t multiplier, int *count)
{
	(*count)++;
	 int Size = 0;
	 while (string[Size] != '\0') Size++;
   	 return Size * multiplier;
}
