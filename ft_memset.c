/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:42:22 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/10 11:26:44 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

/* #include <string.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	mem[20];
	//char	mem2[20];
	int		i;
	
	i = 0;
	ft_memset(mem, 0, 20);
	//ft_memset(mem2, 430, 20);
	//memset(mem, '0', 20);
//	ft_memset(NULL, '0', 20);
	while(i < 20)
	{
		printf("%d", mem[i]);
		i++;
	}
	//i = 0;
	printf("\n");
	while(i < 20)
	{
		printf("%d", mem2[i]);
		i++;
	}
	printf("\n");
	return (0);
} */