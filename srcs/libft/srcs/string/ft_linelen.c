/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linelen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myener <myener@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 18:12:18 by myener            #+#    #+#             */
/*   Updated: 2020/08/02 20:59:11 by myener           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_linelen(char *stock)
{
	int		i;

	i = 0;
	while (stock[i] != '\n' && stock[i])
		i++;
	return (i);
}
