/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 09:46:07 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/08 17:43:45 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		c++;
	}
	return ((unsigned char) s1[c] - (unsigned char) s2[c]);
}

// #include <stdio.h>
// int main (void)
// {
// 	char a[] = "nati";
// 	char b[] = "náti";
// 	int result = ft_strcmp(a, b);
// 	printf("%d", result);
// }