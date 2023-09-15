/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:45:05 by namoreir          #+#    #+#             */
/*   Updated: 2023/09/11 18:33:49 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	counter;

	counter = 0;
	while (counter < size / 2)
	{
		tmp = tab[counter];
		tab[counter] = tab[(size - 1) - counter];
		tab[size - counter - 1] = tmp;
		counter++;
	}
}

#include <stdio.h>
int	main(void)
{
	int arr[] = {-10, 7, 5, 42, 8};
	ft_rev_int_tab(arr, 5);

	for(int i = 0; i < 5; i++)
	{
		printf("%d, ", arr[i]);
	}
}
