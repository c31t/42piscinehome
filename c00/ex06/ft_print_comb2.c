/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celt <twitch.tv/ccelt>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:41:39 by celt              #+#    #+#             */
/*   Updated: 2023/08/07 15:16:36 by celt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int num)
{
	char	c;

	c = num / 10 + '0';
	write (1, &c, 1);
	c = num % 10 + '0';
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			print_number(i);
			write(1, " ", 1);
			print_number(j);
			if (i != 98)
				write(1, ", ", 2);
			else
				write(1, "\n", 1);
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
