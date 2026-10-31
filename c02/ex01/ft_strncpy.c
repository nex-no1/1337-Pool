/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 07:27:47 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/07/23 14:12:51 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	temp = dest;
	while (i < n)
	{
		if (*src)
		{
			*temp = *src;
			temp++;
			src++;
		}
		else
		{
			*temp = '\0';
			temp++;
		}
		i++;
	}
	return (dest);
}
