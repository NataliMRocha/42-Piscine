#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;

	c = 0;
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	while (argv[1][c])
	{
		if (argv[1][c] == 'a')
		{
			write(1, "a", 1);
			break ;
		}
		c++;
	}
	write(1, "\n", 1);
	return (0);
}
