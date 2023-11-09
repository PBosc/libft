/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibosc <pibosc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:17:47 by pibosc            #+#    #+#             */
/*   Updated: 2023/11/09 19:51:17 by pibosc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	i;

	dest_len = 0;
	while (dst[dest_len] && dest_len < size)
		dest_len++;
	i = 0;
	while (i + dest_len + 1 < size && src[i])
	{
		dst[i + dest_len] = src[i];
		i++;
	}
	while (src[i])
		i++;
	if (size)
		dst[i + dest_len] = 0;
	return (dest_len + i);
}
