/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvidal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:59:52 by mvidal            #+#    #+#             */
/*   Updated: 2024/05/15 12:21:34 by mvidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *grand, const char *petit, size_t len)
{
	size_t	n;

	if (*petit == 0)
		return ((char *)grand);
	n = ft_strlen(petit);
	if (len == 0)
		return (0);
	while (*grand && n <= len)
	{
		if (*grand == *petit && ft_strncmp(grand, petit, n) == 0)
			return ((char *)grand);
		++grand;
		--len;
	}
	return (NULL);
}
