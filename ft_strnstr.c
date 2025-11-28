/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaritta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:35:36 by ggaritta          #+#    #+#             */
/*   Updated: 2025/11/25 19:57:33 by ggaritta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	char *biggerone;
	biggerone = (char *)big;
	i = 0;
	if (little == NULL)
                return (&biggerone[i]);
        while (biggerone[i] && i < len)
        {
                j = 0;
                while (biggerone[i + j] == little[j] && little[j] != '\0' && i+j < len)
                        j++;
                if (little[j] == '\0')
                        return (&biggerone[i]);
                i++;
        }
        return (NULL);
}
int main()
{
	char big[] = "qwertyuiopqwertyu";
	char little[] = "op";
	int len =9;
	printf("%s\n",ft_strnstr(big,little,len));
	printf("%s\n",strnstr(big,little,len));
}

