/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Pbosc <pbosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:25:46 by pibosc            #+#    #+#             */
/*   Updated: 2023/11/09 21:48:33 by Pbosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tmp;
	int		i;

	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		tmp[i] = s[i];
		++i;
	}
	tmp[i] = '\0';
	return (tmp);
}
