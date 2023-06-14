/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:50:45 by namoreir          #+#    #+#             */
/*   Updated: 2023/06/12 14:34:47 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# define DICT "./numbers.dict"
# define BUFF_SIZE 1000

# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

void			ft_find_nb(char *buffer, char *to_find);
char			*read_dict(char *buffer);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	ft_strlen(char *str);
int	ft_str_is_alpha(char *str);
char	*ft_strstr(char *buffer, char *to_find);
int	ft_atoi_custom(const char *str);
int	ft_nb_is_true(const char *str);
void	print_number(int size, char *number, char *buffer);
void	read_nbr(char *nbr_str, unsigned int nb);

#endif