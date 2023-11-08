/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:07:46 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/08 11:41:14 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*ptr;
	char		*ptr2;

	i = n;
	ptr = src;
	ptr2 = dest;
	while (i > 0)
	{
		ptr2[i - 1] = ptr[i - 1];
		i--;
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	//char		dest[5];
	//const char	src[] = "1234";
	char		dest2[5];
	const char	src2[] = "12345678910";

	//memmove(dest, src, 10);
	ft_memmove(dest2, src2, 10);
	printf("%s\n", dest2);
	//printf("%s\n", dest);
} */