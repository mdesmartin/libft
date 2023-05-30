/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesmart <mdesmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:44:31 by mvogel            #+#    #+#             */
/*   Updated: 2023/05/30 16:23:16 by mdesmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*u;
	const unsigned char	*d;

	u = s1;
	d = s2;
	while (n)
	{
		if (*u != *d)
			return (*u - *d);
		n--;
		u++;
		d++;
	}
	if (n)
		return (*u - *d);
	return (0);
}
