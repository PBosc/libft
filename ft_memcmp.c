/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Pbosc <pbosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:24:51 by pibosc            #+#    #+#             */
/*   Updated: 2023/11/09 13:02:58 by Pbosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(unsigned char *)(s1 + i)
		&& *(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i) && i < n)
		i++;
	if (i < n && *(unsigned char *)(s1 + i))
		return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
	return (0);
}
