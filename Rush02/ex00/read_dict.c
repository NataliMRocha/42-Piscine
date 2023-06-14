/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:04:11 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/11 21:59:53 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

char	*read_dict(char *buffer)
{
	int	file;
	int	read_byte;

	file = open(DICT, O_RDONLY);
	read_byte = read(file, buffer, BUFF_SIZE);
	buffer[read_byte + 1] = '\0';
	close(file);
	return (buffer);
}
