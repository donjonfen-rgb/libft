/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaritta <ggaritta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:58:16 by ggaritta          #+#    #+#             */
/*   Updated: 2025/11/28 19:12:15 by ggaritta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t count_chars(const char *s, char c, size_t address_me)
{
	size_t singlen;
	size_t i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c) 
			return (singlen);
	singlen++;
	s++;
	}
	return (singlen);
}

static size_t count_words(char const *s, char c){
	size_t words;
	size_t i;

	i = 0;
	words = 0;
	while(s[i])
	{
		if(s[i]==c)
		{
			words++;
			while (s[i]==c)
				i++;
		}
		i++;
	}
	return (words+1);
}

char *str_filler(char *word_building, const char *s, size_t c, size_t *i)
{
	size_t j=0;
	char *sm_str;
	while (!s[i] && s[i]!= c)
	{
		sm_str[j] = s[i];
		j++;i++;
	}
	return (sm_str);
}
char **ft_split(char const *s, char c)
{
	size_t words;
	char * sm_str;
	char ** lagranderaccoltadipiccolestringhe;
	/*scorrere lo stringone per intercettare il carattere e
	 creare un malloc di quella dimensione*/
	words = count_words(s,c);
	lagranderaccoltadipiccolestringhe = (char **) ft_calloc(words,sizeof(char *));
		if (lagranderaccoltadipiccolestringhe == NULL)
			return NULL;
	/*trovate le parole, bisogna crearsi 
	il calloc adatto per ogni lunghezza di ogni array
	dunque creare una lunghezza per ogni parola*/
	
	while (words--)
	{
		//altrimenti bisognerebbe crearsi un puntatore che venga acquisito dalla raccolta
		s += count_chars(s,c,&i);
		//calloc per ogni singola str
		lagranderaccoltadipiccolestringhe[i] = (char *)ft_calloc(count_chars(s,c,&i),sizeof(char));
		if (lagranderaccoltadipiccolestringhe[i] == NULL)
			return NULL;
		str_filler(lagranderaccoltadipiccolestringhe[i], *s, count_chars(s,c,&i));
		i++;
	}
	return (lagranderaccoltadipiccolestringhe);
}
