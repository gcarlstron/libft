/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:16:57 by gpacheco          #+#    #+#             */
/*   Updated: 2021/09/01 14:11:08 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp ( const char * str1, const char * str2, size_t num )
{
	size_t i;

	i = 0;
	if(num == 0)
		return (0);
	while(str1[i] != '\0' && str1[i] == str2[i] && i < num - 1)
	{
		i++;
	}
	return((unsigned char)str1[i] - (unsigned char)str2[i]);
}