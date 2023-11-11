/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:49:24 by uilly             #+#    #+#             */
/*   Updated: 2023/11/11 23:20:24 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int count_words(const char *s, char c)
// {
// 	int i;

// 	i = 0;
// 	while (s[i])
// 	{
// 		if
// 	}
// }

char    **ft_split(char const *s, char c)
{
	char	**ptrs;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	ptrs = malloc(sizeof(char *) * 4 + 1);
	printf("1");
	while (s[i])
	{
		printf("2");
		ptrs[j] = malloc(sizeof(char) * 10);
		while(s[i] != c)
		{
			ptrs[j][k] = s[i];
			k++;
			printf("3");
		}
		j++;
		printf("4");
	}
	return(ptrs);
}
// bonjour les amis yo
//  ptrs[1]
// bonjour
// les
// amis
// yo
int main (void)
{
	char s1[] = "bonjour les amis yo";
	int i;
	int j;
	char **ptrs;
	
	i = 0;
	j = 0;
	printf("5");
	ptrs = ft_split(s1, ' ');
	while (ptrs[i][j])
	{
		printf("6");
		while (ptrs[i][j])
		{
			printf("7");
			printf("%c", ptrs[i][j]);
			j++;
		}
		i++;
		printf("8");
	}
	
}