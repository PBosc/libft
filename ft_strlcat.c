/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibosc <pibosc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:17:47 by pibosc            #+#    #+#             */
/*   Updated: 2023/11/07 18:24:18 by pibosc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	dest_len;
	int	i;

	dest_len = 0;
	while (dst[dest_len])
		dest_len++;
	i = 0;
	while (i + dest_len < size - 1 && src[i])
	{
		dst[i + dest_len] = src[i];
		i++;
	}
	while (src[i])
		i++;
	return (dest_len + i);
}
