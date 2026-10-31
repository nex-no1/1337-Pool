/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 11:06:05 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/07/22 18:20:48 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!((unsigned char)*str > 31 && (unsigned char)*str <= 127))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
