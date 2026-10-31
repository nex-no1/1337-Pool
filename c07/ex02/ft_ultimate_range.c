/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 07:34:37 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/08/05 17:17:07 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long	len;
	int		i;
	int		j;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = (long)max - min;
	*range = malloc(sizeof(int) * len);
	if (*range == NULL)
		return (-1);
	i = min;
	j = 0;
	while (i < max)
	{
		(*range)[j] = i;
		j++;
		i++;
	}
	return (len);
}
