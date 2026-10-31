/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 07:50:03 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/08/05 17:26:23 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len1(char **strs, int size)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

int	ft_len2(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_copy(char *string, char *sep, int d)
{
	int	l;

	l = 0;
	while (sep[l] != '\0')
	{
		string[d] = sep[l];
		d++;
		l++;
	}
	return (d);
}

char	*ft_join(char **strs, char *sep, char *string, int size)
{
	int	i;
	int	d;
	int	j;

	i = 0;
	d = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			string[d] = strs[i][j];
			j++;
			d++;
		}
		if (i < size - 1)
		{
			d = ft_copy(string, sep, d);
		}
		i++;
	}
	string[d] = '\0';
	return (string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		len;
	int		total;
	int		i;

	len = ft_len2(sep);
	total = ft_len1(strs, size);
	i = 0;
	if (size <= 0)
	{
		string = malloc(sizeof(char));
		*string = '\0';
		return (string);
	}
	while (i < size)
	{
		total += len;
		i++;
	}
	string = malloc(sizeof(char) * (total + 1));
	if (string == NULL)
		return (NULL);
	return (ft_join(strs, sep, string, size));
}
