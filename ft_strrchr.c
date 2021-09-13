/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:36:25 by gpacheco          #+#    #+#             */
/*   Updated: 2021/09/13 13:08:52 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	p = NULL;
	i = ft_strlen((char *)s);
	while (i > 0 && s[i] != c)
		i--;
	if (s[i] == c)
		p = (char *)s + i;
	return (p);
}
