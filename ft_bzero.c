/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:14:15 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/15 14:45:48 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *) s + i) = 0;
		i++;
	}
}

/* #include <string.h>
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	char	mem[5] = "12345";
	//char	mem2[5] = "12345";
	int	i;
	
	i = 0;
	ft_bzero(mem, 5);
	//bzero(mem2, 5);
	//ft_memset(mem2, 430, 20);
	//memset(mem, '0', 20);
	//ft_memset(NULL, '0', 20);
	while(i < 5)
	{
		printf("%d", mem[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while(i < 5)
	{
		printf("%d", mem2[i]);
		i++;
	}
	printf("\n");
	return (0);
} */