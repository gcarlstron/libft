/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:41:37 by gpacheco          #+#    #+#             */
/*   Updated: 2021/09/27 12:34:44 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	if (dst || src)
	{
		i = 0;
		d = (char *)dst;
		s = (char *)src;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
