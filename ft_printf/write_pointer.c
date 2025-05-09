/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linliu <linliu@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 11:18:43 by linliu            #+#    #+#             */
/*   Updated: 2025/05/09 17:21:37 by linliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_pointer(unsigned long ptr, const char *hex)
{
	int	count;

	if (!ptr)
		return (write (1,"(nil)", 5));
	count = 0;
	count += write(1, "0x", 2);
	count += write_uint_hex(ptr, hex, 16);
	return (count);
}