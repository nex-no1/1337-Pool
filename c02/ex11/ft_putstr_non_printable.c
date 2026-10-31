/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 11:48:12 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/07/23 14:25:09 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		j;
	char	*arr;

	i = 0;
	j = 0;
	arr = "0123456789abcdef";
	while (*str)
	{
		if (!((unsigned char)*str >= 32 && (unsigned char)*str <= 126))
		{
			i = (unsigned char)*str / 16;
			j = (unsigned char)*str % 16;
			write(1, "\\", 1);
			write(1, &arr[i], 1);
			write(1, &arr[j], 1);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
