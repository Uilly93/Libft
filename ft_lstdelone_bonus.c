/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 11:08:17 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/17 13:57:01 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

// int main(void)
// {
// 	t_list *l =  ft_lstnew(malloc(1));
// 	ft_lstdelone(l, free); l = 0;
// }
