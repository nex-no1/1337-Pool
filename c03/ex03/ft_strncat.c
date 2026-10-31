/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 16:15:34 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/07/23 16:38:43 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	temp = dest;
	while (*temp)
	{
		temp++;
	}
	while (*src && i < nb)
	{
		*temp = *src;
		temp++;
		src++;
		i++;
	}
	*temp = '\0';
	return (dest);
}
