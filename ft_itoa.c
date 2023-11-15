/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:26:50 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/15 13:32:07 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	mall_count(int n)
{
	long int	count;
	long int	nbr;

	nbr = n;
	count = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}	
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count + 1);
}

static void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static void	ft_rev_int_tab(char *tab)
{
	int	first;
	int	last;

	first = 0;
	last = ft_strlen(tab) - 1;
	while (first < last)
	{
		if (tab[first] == '-')
			first++;
		ft_swap(&tab[first], &tab[last]);
		first++;
		last--;
	}
}

char	*ft_itoa(int n)
{
	long int	nb;
	char		*ptr;
	size_t		i;

	i = 0;
	nb = n;
	if (n == 0)
		return (ft_strdup("0"));
	ptr = ft_calloc(1, mall_count(n));
	if (!ptr)
		return (NULL);
	if (nb < 0)
	{
		nb *= -1;
		ptr[0] = '-';
		i++;
	}
	while (nb > 0)
	{
		ptr[i++] = (nb % 10) + 48;
		nb /= 10;
	}
	ft_rev_int_tab(ptr);
	return (ptr);
}

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	printf("%s\n", ft_itoa(i));
// 	i = -42;
// 	printf("%s\n", ft_itoa(i));
// 	i = 2147483647;
// 	printf("%s\n", ft_itoa(i));
// 	i = -2147483648;
// 	printf("%s\n", ft_itoa(i));
// 	i = 42;
// 	printf("%s\n", ft_itoa(i));
// }
