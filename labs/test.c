#include <stdio.h>

int main()
{
    char str[100];
	char c;
	int i;
	printf ("Input a string:\n");
	while ((c = getchar ()) != '\n' && i < 99)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	printf ("%s\n", str);
	printf ("%d", i);
	return 0;
}