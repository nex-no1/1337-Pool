/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 07:31:34 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/07/31 07:36:51 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	j;

	j = nb - 1;
	if (nb < 2)
	{
		return (2);
	}
	if (nb % nb == 0)
	{
		while (j > 1)
		{
			if (nb % j == 0)
			{
				nb = ft_find_next_prime(nb + 1);
			}
			j--;
		}
		return (nb);
	}
	return (0);
}
