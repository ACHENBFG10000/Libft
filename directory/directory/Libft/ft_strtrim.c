/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-05 14:43:10 by achen             #+#    #+#             */
/*   Updated: 2026-11-05 14:43:10 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	ft_checkset(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	s1_n_front;
	unsigned int	s1_n_op;
	char			*str;

	s1_n_front = 0;
	s1_n_op = (unsigned int)ft_strlen (s1) - 1;
	while (ft_checkset (s1[s1_n_front], set))
		s1_n_front++;
	while (ft_checkset (s1[s1_n_op], set) && s1_n_front <= s1_n_op)
		s1_n_op--;
	if (s1_n_front > s1_n_op)
	{
		str = malloc (1);
		if (!str)
			return (0);
		*str = '\0';
		return (str);
	}
	str = malloc (s1_n_op - s1_n_front + 2);
	if (!str)
		return (0);
	ft_strlcpy (str, &s1[s1_n_front], s1_n_op - s1_n_front + 2);
	return (str);
}

/*
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*p;

	(void)argc;
	p = ft_strtrim (argv[1], argv[2]);
	while (*p)
	{
		write (1, p, 1);
		p++;
	}
	free (p);
	return (0);
}
*/