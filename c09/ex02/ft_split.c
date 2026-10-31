/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ywaffaou <ywaffaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 21:25:39 by ywaffaou          #+#    #+#             */
/*   Updated: 2026/08/06 21:25:49 by ywaffaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *sep)
{
	while (*sep)
	{
		if (*sep == c)
			return (1);
		sep++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_sep(*str, sep))
			str++;
		if (*str)
			count++;
		while (*str && !is_sep(*str, sep))
			str++;
	}
	return (count);
}

char	*fill_word(char *str, char *sep)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !is_sep(str[i], sep))
		i++;
	word = malloc(i + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !is_sep(str[i], sep))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		wc;
	int		i;

	wc = count_words(str, charset);
	strs = malloc((wc + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str)
		{
			strs[i] = fill_word(str, charset);
			i++;
		}
		while (*str && !is_sep(*str, charset))
			str++;
	}
	strs[i] = NULL;
	return (strs);
}

/*
int	main(void)
{
	char	**p;
	int		i;

	p = ft_split("aaa, bcv.; rt--hh", " ,.;-");
	i = 0;
	while (p[i])
	{
		printf("%s\n", p[i]);
		i++;
	}
}
*/