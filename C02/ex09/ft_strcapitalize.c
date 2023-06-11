/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:23:35 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/06 19:17:41 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{	
	int	i;
	int	j;

	if (str[0] >= 'a' && str[0] <= 'z')
	{	
		str [0] = str[0] - 32;
	}
	i = 1;
	j = 0;
	while (str[i] != '\0')
	{
		if (!((str[j] >= 'a' && str[j] <= 'z')
				|| (str[j] >= 'A' && str[j] <= 'Z')
				|| (str[j] >= '0' && str[j] <= '9')))
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
		j++;
	}
	return (str);
}

// #include <stdio.h>
// int		main()
// {
// 	char	str[] = "salut, comment tu vas ?";
// 	ft_strcapitalize(str);
// 	printf("%s\n", str);
// 	return (0);
// }