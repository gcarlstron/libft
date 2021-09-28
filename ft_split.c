/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:50:03 by gpacheco          #+#    #+#             */
/*   Updated: 2021/09/27 17:42:15 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	countw(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static	char	*ndup(const char *s1, size_t n)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = (char *)malloc(sizeof(char) * n + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s1, n + 1);
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		end;
	char	**matrix;

	i = 0;
	end = 0;
	matrix = (char **)malloc(sizeof(char *) * (countw(s, c) + 1));
	if (!matrix)
		return (NULL);
	while (s[end])
	{
		while (s[end] == c)
			end++;
		start = end;
		while (s[end] && s[end] != c)
			end++;
		if (end > start)
		{
			matrix[i] = ndup(s + start, end - start);
			i++;
		}
	}
	matrix[i] = NULL;
	return (matrix);
}
