/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:20:52 by gpacheco          #+#    #+#             */
/*   Updated: 2021/09/27 17:42:13 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	destlen(char *dest, size_t size)
{
	size_t	i;

	i = 0;
	while (dest[i] != '\0' && i < size)
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	i = destlen(d, dsize);
	j = 0;
	if (i < dsize)
	{
		while (i + j < dsize - 1 && src[j])
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(s));
}
