/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:14:18 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/21 10:18:42 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	char				*dest2;
	const unsigned char	*src2;

	if (!dest && !src)
		return ((void *)0);
	if (n != 0)
	{
		src2 = src;
		dest2 = dest;
		i = 0;
		while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	//char		dest[5];
// 	//const char	src[5] = "12345";
// 	char		dest2[5];
// 	const char	src2[5] = "12345";

// 	//memcpy(dest2, src2, 5);
// 	ft_memcpy(NULL, NULL, 3);
// 	// printf("%s\n", dest2);
// 	// printf("%zu\n", ft_strlen(dest2));

// 	//printf("%s\n", dest);
// }
