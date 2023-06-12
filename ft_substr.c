/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kabo <sel-kabo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 03:12:41 by sel-kabo          #+#    #+#             */
/*   Updated: 2023/06/11 04:18:11 by sel-kabo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

size_t	getexactlen(size_t sl, unsigned int start, size_t len)
{
	size_t	exactlen;

	exactlen = 0;
	while (start + exactlen < sl && exactlen < len)
		exactlen++;
	return (exactlen);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	exactlen;

	if (!s)
		return (0);
	i = 0;
	exactlen = getexactlen(ft_strlen((char *)s), start, len);
	p = (char *)malloc((exactlen + 1) * sizeof(char));
	if (!p)
		return (0);
	while (i < exactlen)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
