/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:55:00 by jecosta           #+#    #+#             */
/*   Updated: 2024/10/22 16:06:11 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>


int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
/*void	*ft_memset(void *s, int c, size_t n);
ft_bzero(void *s, size_t n);
ft_memcpy(void *restrict, const void *restrict, size_t n);
ft_memmove(void *s, const void *, size_t n);
ft_strlcpy(char *dst, const char *src, size_t size);
ft_strlcat(char *dst, const char *src, size_t size);
ft_toupper(int c);
ft_tolower(int c);
ft_strchr(const char *str, int c);
ft_strrchr(const char *str, int c);
ft_strncmp(const char *src, const char *dst, size_t n);
ft_memchr(const void *str, int c, size_t n);
ft_memcmp(const void *src, const void *dst, size_t n);
ft_strnstr(const char *big, const char *little, size_t len);
ft_atoi(const char *nptr);
ft_substr(char const *s, unsigend int start, size_t len);
ft_strjoin(char const *s1, char const *s2);
ft_strtrim(char const *s1, char const *set);
ft_split(char const *s, char c);
ft_itoa(int n);
ft_strmapi(char const *s, char (*f)(unsigned int n, char c));
ft_striteri(char *s, void (*f)(unsigned int n, char *c));
ft_putchar_fd(char c, int fd);
ft_putstr_fdchar(char *s, int fd);
ft_putendl_fd(char *s, int fd);
ft_putnbr_fd(int n, int fd);*/

#endif
