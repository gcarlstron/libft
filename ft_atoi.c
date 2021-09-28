/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpacheco <gpacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:30:59 by gpacheco          #+#    #+#             */
/*   Updated: 2021/09/27 15:47:07 by gpacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace(char c)
{
	if (c == ' '
		|| c == '\n'
		|| c == '\t'
		|| c == '\r'
		|| c == '\f'
		|| c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long	num;
	int			s;

	num = 0;
	s = 1;
	while (isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			s = -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	num *= s;
	return (num);
}
