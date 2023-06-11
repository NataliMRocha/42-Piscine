/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:48:05 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/06 19:11:39 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
		{
			str[c] = str[c] - 32;
		}
		c++;
	}
	return (str);
}

// #include <stdio.h>
// int main (void)
// {
// 	char str[] = "nAtAli*58";
// 	ft_strupcase(str);
// 	printf("%s", ft_strupcase(str));
// 	return(0);
// }
