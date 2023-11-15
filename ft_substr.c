/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:23:48 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/15 17:00:11 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	size;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start > size)
		return (ft_strdup(""));
	if (start + len > size)
		len = size - start;
	ptr = ft_calloc((len + 1), sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < len && s[start + i] != 0)
	{
		ptr[i] = s[start + i];
		i++;
	}
	return (ptr);
}

// int main(void)
// {
// 	char * s = ft_substr("tripouille", 0, 42000);

// 	dest = ft_substr("Hello world!", 6, 30);
// 	printf("%s\n", dest);
// }