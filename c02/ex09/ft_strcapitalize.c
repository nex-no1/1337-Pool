/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 11:46:59 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/07/22 18:45:11 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check_char(char *temp, int *count)
{
	if ((*temp >= 'a' && *temp <= 'z') && (*count == 1))
	{
		*temp = *temp - 32;
		*count = 0;
	}
	else if (((*temp >= 'a' && *temp <= 'z') && (*count == 0))
		|| ((*temp >= 'A' && *temp <= 'Z') && (*count == 1))
		|| ((*temp >= '0' && *temp <= '9')))
		*count = 0;
	else if ((*temp >= 'A' && *temp <= 'Z') && (*count == 0))
	{
		*temp = *temp + 32;
		*count = 0;
	}
	else
		*count = 1;
}

char	*ft_strcapitalize(char *str)
{
	char	*temp;
	int		count;

	temp = str;
	count = 1;
	while (*temp)
	{
		ft_check_char(temp, &count);
		temp++;
	}
	return (str);
}
