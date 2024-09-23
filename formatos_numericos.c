/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatos_numericos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgalvez- <fgalvez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:33:57 by fgalvez-          #+#    #+#             */
/*   Updated: 2024/07/07 22:08:31 by fgalvez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)//d o i
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		count += ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	else
	{
		count += ft_putchar(n + '0');
	}
	return (count);
}

int	ft_putnbr_unsigned(unsigned int n)//u
{
	int	count;

	count = 0;
	if (n > 9)
	{
		count += ft_putnbr_unsigned(n / 10);
		count += ft_putnbr_unsigned(n % 10);
	}
	else
	{
		count += ft_putchar(n + '0');
	}
	return (count);
}

int	ft_putnbr16(unsigned long n, int uppercase)//x o X
{
	char	*hex_digits;
	int		count;

	count = 0;
	if (uppercase == 1)
	{
		hex_digits = "0123456789ABCDEF";
	}
	else
	{
		hex_digits = "0123456789abcdef";
	}
	if (n >= 16)
	{
		count += ft_putnbr16(n / 16, uppercase);
		count += ft_putnbr16(n % 16, uppercase);
	}
	else
	{
		count += ft_putchar(hex_digits[n]);
	}
	return (count);
}
