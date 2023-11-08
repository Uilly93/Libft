/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:27:22 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/08 17:19:56 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	if (nmemb == 0 || size == 0 || size * nmemb > 32767)
		return (NULL);
	ptr = (char *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	return ((void *)ptr);
}