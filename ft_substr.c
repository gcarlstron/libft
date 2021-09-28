/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:30:56 by gpacheco          #+#    #+#             */
/*   Updated: 2021/09/27 14:52:10 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;

	r = malloc(sizeof(char) * len + 1);
	if (ft_strlen((char *)s) < start)
	{
		r[0] = '\0';
		return (r);
	}
	if (!r)
		return (NULL);
	i = 0;
	while (i < len && (s + start)[i])
	{
		r[i] = (s + start)[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
