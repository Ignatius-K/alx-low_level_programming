#include "main.h"


char *cap_string(char *str)
{

	int i;
	char c;

	i = 0;

	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 97 && c <= 122)
		{
			c = str[i - 1];
			if ((i == 0) || (c == 9 || c == 10 || c == 32 || c == 33 || c == 40 ||
						c == 41 || c == 44 || c == 46 || c == 59 || c == 61 || c == 63
						|| c == 123 || c == 125))
				str[i] -= 32;
		}

		i++;
	}



	return (str);
}
