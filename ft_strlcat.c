/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:09:03 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/21 11:25:39 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	sizedest;
	size_t	sizesrc;
	size_t	i;

	if (size == 0 || ft_strlen(dest) > size)
		return (ft_strlen(src) + size);
	sizesrc = ft_strlen(src);
	sizedest = ft_strlen(dest);
	i = 0;
	while (src[i] && (sizedest + i < size - 1))
	{
		dest[sizedest + i] = src[i];
		i++;
	}
	dest[sizedest + i] = '\0';
	return (sizedest + sizesrc);
}

/* #include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	const char	src[] = "au pesto";
	char		dst[] = "je n'aime pas les pates ";
	
	printf("%zu\n", strlcat(dst, src, 9));
	printf("%zu\n", ft_strlcat(dst, src, 9));
} */
