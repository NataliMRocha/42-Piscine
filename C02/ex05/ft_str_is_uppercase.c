/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 22:26:45 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/07 11:52:39 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	c;

	c = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
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
// 	char*str = "NATALI";
// 	ft_str_is_uppercase (str);
// 	printf("%d", ft_str_is_uppercase(str));
// }