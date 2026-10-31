/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 09:59:39 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/07/22 18:17:59 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strsize(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count += 1;
		str++;
	}
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	char			*temp;
	unsigned int	cnt;

	i = 0;
	temp = dest;
	cnt = 0;
	i = ft_strsize(src);
	if (!(size == 0))
	{
		while (*src && cnt < size - 1)
		{
			*temp = *src;
			temp++;
			src++;
			cnt++;
		}
		*temp = '\0';
	}
	return (i);
}
