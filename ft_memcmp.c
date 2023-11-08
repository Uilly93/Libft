/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:47:43 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/08 14:24:46 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*ptr1;
	const char	*ptr2;
	size_t		i;

	ptr1 = s1;
	ptr2 = s2;
	i = 0;
	while (i < n && ptr1[i] == ptr2[i])
	{
		i++;
	}
	return (ptr1[i] - ptr2[i]);
}

/* int	main(void)
{
	const char	*s1 = "0";
	const char	*s2 = "2";

	printf("%d\n", ft_memcmp(s1, s2, 1));
} */