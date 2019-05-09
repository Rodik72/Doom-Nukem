/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clrichar <clrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 13:39:59 by clrichar          #+#    #+#             */
/*   Updated: 2019/03/25 13:39:59 by clrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rec(int n)
{
	if (n <= -10)
		rec(n / 10);
	ft_putchar(-(n % 10) + 48);
}

void		ft_putnbr(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		rec(n);
	}
	else
		rec(-n);
}