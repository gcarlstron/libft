/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:36:25 by gpacheco          #+#    #+#             */
/*   Updated: 2021/08/23 17:45:57 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;
	char *p;

	p = 0;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while(i > 0 && s[i] != c)
		i--;
	if(s[i] == c)
		*p = *s+i;
	return p;
}