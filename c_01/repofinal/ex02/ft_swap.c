/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduarte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:37:16 by leduarte          #+#    #+#             */
/*   Updated: 2022/07/20 17:57:56 by leduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	nbr;

	nbr = *a;
	*a = *b;
	*b = nbr;
}
/*int	main(void)
{
	int num1;
	int num2;

	num1 = 12;
	num2 = 37;

	printf("Antes da funcao num1 tem : %d, e num2 tem: %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("Depois da funcao num1 tem: %d, e num2 tem : %d\n", num1, num2);
}*/	
