/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaritta <ggaritta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 23:21:08 by ggaritta          #+#    #+#             */
/*   Updated: 2025/11/29 23:40:05 by ggaritta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//we need another func
char *f(unsigned int index, char charrino)
{
	return charrino - 32;
}
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	/*
	Applies the function f to each character of the
	string s, passing its index as the first argument
	and the character itself as the second. A new
	string is created (using malloc(3)) to store the
	results from the successive applications of f.
	*/
	char *str;
	unsigned int i;
	if (!s || !f)
		return NULL;
	str = (char *)ft_calloc(ft_strlen(s),sizeof(char));
	
	while (s[i])
	{
		str[i] = f(1,s[i]);
		i++;
	}
	return str;
}
int main ()
{
	char *str = "qwertyuiop";
	

	while (*str)
	
}