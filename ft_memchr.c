/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 12:48:34 by gpacheco          #+#    #+#             */
/*   Updated: 2021/09/01 13:48:27 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
void	*memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char ch;
	size_t i;
	
	str = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while(i < n)
	{
		if (str[i] == ch)
			return (str+i);
		i++
	}
	return (NULL);
}