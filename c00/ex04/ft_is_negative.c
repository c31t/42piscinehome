/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celt <celt@celt.celt>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:19:14 by celt              #+#    #+#             */
/*   Updated: 2023/08/07 17:07:36 by celt             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else if (n >= 0)
		write(1, "P", 1);
}

/*int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i <= ac - 1)
	{
		ft_is_negative(atoi(av[i]));
		write(1, "\n", 1);
		i++;
	}
}*/
