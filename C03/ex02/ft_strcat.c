/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:26:51 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/09 16:38:14 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[c + i] = src[i];
		i++;
	}
	dest[c + i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest[5] = "Nat";
// 	char	src[] = "_mo";
// 	ft_strcat(dest, src);
// 	printf("String final: %s", dest);
// }