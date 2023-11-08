/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wnocchi <wnocchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:35:07 by wnocchi           #+#    #+#             */
/*   Updated: 2023/11/08 16:35:31 by wnocchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	//char		dest[5];
	//const char	src[5] = "12345";
	char		dest2[5];
	const char	src2[5] = "12345";

	//memcpy(dest2, src2, 5);
	ft_memcpy(dest2, src2, 5);
	printf("%s\n", dest2);
	printf("%zu\n", ft_strlen(dest2));

	//printf("%s\n", dest);
}