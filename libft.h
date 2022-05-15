/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaimenevado <jaimenevado@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:29:48 by jnevado-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/09 18:11:01 by jaimenevado      ###   ########.fr       */
=======
/*   Updated: 2022/05/15 15:25:53 by jnevado-         ###   ########.fr       */
>>>>>>> c97c176b729b6e2e9ca998658e65ef0d25cbccf5
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

//Primeras funciones
int				ft_isalpha(int n);
int				ft_isdigit(int n);
int				ft_isalnum(int n);
int				ft_isascii(int n);
int				ft_isprint(int n);
int				ft_strlen(char *str);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
size_t			ft_strlcpy(char *dest, char *src, size_t size);
size_t			ft_strlcat(char *dest, char *src, size_t dstsize);
int				ft_toupper(int n);
int				ft_tolower(int n);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(const void *big, const char *little, size_t len);
int				ft_atoi(int n);
//Funciones con Malloc()
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);
//SEGUNDA PARTE
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
#endif