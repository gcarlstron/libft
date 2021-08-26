/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:16:57 by gpacheco          #+#    #+#             */
/*   Updated: 2021/08/26 14:55:53 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp ( const char * str1, const char * str2, size_t num )
{
	int	i;
	int j;

	j = 0;
	i = 0;
	while (str1[i] != '\0')
	{
		if(str1[i] == str2[j])
		{
			if(j < num-1)
				j++;
			else
				return (0);
		}
		else
			j = 0;
		i++;
	}
return (1);
}