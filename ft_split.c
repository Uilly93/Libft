/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:49:24 by uilly             #+#    #+#             */
/*   Updated: 2023/11/13 16:56:39 by wnocchi          ###   ########.fr       */
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


char **ft_split(char const *s, char c)
{
	char	**ptrs;
	size_t	i;

	i = 0;
	ptrs = malloc(sizeof(char *) * count_word(s, c) + 2);
	if (!ptrs)
		return (NULL);
	while (*s)
	{
		if ((*s != c || *s == '\0'))
		{
			ptrs[i] = cpy_words(s, c);
			//printf("%s\n", ptrs[i]);
			//printf("%zu\n", ft_strlen(ptrs[i]));
			s += ft_strlen(ptrs[i]);
			i++;
		}
		s++;
	}
	ptrs[i] = NULL;
	return (ptrs);
}


int main (void)
{
	char s1[] = "             123456 2 3 4        55 6666  7777 ";
	char **ptrs;
	int i = 0;
	
	printf("nombre de mots :%d\n", count_word(s1, ' '));
	ptrs = ft_split(s1, ' ');
	while(ptrs[i])
	{
		printf("%s\n", ptrs[i]);
		i++;
	}
	// printf("mot copie :%s\n", cpy_words(s1, ' '));
	//free(ptrs);
}
