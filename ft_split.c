/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 02:41:23 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/11 01:56:04 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static size_t	ft_wctr(char *s, char c)
{
	size_t	i;
	size_t	ctr;

	i = 0;
	ctr = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i] != '\0')
			ctr++;
		while (s[i] != c && s[i])
			i++;
	}
	return (ctr);
}

static char	**check_isfree(char **str)
{
	while (*str)
		free(*str++);
	free(str);
	return (NULL);
}

static void	ft_skip(char const *s, size_t *start, size_t *end, char c)
{
	while (s[*start] == c && s[*start] != '\0')
		*start = *start + 1;
	*end = *start;
	while (s[*end] != c && s[*end] != '\0')
		*end = *end + 1;
}

char	**ft_split(char const *s, char c)
{
	char	**str_split;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s)
		return (0);
	str_split = (char **)malloc((ft_wctr((char *)s, c) + 1) * sizeof(char *));
	if (!str_split)
		return (0);
	start = 0;
	i = 0;
	while (i < ft_wctr((char *)s, c))
	{
		ft_skip(s, &start, &end, c);
		str_split[i++] = ft_substr((char *)s, start, end - start);
		if (!*str_split)
			return (check_isfree(str_split));
		start = end;
	}
	str_split[i] = NULL;
	return (str_split);
}
