/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 17:23:25 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/02 19:42:40 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int main ()
// {
// 	int x;
// 	int y;
// 	x = 5;
// 	y = 8;
// 	ft_swap(&x, &y);
// 	printf("%d %d",  x , y);
// }