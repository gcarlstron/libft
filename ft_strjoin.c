/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 16:40:06 by gpacheco          #+#    #+#             */
/*   Updated: 2021/09/13 17:56:45 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	int		size1;
	int		size2;

	size1 = ft_strlen((char *)s1);
	size2 = ft_strlen((char *)s2);
	r = malloc(size1 + size2 + 1);
	if (!r)
		return (NULL);
	ft_strlcpy(r, s1, size1 + 1);
	ft_strlcpy(r + size1, s2, size2 + 1);
	return (r);
}
