#include <unistd.h>

int	ft_repeat(char c)
{
	int	repeat;

	if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else
	repeat = 1;
	return (repeat);
}

int main (int argc, char **argv)
{
	int c;
	int repeat;

	c = 0;
	if (argc == 2)
	{
		while (argv[1][c])
		{
			repeat = ft_repeat(argv[1][c]);
			while (repeat > 0 && repeat--)
			{
				write(1, &argv[1][c], 1);
				
			}	
			c++;
		}
	}
	write(1,"\n", 1);
}