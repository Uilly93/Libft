/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:49:24 by uilly             #+#    #+#             */
/*   Updated: 2023/11/14 11:58:19 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*cpy_words(const char *str, char c)
{
	size_t	count;
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	count = 0;
	if (!str)
		return (NULL);
	while (str[i] && str[i] == c)
	{
		i++;
		j++;
	}
	while (str[j] && str[j] != c)
	{
		count++;
		j++;
	}
	ptr = ft_substr(str, i, count);
	return (ptr);
}


static int	count_word(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] == c)
		i++;
	while (str[i])
	{
		if ((str[i] == c && str[i + 1] != c) || (str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

void	ft_free(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**ptrs;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	ptrs = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!ptrs)
		return (NULL);
	while (*s)
	{
		if ((*s != c || *s == '\0'))
		{
			ptrs[i] = cpy_words(s, c);
			if (ptrs[i] == NULL)
				ft_free(ptrs);
			s = s + ft_strlen(ptrs[i] + 1);
			i++;
		}
		s++;
	}
	ptrs[i] = NULL;
	return (ptrs);
}


// int main (void)
// {
// 	// char s1[] = " 1 ";
// 	char **ptrs;
// 	int i = 0;

// 	ptrs = ft_split(NULL , ' ');
// 	if (!ptrs)
// 		return (0);
// 	while (ptrs[i])
// 	{
// 		printf("%s\n", ptrs[i]);
// 		i++;
// 	}
// 	ptrs[i] = NULL;
// 	ft_free(ptrs);
// }
