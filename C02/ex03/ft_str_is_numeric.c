/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:13:09 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/07 11:51:00 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[c] != '\0')
	{
		if (str[c] >= '0' && str[c] <= '9')
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
// int	main(void)
// {
// 	char*str = "582";
// 	ft_str_is_numeric (str);
// 	printf("%d", ft_str_is_numeric(str));
// }
