/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 13:32:38 by gpacheco          #+#    #+#             */
/*   Updated: 2021/09/27 17:48:43 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	lenn(int n)
{
	int	len;

	len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static	void	ntostr(char *r, int l, int n)
{
	r[l] = '\0';
	if (n < 0)
	{
		while (--l)
		{
			r[l] = (n % 10) * -1 + '0';
			n /= 10;
		}
		r[l] = '-';
	}
	else
	{
		while (l--)
		{
			r[l] = (n % 10) + '0';
			n /= 10;
		}
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char	nbr[12];
	int		l;
	int		ng;

	ng = 0;
	if (n <= 0)
	{
		ng = 1;
	}
	l = lenn(n) + ng;
	ntostr(nbr, l, n);
	ft_putstr_fd(nbr, fd);
}
