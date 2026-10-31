/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 13:22:50 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/07/31 07:32:56 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long	nbr;
	int		result;

	nbr = nb;
	result = 1;
	if (nbr < 0)
		return (0);
	while (nbr >= 1)
	{
		result *= nbr;
		nbr--;
	}
	return (result);
}
