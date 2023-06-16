#include <unistd.h>

int main (int argc, char *argv[])
{
	int c;
	c = 1;
	if (argc == 2)
	{
		while(argv[1][c])
		{
			write(1, &argv[1][c], 1);
			c = c + 2;
		}
	}
	write (1, "\n", 1);
}