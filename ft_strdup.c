/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaritta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:58:49 by ggaritta          #+#    #+#             */
/*   Updated: 2025/11/26 10:59:58 by ggaritta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup(const char *string)
{
	char *copy;
	int slen;
	int i;
	
	i = 0;
	slen = ft_strlen(string);
	copy = (char *) malloc(slen * (char *) + 1);
	while (string[i])
	{
		copy[i] = string[i];
		i++;
	}
	copy = '\0';
	return (copy);
}
