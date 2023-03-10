/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:45:09 by angassin          #+#    #+#             */
/*   Updated: 2023/02/25 14:57:42 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
	The memset() function writes len bytes of value c (converted to an
    unsigned char) to the string b.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dest;
	unsigned int	i;

	dest = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		dest[i] = c;
		i++;
	}
	return ((void *)dest);
}
