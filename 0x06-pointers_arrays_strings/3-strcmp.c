#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int len = 0;
	int output;

	for(; *s1 != '\0' || *s2 != '\0'; len++)
	{
		output = *s1 - *s2;

		if(output == 0)
		{
			s1++;
			s2++;
		}
		else
		{
			break;
		}
	}

	return output;
}
