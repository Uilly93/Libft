/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:12:07 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/09 16:23:45 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*joined;

	i = 0;
	j = 0;
	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	joined = malloc(sizeof(char) * (size + 1));
	if (joined == NULL)
		return (NULL);
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		joined[j + i] = s2[j];
		j++;
	}
	joined[i + j] = '\0';
	return (joined);
}

/* int main(void)
{
	const char	src;
	char		dst[] = "je n'aime pas les pates ";
	char		*joined;

	joined = ft_strjoin(NULL, dst);
	printf("%s\n", joined);
	free(joined);
} */