/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:01:15 by gpacheco          #+#    #+#             */
/*   Updated: 2021/09/27 16:24:02 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i + j <= len && haystack[i] != '\0')
	{
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		if (haystack[i + j] == needle[j])
		{
			j++;
		}
		else
		{
			j = 0;
			i++;
		}
	}
	if (needle[j] == '\0' && haystack[i] == needle[j])
		return ((char *)haystack + i - j);
	return (NULL);
}
