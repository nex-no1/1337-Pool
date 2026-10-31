/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 13:08:57 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/07/23 16:00:44 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 && *s2)
	{
		if (!((unsigned char)*s1 == (unsigned char)*s2))
		{
			i = (unsigned char)*s1 - (unsigned char)*s2;
			return (i);
		}
		s1++;
		s2++;
	}
	i = (unsigned char)*s1 - (unsigned char)*s2;
	return (i);
}
