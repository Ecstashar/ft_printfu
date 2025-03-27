/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skumar <skumar@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 02:38:06 by skumar            #+#    #+#             */
/*   Updated: 2025/03/28 02:39:06 by skumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_putnbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_unsigned_putnbr(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}
