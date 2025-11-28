/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaritta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:36:39 by ggaritta          #+#    #+#             */
/*   Updated: 2025/11/26 19:15:10 by ggaritta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t starter;
	char *sub = malloc((len + 1) * sizeof(char));
	
	starter = (size_t)start;
	if (!sub)
		return (NULL);
	while(starter < len && s)
	{
		*sub = s[starter];
		sub++;
		starter++;
	}
	sub = '\0';
	return (sub);
}
