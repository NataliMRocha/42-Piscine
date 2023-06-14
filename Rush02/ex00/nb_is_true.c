/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_is_true.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:17:52 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/11 21:31:17 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

unsigned int	ft_atoi_custom(const char *str)
{
	unsigned int	result;
	int				c;
	int				i;

	result = 0;
	c = 0;
	i = 0;
	while (str[i])
	{	
		if (str[i] == ' ' && c == 0)
			i++;
		else if (!(str[i] >= '0' && str[i] <= '9'))
		{
			result = -1;
			break ;
		}
		else if (str[i] && (str[i] >= '0' && str[i] <= '9'))
		{
			result = (result * 10) + (str[i] - '0');
			c = 1;
			i++;
		}		
	}
	return (result);
}

unsigned int	ft_nb_is_true(const char *str)
{
	unsigned int	result;
	int				c;

	result = 0;
	c = 0;
	if (str[c] == '\0')
		return (0);
	while (str[c])
	{
		if (str[c] >= '0' && str[c] <= '9')
		{
			result = (result * 10) + (*str - '0');
			c++;
		}
		else
		{
			result = ft_atoi_custom(str);
			break ;
		}	
	}
	return (result);
}

// int	main(void)
// {
// 	char	str[] = "-15223";

// 	char	result = ft_nb_is_true(str);
// 	if (result < 0)
// 		write(1, "Error\n", 7);
// 	else
// 		printf("%s\n", result);
// 	return (0);
// }
