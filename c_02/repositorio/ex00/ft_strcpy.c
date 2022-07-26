/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduarte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:03:58 by leduarte          #+#    #+#             */
/*   Updated: 2022/07/24 11:15:12 by leduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	y;

	y = 0;
	while (src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	return (dest);
}
/*
int main()
{
	char src[] = "Piscine";
	char dest[8] = "";

	printf("%s\n", ft_strcpy(dest, src));
}
*/
