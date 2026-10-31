/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 22:48:21 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/08/06 22:49:27 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *tab, int n)
{
	int	i;
	int	is_max;

	i = 0;
	is_max = 1;
	while (i < n)
	{
		if (tab[i] != (10 - n + i) + '0')
			is_max = 0;
		i++;
	}
	write(1, tab, n);
	if (!is_max)
		write(1, ", ", 2);
}

void	ft_combn_rec(int n, int index, int current_digit, char *tab)
{
	if (index == n)
	{
		ft_print(tab, n);
		return ;
	}
	while (current_digit <= 9)
	{
		tab[index] = current_digit + '0';
		ft_combn_rec(n, index + 1, current_digit + 1, tab);
		current_digit++;
	}
}

void	ft_print_combn(int n)
{
	char	tab[10];

	if (n <= 0 || n >= 10)
		return ;
	ft_combn_rec(n, 0, 0, tab);
}
