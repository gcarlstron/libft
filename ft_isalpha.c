/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 11:53:08 by gpacheco          #+#    #+#             */
/*   Updated: 2021/08/20 12:00:55 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if(c >= 'A' && c <= 'Z')
		return (1);
	if(c >= 'a' && c <= 'z')
		return (2);
	return (0);
}
