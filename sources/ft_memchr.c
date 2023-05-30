/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesmart <mdesmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:39:42 by mvogel            #+#    #+#             */
/*   Updated: 2023/05/30 16:23:14 by mdesmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long		a;
	const unsigned char	*cp_s;

	cp_s = s;
	a = 0;
	while (a < n)
	{
		if (cp_s[a] == (unsigned char)c)
			return ((unsigned char *)s + a);
		a++;
	}
	return (NULL);
}
