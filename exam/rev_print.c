#include <unistd.h>

int ft_strlen(char *str)
{
	int c;
	c = 0;
	while (str[c])
	{
		c++;
	}
	return(c);
}

int main(int argc, char **argv)
{
	int i;
	i = 0;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]);
		while(i >= 0)
		{
			write(1, &argv[1][i],1);
			i--;
		}
	}
	write(1, "\n", 1);
}
