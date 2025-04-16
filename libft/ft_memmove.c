/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linliu <linliu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:24:49 by linliu            #+#    #+#             */
/*   Updated: 2025/04/16 15:55:16 by linliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst > src)
	{
		while (len > 0)
		{
			*(char *)(dst + len) = *(const char *)(src + len);
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			*(char *)(dst + i) = *(const char *)(src + i);
			i++;
		}
	}
	return (dst);
}
