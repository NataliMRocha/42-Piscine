/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 23:10:54 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/06 19:12:46 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 65 && str[c] <= 90)
		{
			str[c] = str[c] + 32;
		}
		c ++;
	}
	return (str);
}

// #include <stdio.h>
// int main (void)
// {
// 	char str[] = "natAlI58*";
// 	ft_strlowcase(str);
// 	printf("%s", ft_strlowcase(str));
// 	return(0);
// }