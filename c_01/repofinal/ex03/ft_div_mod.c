/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduarte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:59:04 by leduarte          #+#    #+#             */
/*   Updated: 2022/07/21 11:23:57 by leduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a;
	int b;
	int div;
	int mod;
	int *ptr1;
	int *ptr2;

	a = 57;
	b = 27;
	ptr1 = &div;
	ptr2 = &mod;
	ft_div_mod(a, b, ptr1, ptr2);
	printf("Resultado da divisao: %d\n", div);
	printf("Resultado do resto: %d\n", mod);
}*/
