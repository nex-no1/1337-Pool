/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 07:20:02 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/08/05 17:16:08 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*arr;
	int		i;
	int		j;
	long	len;

	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	len = (long)max - min;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);
	i = min;
	j = 0;
	while (i < max)
	{
		arr[j] = i;
		i++;
		j++;
	}
	return (arr);
}
