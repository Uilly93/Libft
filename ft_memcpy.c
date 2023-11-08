/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:14:18 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/06 16:07:21 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ptr;
	const char	*ptr2;

	ptr2 = src;
	ptr = dest;
	i = 0;
	while (i < n)
	{
		ptr[i] = ptr2[i];
		i++;
	}
	return (dest);
}
/* 
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char		dest[5];
	const char	src[5] = "12345";
	char		dest2[5];
	const char	src2[5] = "12345";

	memcpy(dest2, src2, 5);
	ft_memcpy(dest2, src2, 5);
	printf("%s\n", dest2);
	printf("%s\n", dest);
} */