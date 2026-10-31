/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 07:37:15 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/08/07 07:40:30 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hex(unsigned long long n, int digits, int is_addr)
{
	char	*hex;
	char	buf[16];
	int		i;

	hex = "0123456789abcdef";
	i = digits;
	while (i > 0)
	{
		i--;
		buf[i] = hex[n % 16];
		n /= 16;
	}
	i = 0;
	while (i < digits)
	{
		ft_putchar(buf[i]);
		i++;
	}
	if (is_addr)
		write(1, ": ", 2);
}

void	ft_print_row(unsigned char *ptr, unsigned int rem)
{
	unsigned int	j;

	j = 0;
	while (j < 16)
	{
		if (j < rem)
		{
			ft_put_hex(ptr[j], 2, 0);
			if (j % 2 != 0)
				ft_putchar(' ');
		}
		else
			write(1, "   ", 3);
		j++;
	}
	j = 0;
	while (j < rem)
	{
		if (ptr[j] >= 32 && ptr[j] <= 126)
			ft_putchar(ptr[j]);
		else
			ft_putchar('.');
		j++;
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	rem;
	unsigned char	*ptr;

	if (size == 0)
		return (addr);
	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		if (size - i < 16)
			rem = size - i;
		else
			rem = 16;
		ft_put_hex((unsigned long long)(ptr + i), 16, 1);
		ft_print_row(ptr + i, rem);
		i += 16;
	}
	return (addr);
}
