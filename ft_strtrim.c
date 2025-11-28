/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaritta <ggaritta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:42:34 by ggaritta          #+#    #+#             */
/*   Updated: 2025/11/28 09:51:32 by ggaritta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <stdlib.h>

void *ft_memcpy(void *dest_str, const void * src_str, size_t n)
{
	unsigned char *ptrd;
	const unsigned char *ptrs;
	size_t i;
	
	ptrd = (unsigned char *) dest_str;
	ptrs = (const unsigned char *) src_str;
	i = 0;
	while (i < n)
	{
		ptrd[i] = ptrs[i];
		i++;
	}
	ptrd[i] = '\0';//vedere se lo richiede
	return ((void *)ptrd);
}
int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}
*/
static int ami_in(char c, const char *set)
{
	//const char *setme;
	
	//setme = set;
	
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}

	printf("%s", set);
	//set = setme;
	return (0);
}

char *ft_strtrim(const char *s1, const char *set)
{
	int i;
	int j;
	char *nts;
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ami_in(s1[i],set) == 1)
		i++;
	while (s1[j] && ami_in(s1[j],set))
		j--;
	nts = (char *) malloc(j - i + 1 * sizeof(char));
	if (!nts)
		return NULL;
	nts = ft_memcpy(nts, s1 + i, j - i + 1);
	return (nts);
}

int main ()
{
	char str[] = "qqertyuiop";
	char *set = "qp";

	printf("[%s]",ft_strtrim(str,set));
}
/*char *ft_strtrim(const char *s1, const char *set)
{
	size_t starter;//idem as below
	size_t ender;//make them ptrs to the str to run
	char *nicely_trimmed_str;
	//char *inizio;
	starter = 0;
	ender = ft_strlen(s1);
	while (*s1 && ami_in(*s1,set))
	{
		starter++;
		s1++;
		printf("starter %zu\n",starter);
		printf("i'm set %c\n",*set);
	}
	*inizio = s1[starter];//da problemi anche se commentato
	//printf("l'inizio %c\n",*inizio);
	s1 +=  ft_strlen(s1)-1;
	while (*s1 && ami_in(*s1,set))
	{
		ender--;
		s1--;
		printf("ender %zu\n",ender);
	}
	printf("%zu %zu",ender,starter);
	nicely_trimmed_str = (char *) malloc((ender-starter+1)*sizeof(char));
	if (!nicely_trimmed_str)
		return NULL;
	nicely_trimmed_str = ft_memcpy(nicely_trimmed_str, s1+starter, (ender - starter + 1));
	return (nicely_trimmed_str);
}*/