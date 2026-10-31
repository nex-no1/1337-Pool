/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 09:57:10 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/07/28 20:29:45 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (((unsigned char)str[i] > 0 && (unsigned char)str[i] <= 32)
			|| (unsigned char)str[i] == 127)
			return (0);
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_check(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	size;
	int	result;
	int	sign;

	size = ft_base(base);
	if (size < 2)
		return (0);
	result = 0;
	sign = 1;
	while ((*str >= 0 && *str <= 32) || *str == 127)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (ft_check(*str, base) != -1)
	{
		result = (result * size) + ft_check(*str, base);
		str++;
	}
	return (result * sign);
}
