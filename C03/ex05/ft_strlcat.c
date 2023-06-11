/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:13:46 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/09 16:19:07 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	dst_len;
	unsigned int	src_len;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	c = 0;
	if (size > dst_len + 1)
	{
		while (src[c] != '\0' && dst_len + 1 + c < size)
		{
			dest[dst_len + c] = src[c];
			c++;
		}
	}
	dest[dst_len + c] = '\0';
	if (size < dst_len)
		return (size + src_len);
	else
		return (dst_len + src_len);
}
// #include <stdio.h>
// #include <bsd/string.h>

// int main()
// {	char dest[11]= "Hello";
// 	char src[6]= " Word";
// 	char dest2[11]= "Hello";
// 	char src2[6]= " Word";
// 	unsigned int size = 11;
// 	printf("String original: %s\n", dest);
// 	printf("String a ser concatenada: %s\n", src);
// 	unsigned int result = ft_strlcat(dest, src, size);
// 	printf("String resultante: %s\n", dest);
// 	printf("Comprimento total: %u\n", result);
// 	unsigned int result2 = strlcat(dest2, src2, size);
// 	printf("comprimento total: %u\n", result2);
// 	return(0);
// }