/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:43:52 by gpacheco          #+#    #+#             */
/*   Updated: 2021/08/23 16:39:19 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while(s[i] != '\0' && s[i] != c)
		i++;
	if(s[i] == c)
		return &s[i];
	return 0;
}