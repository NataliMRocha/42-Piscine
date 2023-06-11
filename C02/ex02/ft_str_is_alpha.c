/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:50:32 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/07 11:51:04 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[c] != '\0')
	{
		if ((str[c] >= 'a' && str[c] <= 'z')
			|| (str[c] >= 'A' && str[c] <= 'Z'))
		{
			c++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// #include <stdio.h>
// int main (void)
// {
// 	char *str = "Natali";
// 	ft_str_is_alpha (str);
// 	printf("%d", ft_str_is_alpha(str));
// }