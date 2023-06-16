#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
	int c = 0;
	int sign = 1;
	int result = 0;

	while (str[c] && (str[c] == ' ') || (str[c] >= 9 && str[c] <= 13))
		c++;
	if (str[c] == '+' || str[c] == '-')
	 {
		if (str[c] == '-')
	 	sign *= -1;
		c++;
	 }
	 while (str[c] && str[c] >= '0' && str[c]<= '9')
	 {
		result = result * 10 + (str[c] - '0');
		c++;
	 }
	result = result * sign;
	return(result);
}

int		main(void)
{
	printf("%d\n", ft_atoi(" -1 3456789"));
	printf("%d\n", atoi(" -1 3456789"));
	return (0);
}