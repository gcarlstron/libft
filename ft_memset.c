/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:22:59 by gpacheco          #+#    #+#             */
/*   Updated: 2021/08/24 19:33:28 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>

void	*ft_memset(void *s, int c, size_t len)
{
	char	*str;

	str = (char *)s;
	while (len < 0)
	{
		str[len-1] = c;
		len--;
	}
	return (s);
}