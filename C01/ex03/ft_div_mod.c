/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:55:52 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/08 15:33:34 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	nb1;
// 	int	nb2;
// 	int	nb3;
// 	int	nb4;
// 	nb1 = 857;
// 	nb2 = 10;
// 	ft_div_mod(nb1, nb2, &nb4, &nb3);
// 	printf("%d %d", nb3, nb4);
// }
