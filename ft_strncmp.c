/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaritta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:07:38 by ggaritta          #+#    #+#             */
/*   Updated: 2025/11/25 19:33:56 by ggaritta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int strncmp(const char *str1, const char *str2, size_t c)
{
	char *s1;
	char *s2;
        size_t i;
	s1 = (char *) str1;
	s2 = (char *) str2;
	i = 0;
	if (n==0)
		return (0);
	while (s1[i]!='\0' && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1 - s2);
}

