/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:31:03 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/14 15:59:01 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + i));
	while (i-- > 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = "tripouille";

// 	printf("%s\n", ft_strrchr(s, 'z'));
// 	return (0);
// }
