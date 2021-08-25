/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:43:52 by gpacheco          #+#    #+#             */
/*   Updated: 2021/08/25 12:16:54 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strchr(const char *s, int c)
{
	int i;
	char *p;
	
	p = NULL;
	i = 0;
	while(s[i] != '\0' && s[i] != c)
		i++;
	if(s[i] == c)
		p = (char *)s+i;
	return (p);
}

