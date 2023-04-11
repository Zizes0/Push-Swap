/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:35:36 by hyounsi           #+#    #+#             */
/*   Updated: 2022/12/31 14:14:29 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	i;
	void	*p;

	i = 0;
	p = malloc(size * nitems);
	if (!p)
		return (NULL);
	while (i < size * nitems)
	{
		*(char *)(p + i) = '\0';
		i++;
	}
	return (p);
}

size_t	ft_strlen(char const *p)
{
	size_t	size;

	size = 0;
	while (*(p + size))
		size++;
	return (size);
}

char	*ft_strjoin(char const *s1, char const *s2, int *t)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	size_t	j;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	j = 0;
	i = 0;
	p = malloc(sizeof(char) * (len_s1 + len_s2) + 2);
	if (!p)
		return (NULL);
	while (*(s1 + j))
		*(p + i++) = *(s1 + j++);
	p[i++] = ' ';
	j = 0;
	while (*(s2 + j))
		*(p + i++) = *(s2 + j++);
	*(p + i) = '\0';
	if (j == 0)
		*t += 1;
	return (p);
}

char	*join_argv(char **argv, int *p)
{
	char	*array;
	char	*tmp;
	int		i;

	i = 1;
	array = malloc(2);
	if (!array)
		return (NULL);
	array[0] = ' ';
	array[1] = '\0';
	while (argv[i])
	{
		tmp = array;
		array = ft_strjoin(tmp, argv[i], p);
		free(tmp);
		i++;
	}
	return (array);
}

char	**all_arg(char **argv)
{
	int		p;
	char	**array;
	char	*arr;

	p = 0;
	arr = join_argv(argv, &p);
	if (p != 0)
	{
		free(arr);
		exit(write(2, "Error\n", 6));
	}
	array = ft_split(arr, ' ');
	free(arr);
	return (array);
}
