/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:12:49 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/09 16:34:31 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int	c;

	if (n == 0)
		return (0);
	c = 0;
	while ((c < n) && (s1[c] == s2[c])
		&& (s1[c] != '\0' && s2[c] != '\0') && (c < n - 1))
		c++;
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}

// #include <stdio.h>
// int main (void)
// {
// 	char a[] = "Natali";
// 	char b[] = "Natali";
// 	int result = ft_strncmp(a, b, 4);
// 	printf("%d", result);
// }