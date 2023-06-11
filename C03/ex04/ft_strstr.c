/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:27:58 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/08 17:19:46 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	c;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		c = 0;
		while (str[c] == to_find[c] && to_find[c] != '\0')
			c++;
		if (to_find[c] == '\0')
			return (str);
	str++;
	}
	return ((void *) 0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Natali rocha";
// 	char	substr[] = "rocha";
// 	char *result = ft_strstr(str, substr);

// 	if (result != ((void *)0))
// 		printf("Substring encontrada: %s\n", substr);
// 	else
// 		printf("Substring não encontrada.\n");
// }