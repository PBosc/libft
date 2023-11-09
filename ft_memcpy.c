/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Pbosc <pbosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:13:54 by pibosc            #+#    #+#             */
/*   Updated: 2023/11/09 13:03:02 by Pbosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_d;
	unsigned char	*tmp_s;

	tmp_d = dest;
	tmp_s = src;
	while (n)
	{
		tmp_d[n - 1] = (unsigned char) tmp_s[n - 1];
		n--;
	}
	return (dest);
}
