/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-11-03 15:01:30 by achen             #+#    #+#             */
/*   Updated: 2026-11-03 15:01:30 by achen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_negative(const char *str)
{
	int	n_str;
	int	n_of_negative;

	n_str = 0;
	n_of_negative = 0;
	while (str[n_str] == ' ' || (str[n_str] == '+' || str[n_str] == '-'))
	{
		if (str[n_str] == '-')
			n_of_negative++;
		n_str++;
	}
	return (n_of_negative);
}

int	ft_atoi(const char *nptr)
{
	int	n_nptr;
	int	n_of_negative;
	int	n_to_return;
	int	nbr;

	n_nptr = 0;
	n_of_negative = 0;
	n_to_return = 0;
	nbr = 0;
	if (!nptr)
		return (0);
	n_of_negative = count_negative(nptr);
	while (nptr[n_nptr] == ' ' || (nptr[n_nptr] == '+' || nptr[n_nptr] == '-'))
		n_nptr++;
	while ('0' <= nptr[n_nptr] && nptr[n_nptr] <= '9')
	{
		nbr = nptr[n_nptr] - '0';
		n_to_return = n_to_return * 10 + nbr;
		n_nptr++;
	}
	if (n_of_negative % 2 != 0)
		n_to_return *= -1;
	return (n_to_return);
}

/*
int	main(int argv, char **argc)
{
	(void)argv;
	int	nbr;

	nbr = ft_atoi(argc[1]);
	printf ("%d", nbr);
	return (0);
}
*/