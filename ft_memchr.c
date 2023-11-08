/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibosc <pibosc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:13:40 by pibosc            #+#    #+#             */
/*   Updated: 2023/11/07 18:23:29 by pibosc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n && *(unsigned char *)(s + i) != c)
		i++;
	if (*(unsigned char *)(s + i) == c)
		return (s + i);
	return (NULL);
}
