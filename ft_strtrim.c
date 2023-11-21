/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:11:44 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/20 16:14:14 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_skip(char c, char const *charset)
{
	size_t	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	size_t	count;

	if (!s1)
		return (NULL);
	start = 0;
	len = ft_strlen(s1) - 1;
	count = 0;
	if (!set)
		return ((char *)s1);
	while (s1[start] && ft_skip(s1[start], set) == 1)
		start++;
	while (len > 0 && ft_skip(s1[len], set) == 1)
	{
		len--;
		count++;
	}
	if (((ft_strlen(s1)) - count == 0) || (s1[start] == '\0'))
		return (ft_strdup(""));
	return (ft_substr(s1, start, (ft_strlen(s1)) - count - start));
}

// int main(void)
// {
// 	char *s = ft_strtrim("   xxxtripouille   xxx", " x");

// 	printf("%s\n", s);
// 	return (0);
// }
