/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-kadd <hel-kadd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:42:21 by hel-kadd          #+#    #+#             */
/*   Updated: 2023/01/18 14:51:32 by hel-kadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_countword(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

int	ft_word(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

void	clear(char **str, int c)
{
	int	i;

	i = 0;
	while (i < c)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;

	if (!s)
		return (NULL);
	str = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		if ((s[j] != c) && (s[j] != '\0'))
		{
			str[i] = ft_substr(s, j, ft_word(&s[j], c));
			if (str[i] == NULL)
				clear(str, i);
			j = (j + ft_word(&s[j], c) - 1);
			i++;
		}
		j++;
	}
	str[i] = 0;
	return (str);
}
