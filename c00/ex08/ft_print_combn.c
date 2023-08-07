/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celt <twitch.tv/ccelt>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:27:30 by celt              #+#    #+#             */
/*   Updated: 2023/08/07 16:13:28 by celt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (++i, str[i])
		write (1, &str[i], 1);
}

void	print_combn1(int n, int *tab, int index, int digit)
{
	int	i;
	int	j;

	i = 0;
	if (n == 0)
	{
		while (i < index)
		{
			ft_putchar(tab[i] + '0');
			i++;
		}
		if (index != 0)
			ft_putstr(", ");
	}
	else
	{
		j = digit;
		while (j <= 9)
		{
			tab[index] = j;
			print_combn1(n - 1, tab, index + 1, j + 1);
			j++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	tab[n];

	print_combn1(n, tab, 0, 0);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_print_combn(atoi(av[1]));
	return (0);
}*/
