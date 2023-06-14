/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_nb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaldas- <fcaldas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:41:25 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/11 21:07:20 by fcaldas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rush02.h"

void	ft_find_nb(char	*buffer, char *to_find)
{
	char				*line;
	unsigned int		size;
	char				*word;

	line = ft_strstr(buffer, to_find);
	if (!(ft_str_is_alpha(line)))
		line++;
	size = ft_strlen(line);
	word = malloc(size + 1);
	ft_strlcpy(word, line, size + 1);
	write(1, word, size);
	free (word);
}
