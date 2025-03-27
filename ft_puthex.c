/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skumar <skumar@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 02:37:52 by skumar            #+#    #+#             */
/*   Updated: 2025/03/28 02:39:01 by skumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char specifier)
{
	char	*hex_lower;
	char	*hex_upper;
	int		count;

	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	count = 0;
	if (n > 15)
		count += ft_puthex(n / 16, specifier);
	if (specifier == 'x')
		count += ft_putchar(hex_lower[n % 16]);
	else
		count += ft_putchar(hex_upper[n % 16]);
	return (count);
}
