/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaritta <ggaritta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:58:16 by ggaritta          #+#    #+#             */
/*   Updated: 2025/11/29 23:02:05 by ggaritta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char *skip_me(const  char *str, char c)
{
	while (*str == c)
		str++;
	return str;
}

static size_t count_chars(const char *s, char c)
{
	size_t wordlen;
	size_t i;

	i = 0;
	wordlen = 0;
	//printf("[%c]",*s);
	while (s[i] && s[i]!=c)//ttt: the s++ in this condition
	{
		//if (s[i] == c && wordlen > 0)
		//{	//while is wrong cause you don't have 
			//the value of whatever was
			//skipped after the wordlen finished changing value
			//you either add a skipme or...
			//while (*s == c)
			//	s++;
		//	return (wordlen);
		//}
		//printf("while s [%c]",*s);
		wordlen++;
		i++;
	}
	
	printf("[%zu]\n",wordlen);
	return (wordlen);
}

static size_t count_words(char const *s, char c)
{
	size_t words;
	size_t i;

	i = 0;
	words = 0;
	while(s[i])
	{
		if(s[i] == c && i != 0)
		{
			words++;
			while (s[i]==c)
				i++;
		}
		i++;
	}
	return (words+1);
}

char *str_filler(const char *s, char c, size_t len)
{// ptrs hanno sempre bisogno di uno starter
	size_t j=0;
	char *sm_str;
	sm_str = (char *)ft_calloc(len+1,sizeof(char));
	if (sm_str == NULL)
		return NULL;
	while (s[j] && s[j]!= c)
	{
		sm_str[j] = s[j];
		printf("dopo acquisito smstr[%c] s[%c]\n",sm_str[j],s[j]);
		j++;
	}
	//skip_me(s,c);
	printf("[%s]\n",sm_str);
	return (sm_str);
}

char **ft_split(char const *s, char c)
{
	size_t words;
	char ** lagranderaccoltadipiccolestringhe;
	size_t wordlen;
	size_t i;

	i = 0;
	words = count_words(s,c);
	lagranderaccoltadipiccolestringhe = (char **) ft_calloc(words,sizeof(char *));
	if (lagranderaccoltadipiccolestringhe == NULL)
		return NULL;
	while (words--)
	{
		s = skip_me(s,c);
		wordlen = count_chars(s,c);
		lagranderaccoltadipiccolestringhe[i] = str_filler(s, c,wordlen);
		printf("[%s]\n",lagranderaccoltadipiccolestringhe[i]);
		if (lagranderaccoltadipiccolestringhe[i] == NULL)
			return NULL;
		s += wordlen;
		i++;
	}
	return (lagranderaccoltadipiccolestringhe);
}

int main()
{
	char *str = " nel mezzo del    cammin di cosa     vita ";
	char cara = ' ';
	char **ptr = ft_split(str, cara);
	while(*ptr)
	{
		printf("%s",*ptr);
		ptr++;
	}
}

/*	str_filler(lagranderaccoltadipiccolestringhe[i], s, c);
		if( wordlen > ft_strlen(s))
			break;
		s+=wordlen; */
/*
char **split(char *string, const char delimiter) {
    int length = 0, count = 0, i = 0, j = 0;
    while(*(string++)) {
        if (*string == delimiter) count++;
        length++;
    }
    string -= (length + 1); // string was incremented one more than length
    char **array = (char **)malloc(sizeof(char *) * (length + 1));
    char ** base = array;
    for(i = 0; i < (count + 1); i++) {
        j = 0;
        while(string[j] != delimiter) j++;
        j++;
        *array = (char *)malloc(sizeof(char) * j);
        memcpy(*array, string, (j-1));
        (*array)[j-1] = '\0';
        string += j;
        array++;
    }
    *array = '\0';
    return base;  
}
Free this array later, like:
i = 0;
while(base[i]) {
    free(base[i]);
    i++;
}
free(base);
base = NULL;
*/