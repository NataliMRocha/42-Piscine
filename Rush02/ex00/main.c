/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:00:57 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/11 22:01:22 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

int	main(int argc, char **argv)
{
	unsigned int		result;
	char				buffer[BUFF_SIZE + 1];
	char				nbr_str[11];

	read_dict(buffer);
	if (argc < 2 || argc > 3)
		write(1, "Error\n", 7);
	result = ft_nb_is_true(argv[1]);
	read_nbr(nbr_str, result);
	print_number(ft_strlen(nbr_str), nbr_str, buffer);
	return (0);
}
