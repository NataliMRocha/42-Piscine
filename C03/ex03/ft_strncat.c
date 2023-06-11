/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:58:51 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/08 17:35:25 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	dest_size;
	int	src_size;

	dest_size = ft_strlen(dest);
	src_size = 0;
	while (src[src_size] != '\0' && nb > 0)
	{	
		dest[dest_size++] = src[src_size++];
		nb--;
	}
	dest[dest_size] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	str_size;

	str_size = 0;
	while (str[str_size] != '\0')
		str_size++;
	return (str_size);
}

// int	main(void)

// {
// 	char	dest[13] = "Natali";
// 	char	src[] = " Rocha";

// 	ft_strncat(dest, src, 3);
// 	printf("%s", dest);
// }