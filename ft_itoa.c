/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaritta <ggaritta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 22:15:27 by ggaritta          #+#    #+#             */
/*   Updated: 2025/11/29 23:19:27 by ggaritta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int numlen(int n)
{
    int plusplusme;
    
    plusplusme = 0;
    if (n <= 0)
        plusplusme = 1;
    while (n != 0)
    {
        n /= 10;
        plusplusme++;
    }
    return (plusplusme);
}

char *ft_itoa(int n)
{
    char *str;
    int nlen;
    long lnum;

    nlen = numlen(n);
    str = ft_calloc(nlen,sizeof(char));
    if(!str)
        return NULL;
    lnum = n;
    if (n < 0)
    {
        str[0] = '-';
        lnum *= -1;
    }
    else if (lnum == 0)
        str[0] = '0';
    while (lnum > 0)//or n > 0
    {
        nlen--;
        str[nlen] = (lnum% 10) + '0';
        lnum /= 10;
    }
    return (str);
}

int main ()
{
    int num = -2147483648;
    char *ptr;

    ptr = ft_itoa(num);
    printf("%s\n",ptr);
    while(*ptr){
        printf("[%c] ",*(ptr));
        ptr++;
    }
    printf("fuori[%c] ",*(ptr));
}