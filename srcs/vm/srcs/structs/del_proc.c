/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_proc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-yah <hben-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 09:05:49 by hben-yah          #+#    #+#             */
/*   Updated: 2020/07/28 12:22:10 by hben-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vm.h"

void	del_proc(t_proc **ps)
{
	t_proc *todel;

	if (ps && *ps)
	{
		todel = *ps;
		*ps = (*ps)->next;
		free(todel);
	}
}

void	del_proc_lst(t_proc **lst)
{
	if (lst)
		while (*lst)
			del_proc(lst);
}
