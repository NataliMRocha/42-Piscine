/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 21:40:04 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/11 22:03:04 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

void	check_mil(int size, char *buffer)
{
	if (size == 9)
		ft_find_nb(buffer, "1000000000");
	if (size == 6)
		ft_find_nb(buffer, "1000000");
	if (size == 3)
		ft_find_nb(buffer, "1000");
}

int	check_teenth(int size, char *number, char *buffer)
{
	char	temp;

	if (size == 2 && number[1] == 1
		&& number[0] >= 1 && number[0] <= 9)
	{
		temp = number[0];
		number[0] = number[1];
		number[1] = temp;
		ft_find_nb(buffer, number);
		size = 0;
		return (0);
	}
	return (1);
}

void	check_dozens(int size, char *number, char *buffer)
{
	char	temp;

	if (size == 2 && number[0] == 0)
	{
		temp = number[0];
		number[0] = number[1];
		number[1] = temp;
		ft_find_nb(buffer, number);
		size = 0;
	}
}

void	print_number(int size, char *number, char *buffer)
{
	int		end;

	end = 0;
	while (size > 0)
	{
		end = check_teenth(size, number, buffer);
		check_dozens(size, number, buffer);
		size--;
		if (end == 1)
			write(1, " ", 1);
		check_mil(size, buffer);
		if (end == 1)
			write(1, " ", 1);
	}
	write(1, "\n", 1);
}
		// auto_print(size, number, buffer);