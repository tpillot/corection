/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_join.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myener <myener@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 17:31:04 by myener            #+#    #+#             */
/*   Updated: 2020/08/02 20:14:46 by myener           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_free_join(const char *s1, const char *s2)
{
	char *dst;

	dst = ft_strjoin2(s1, s2);
	ft_strdel((char **)&s1);
	return (dst);
}
