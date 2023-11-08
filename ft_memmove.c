/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:07:46 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/06 17:02:26 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*ptr;
	char		*ptr2;

	i = n - 1;
	ptr = src;
	ptr2 = dest;
	while (i >= 0)
	{
		ptr2[i] = ptr[i];
		i--;
	}
	return (dest);
}
