/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibosc <pibosc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:18:15 by pibosc            #+#    #+#             */
/*   Updated: 2023/11/08 19:27:20 by pibosc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*calloc(size_t nmemb, size_t size)
{
	char	*ret;

	ret = malloc(nmemb * size);
	if (!ret)
		return (NULL);
	while (nmemb - 1 >= 0)
	{
		ret[nmemb - 1] = 0;
		nmemb--;
	}
	return (ret);
}
