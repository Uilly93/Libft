/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:23:48 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/09 17:36:45 by wnocchi          ###   ########.fr       */
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
	if (start > size || len > size)
		return (NULL);
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == 0)
		return (NULL);
	while (i < len && s[start + i] != 0)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* int main(void)
{
	char	ptr[] = "123456789";
	char	*dest;

	dest = ft_substr(ptr, 2, 6);
	printf("%s\n", dest);
	free(dest);
} */