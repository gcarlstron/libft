/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 13:30:56 by gpacheco          #+#    #+#             */
/*   Updated: 2021/09/13 16:38:42 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;

	r = malloc(sizeof(char) * len + 1);
	if (!r)
		return (NULL);
	ft_strlcpy(r, s + start, len + 1);
	return (r);
}
