/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduarte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:34:42 by leduarte          #+#    #+#             */
/*   Updated: 2022/07/21 12:14:32 by leduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a) / (*b);
	mod = (*a) % (*b);
	*a = div;
	*b = mod;
}
/*int	main(void)
{
	int c = 10;
	int d = 6;
	int *a = &c;
	int *b = &d;
	
	printf("%d\n", c);
	printf("%d\n", d);
	
	ft_ultimate_div_mod(a, b);
	
	printf("div %d\n", *a);
	printf("mod %d\n", *b);
}*/
