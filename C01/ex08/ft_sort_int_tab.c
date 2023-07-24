/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:36:47 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/05 14:07:13 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	temp;

	while (size >= 0)
	{
		c = 0;
		while (c < size - 1)
		{
			if (tab[c] > tab[c + 1])
			{
				temp = tab[c];
				tab[c] = tab[c + 1];
				tab[c + 1] = temp;
			}
			c++;
		}
		size--;
	}
}
// #include <stdio.h>
// int	main(void)
// {
// 	int tab[6] = {7, 6, 3, 4, 2, 5};
// 	int size = 6;

// 	ft_sort_int_tab(tab, size);
// 	printf("%d, %d, %d, %d, %d, %d", 
// 	tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
// }