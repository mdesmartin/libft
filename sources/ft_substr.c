/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesmart <mdesmart@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:22:16 by mvogel            #+#    #+#             */
/*   Updated: 2023/05/30 16:26:25 by mdesmart         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!(s))
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		len = 0;
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (!(str))
		return (NULL);
	if (start >= ft_strlen(s))
	{
		*str = '\0';
		return (str);
	}
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
