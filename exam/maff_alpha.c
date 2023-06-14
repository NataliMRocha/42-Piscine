#include <unistd.h>

int main(void)
{
	int	a;
	int	b;
	
	a = 'a';
	b = 'B';
	while (a <= 'y' && b <= 'Z')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		a = a + 2;
		b = b + 2;
	}
}
