/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:10:00 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/05 14:03:32 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// #include <stdio.h>
// int main()
// {
// 	int first_nb = 50;
// 	int second_nb = 10;
// 	ft_ultimate_div_mod(&first_nb, &second_nb);
// 	printf("%d %d", first_nb, second_nb);
// }