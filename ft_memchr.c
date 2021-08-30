/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 12:48:34 by gpacheco          #+#    #+#             */
/*   Updated: 2021/08/30 13:47:51 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
void	*memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char ch;
	
	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while(n--)
	{
		if (*str++ == ch)
			return (str);
	}
	return (NULL);
}