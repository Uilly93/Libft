/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 09:11:44 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/14 16:38:15 by wnocchi          ###   ########.fr       */
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
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(s1) - 1;
	k = 0;
	while (s1[i] && ft_skip(s1[i], set) == 1)
		i++;
	while (j > 0 && ft_skip(s1[j], set) == 1)
	{
		j--;
		k++;
	}
	return (ft_substr(s1, i, ft_strlen(s1) - k - i));
}

// int main(void)
// {
// 	char	s1[] = " vb vb vb salut vb bv bvvb ";
// 	char	set[] = " vb";
// 	char	*str;

// 	str = ft_strtrim(s1, set);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }
