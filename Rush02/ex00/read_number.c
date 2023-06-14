/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 18:32:34 by fcaldas-          #+#    #+#             */
/*   Updated: 2023/06/11 21:47:46 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

void	read_nbr(char *nbr_str, unsigned int nb)
{
	int		length;

	length = 0;
	while (nb != 0)
	{
		nbr_str[length] = '0' + (nb % 10);
		nb /= 10;
		length++;
	}
	nbr_str[length] = '\0';
}

// int	main(void)
// {
// 	char	result[13];
// 	int		nbr;
// 	int		size;

// 	nbr = 12345;
// 	read_nbr(result, nbr);
// 	size = ft_strlen(result);
// 	printf("numero lido: %s\n", result);
// 	printf("temos %d numeros\n", size);
// }
