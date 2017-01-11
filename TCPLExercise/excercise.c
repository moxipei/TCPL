#include "exercise.h"

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
	int c = 0,
		i = 0;

	for(; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
	{
		s[i] = c;
	}

	if(c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char from[], char to[])
{
	for(int i = 0; (to[i] = from[i]) != '\0'; i++);
}

/* atoi: convert s to integer */
int atoi(char s[])
{
	int n = 0,
		i = 0;

	for(i = 0; s[i] >= '0'&&s[i] <= '9'; ++i)
	{
		if(s[i] != '\0')
		{
			n = 10 * n + (s[i] - '0');
		}
		else
		{
			break;
		}
	}
	return n;
}