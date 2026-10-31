/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 16:39:13 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/07/26 10:06:18 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*tmp1;
	char	*tmp2;

	if (!*to_find)
		return (str);
	while (*str)
	{
		tmp1 = str;
		tmp2 = to_find;
		while (*tmp1 && *tmp2 && *tmp1 == *tmp2)
		{
			tmp1++;
			tmp2++;
		}
		if (!*tmp2)
			return (str);
		str++;
	}
	return (0);
}
