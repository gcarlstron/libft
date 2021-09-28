/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:57:27 by gpacheco          #+#    #+#             */
/*   Updated: 2021/09/27 17:42:12 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	trim(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*r;

	start = 0;
	end = ft_strlen((char *)s1);
	while (s1[start] != '\0' && trim(s1[start], (char *)set))
	{
		start++;
	}
	while (end > start && trim(s1[end - 1], (char *)set))
	{
		end--;
	}
	end = end - start;
	r = malloc(sizeof(char) * end + 1);
	if (!r)
		return (NULL);
	ft_strlcpy(r, ft_substr(s1, start, end), end + 1);
	return (r);
}
