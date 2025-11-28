/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaritta <ggaritta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 08:48:09 by ggaritta          #+#    #+#             */
/*   Updated: 2025/11/28 10:00:45 by ggaritta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int ch, size_t n);
void    ft_bzero(void *s, size_t n);
size_t	ft_strlcpy(char *d, const char *s, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int	ft_toupper(int ch);
int	ft_tolower(int ch);
char	*ft_strchr(const char *str, int ch_needle);
char	*ft_strrchr(const char *str, int ch_needle);
int	ft_strncmp(const char *str1, const char *str2, size_t c);
void	*ft_calloc(size_t nitems, size_t size);
int	ft_atoi(const char *str);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *string);
void	*ft_memcpy(void *dest_str, const void * src_str, size_t n);
//void *ft_memmove(void *dest_str, const void *src_str, size_t numBytes);
char *ft_substr(char const *s, unsigned int start,size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);

#endif
