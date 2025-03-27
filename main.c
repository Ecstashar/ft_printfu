/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skumar <skumar@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 02:38:09 by skumar            #+#    #+#             */
/*   Updated: 2025/03/28 02:39:08 by skumar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("Hello, %s!\n", "World");
	ft_printf("Character: %c\n", 'A');
	ft_printf("Decimal: %d\n", 42);
	ft_printf("Unsigned: %u\n", 123456);
	ft_printf("Hex lowercase: %x\n", 255);
	ft_printf("Hex uppercase: %X\n", 255);
	ft_printf("Pointer: %p\n", main);
	ft_printf("Percent: %%\n");
	return (0);
}
