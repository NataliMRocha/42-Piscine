#include <unistd.h>

int main (int argc, char **argv)
{
	int c;

	if(argc == 2)
	{
		c = 0;
		while (argv[1][c])
		{
			if((argv[1][c] >= 'A' && argv[1][c] <= 'M') || (argv[1][c] >= 'a' && argv[1][c] <= 'm'))
			{
				argv[1][c] = argv[1][c] + 13;
				write(1, &argv[1][c], 1);
			}
			else if((argv[1][c] >= 'N' && argv[1][c] <= 'Z') || (argv[1][c] >= 'n' && argv[1][c] <= 'z'))
			{
				argv[1][c] = argv[1][c] - 13;
				write(1, &argv[1][c], 1);
			}
			else
				write(1, &argv[1][c], 1);
			c++; 
		}
	}
	write(1, "\n", 1);
	return(0);
}