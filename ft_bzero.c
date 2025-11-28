/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaritta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:52:37 by ggaritta          #+#    #+#             */
/*   Updated: 2025/11/25 16:31:39 by ggaritta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero (void *s, size_t n)
{
	//ft_memset(s+2,'0',n);
	unsigned char *str;
	
	str = (unsigned char *)s;
	if (n > 0)
	{
		size_t i;
	       	i = 0;
		while (i < n)
		{
			str[i] =0;//check it again need the null as previous but need to check it otherwise
			i++;
		}
	}
}
