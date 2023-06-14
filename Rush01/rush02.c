/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:08:15 by egeraldo          #+#    #+#             */
/*   Updated: 2023/05/27 20:00:25 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y);

void	retangle_ends(int x, int y, int y_count)
{
	int	x_count;

	x_count = 1;
	if (y_count == 1 || y_count == y)
	{
		while (x_count <= x)
		{
			if (y_count == 1 && (x_count == 1 || x_count == x))
			{
				ft_putchar('A');
			}
			else if (y_count == y && (x_count == 1 || x_count == x))
			{
				ft_putchar('C');
			}
			else
			{
				ft_putchar('B');
			}
			x_count++;
		}
		x_count = 1;
		ft_putchar('\n');
	}
}

void	middle_rectangle(int x, int y, int y_count)
{
	int	x_count;

	x_count = 1;
	if (y_count != 1 && y_count != y)
	{
		while (x_count <= x)
		{
			if (x_count == 1 || x_count == x)
			{
				ft_putchar('B');
			}
			else
			{
				ft_putchar(' ');
			}
			x_count++;
		}
		x_count = 1;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	y_count;

	y_count = 1;
	while (y_count <= y)
	{
		retangle_ends(x, y, y_count);
		middle_rectangle(x, y, y_count);
		y_count++;
	}
}
