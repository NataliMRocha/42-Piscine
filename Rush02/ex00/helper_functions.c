/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:25:07 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/11 19:31:01 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

char	*ft_strstr(char *buffer, char *to_find)
{
	int	c;

	while (*buffer)
	{
		c = 0;
		while (buffer[c] == to_find[c] && to_find[c] != '\0')
			c++;
		if (to_find[c] == '\0')
			return (buffer);
	buffer++;
	}
	return ((void *) 0);
}

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{
		i ++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		while (src[i] != '\0')
		i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
