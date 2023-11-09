/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Pbosc <pbosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:18:15 by pibosc            #+#    #+#             */
/*   Updated: 2023/11/09 13:16:34 by Pbosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ret;
	size_t	i;

	ret = malloc(nmemb * size);
	if (!ret)
		return (NULL);
	ret[0] = 0;
	while (i < (nmemb * size))
		ret[i++] = 0;
	return (ret);
}
