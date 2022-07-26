/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduarte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:39:46 by leduarte          #+#    #+#             */
/*   Updated: 2022/07/21 12:59:48 by leduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != ('\0'))
	{
		ft_putchar(*str);
		str++;
	}
}

/*int	main(void)
{
	char str[] = "Leandro";
	char *pnt_str;

	pnt_str = str;
	ft_putstr(pnt_str);
}*/
