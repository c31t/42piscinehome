/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celt <celt@celt.celt>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:24:51 by celt              #+#    #+#             */
/*   Updated: 2023/08/07 17:07:40 by celt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_helper(int num1, int num2, int num3)
{
	ft_putchar(num1 + '0');
	ft_putchar(num2 + '0');
	ft_putchar(num3 + '0');
	if (num1 != 7 || num2 != 8 || num3 != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 0;
	while (num1 <= 7)
	{
		num2 = num1 + 1;
		while (num2 <= 8)
		{
			num3 = num2 + 1;
			while (num3 <= 9)
			{
				ft_print_comb_helper(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
	write (1, "\n", 1);
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
