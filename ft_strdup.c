/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibosc <pibosc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:25:46 by pibosc            #+#    #+#             */
/*   Updated: 2023/11/08 19:33:09 by pibosc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*strdup(const char *s)
{
	int		len;
	char	*dup;
	int		i;

	len = 0;
	while (s[len])
		len++;
	dup = malloc(len);
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
