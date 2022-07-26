/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduarte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:26:27 by leduarte          #+#    #+#             */
/*   Updated: 2022/07/21 16:46:23 by leduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			swap = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = swap;
			count = 0;
		}
		else
			count++;
	}
}

int	main(void)
{
	int	tab[10] = {27, 101, 8, 6, 58, 79, 15, 36, 24, 99};
	ft_sort_int_tab(tab, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", tab[i]);
	}
}
