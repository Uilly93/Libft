/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:31:04 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/14 16:07:39 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)(big));
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j] && big[i + j] != '\0')
		{
			j++;
			if (j == ft_strlen(little))
				return ((char *)(big) + i);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	t1[]= "je n'aime pas les pates au pesto";
// 	char	t2[]= "les";
// 	printf("%s\n", ft_strnstr(t1, t2, 30));
// }