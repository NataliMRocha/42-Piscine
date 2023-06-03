/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 18:55:52 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/02 19:42:47 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main()
// {
// 	int a;
// 	int b;
// 	int c;
// 	int d;
// 	int *pc = &c;
// 	int *pd = &d;

// 	a = 2;
// 	b = 5;
// 	ft_div_mod(a, b, &c, &d);
// }