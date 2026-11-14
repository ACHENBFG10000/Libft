/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-05 11:42:49 by achen             #+#    #+#             */
/*   Updated: 2026-11-05 11:42:49 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_of_s1_s2;
	char	*str;

	len_of_s1_s2 = ft_strlen (s1) + ft_strlen (s2);
	str = malloc (len_of_s1_s2 + 1);
	if (!str)
		return (0);
	ft_strlcat (str, s1, len_of_s1_s2 + 1);
	ft_strlcat (str, s2, len_of_s1_s2 + 1);
	return (str);
}

/*
#include <unistd.h>

void	while_write(char *s)
{
	int	n;

	n = 0;
	while (s[n] != '\0')
	{
		write (1, &s[n], 1);
		n++;
	}
	write (1, "\n", 1);
	return ;
}

int	main(int argc, char **argv)
{
	int		n;
	char	*p;

	(void)argc;
	p = ft_strjoin (argv[1], argv[2]);
	n = 0;
	while_write (argv[1]);
	while_write (argv[2]);
	while_write (p);
	free (p);
	return (0);
}
*/