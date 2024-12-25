#include <stdio.h>
#include "libsolution.h"


const char * str1 = "0123456789";
const char * str2 = "0123456789 Hello World !";
const char * str3 = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx!";
const char * str4 = "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy";

int Count = 0;

int len1 = 0;
int len2 = 0;
int len3 = 0;
int len4 = 0;

size_t multip = 2;


int main()
{
	len1 = stringStat(str1, multip, &Count);
	printf("length  %i count %i\n", len1, Count);

	len2 = stringStat(str2, multip, &Count);
	printf("length  %i count %i\n", len2, Count);

	len3 = stringStat(str3, multip, &Count);
	printf("length  %i\n", len3);


	len4 = stringStat(str4, multip, &Count);
	printf("length  %i\n", len4);
	return 0;
}
