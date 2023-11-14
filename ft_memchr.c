/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:11:42 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/14 15:04:57 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		ch;
	size_t				i;

	ptr = s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == ch)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	const char	s[]= "qwertyuiop";

	printf("%s\n", (char *)ft_memchr(s, 't', 5));
	return (0);
} */