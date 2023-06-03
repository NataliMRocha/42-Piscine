#include <unistd.h>

void ft_print_comb(void)
{
	int a;
	int b;
	int c;
	
	a = '0';
	while (a <= '7')
	{
		b = '1';
		while (b <= '8')
		{
			c = '2';
			while (c <= '9')
			{
				if (a < b && b < c )
				{	
					write(1, &a,1);
					write(1, &b,1);
					write(1, &c,1);
					if(!(a == '7' && b == '8' && c == '9'))
						{
							write(1,",",1);
						write(1," ",1);	
						}			
				}
			c++;
			}
		b++;
		}
	a++;
}
}

int main(void)
{
	ft_print_comb();
	return(0);
}