/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduarte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:11:49 by leduarte          #+#    #+#             */
/*   Updated: 2022/07/21 15:52:31 by leduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	c;

	index = 0;
	c = 0;
	while (index < (size / 2))
	{
		c = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = c;
		index++;
	}
}
int	main()
{
	int tab[6] = {0, 1, 2, 3, 4, 5};
	ft_rev_int_tab(&tab[0], 6);
	for(int i =0; i < 5; i++)
	{
		printf("%d", tab[i]);
	}
}
