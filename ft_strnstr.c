/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:01:15 by gpacheco          #+#    #+#             */
/*   Updated: 2021/09/27 12:34:45 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i <= len)
	{
		if (needle[j] == '\0')
			return ((char *)haystack + i - j);
		if (haystack[i] == needle[j])
		{
			j++;
		}
		else
			j = 0;
		i++;
	}
	return (NULL);
}
