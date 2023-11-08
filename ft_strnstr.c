/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibosc <pibosc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:29:22 by pibosc            #+#    #+#             */
/*   Updated: 2023/11/08 18:36:53 by pibosc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
	int	l_len;

	i = 0;
	l_len = 0;
	while (little[l_len])
		l_len++;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len && little[j])
			j++;
		if (j == l_len)
			return (big + i);
		i++;
	}
	return (NULL);
}
