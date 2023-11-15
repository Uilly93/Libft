/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:14:49 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/15 17:15:26 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && (s1[i] || s2[i]) && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] < s2[i])
		return (-1);
	if (s1[i] > s2[i])
		return (1);
	return (0);
}

/* #include<stdio.h>

int	main(void)
{
	const char	*s1 = "1";
	const char	*s2 = "1";

	printf("%d\n", ft_strncmp(s1, s2, 1));
} */