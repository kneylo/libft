/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:10:00 by nkreter           #+#    #+#             */
/*   Updated: 2025/10/16 18:10:00 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* ========== INCLUDES ========== */
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

/* ========== STRUCTURES ========== */
typedef struct  s_list
{
    void    *content;
    struct s_list *next;
}   t_list;

/* ========== MANDATORY PART 1 ========== */
int		nk_isalpha(int c);
int		nk_isdigit(int c);
int		nk_isalnum(int c);
int		nk_isascii(int c);
int		nk_isprint(int c);
int		nk_toupper(int c);
int		nk_tolower(int c);
size_t  nk_strlen(const char *s);
void	nk_bzero(void *s, size_t n);
void	*nk_memset(void *b, int c, size_t len);
void	*nk_memcpy(void *dst, const void *src, size_t n);
void	*nk_memmove(void *dst, const void *src, size_t len);
void	*nk_memchr(const void *s, int c, size_t n);
int		nk_memcmp(const void *s1, const void *s2, size_t n);
char	*nk_strchr(const char *s, int c);
char	*nk_strrchr(const char *s, int c);
int		nk_strncmp(const char *s1, const char *s2, size_t n);
size_t	nk_strlcat(char *dst, const char *src, size_t dstsize);
int		nk_atoi(const char *str);
char    *nk_strnstr(const char *haystack, const char *needle, size_t len);
size_t  nk_strlcpy(char *dst, const char *src, size_t dstsize);
char    *nk_strdup(const char *s);
void    *nk_calloc(size_t count, size_t size);

/* ========== MANDATORY PART 2 ========== */
char    *nk_substr(const char *s, unsigned int start, size_t len);
char    *nk_strjoin(char const *s1, char const *s2);
char    *nk_strtrim(char const *s1, char const *set);
char    **nk_split(char const *s, char c);
char    *nk_itoa(int n);
char    *nk_strmapi(char const *s, char (*f) (unsigned int, char));
void    nk_striteri(char *s, void (*f)(unsigned int, char*));
void	nk_putchar_fd(char c, int fd);
void	nk_putstr_fd(char *s, int fd);
void	nk_putendl_fd(char *s, int fd);
void	nk_putnbr_fd(int n, int fd);

/* ========== BONUS PART ========== */
t_list  *nk_lstnew(void *content);
void    nk_lstadd_front(t_list **lst, t_list *new);
int     nk_lstsize(t_list *lst);
t_list  *nk_lstlast(t_list *lst);
void    nk_lstadd_back(t_list **lst, t_list *new);
void    nk_lstdelone(t_list *lst, void (*del)(void*));
void    nk_lstclear(t_list **lst, void (*del)(void*));
void    nk_lstiter(t_list *lst, void (*f)(void *));
t_list  *nk_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/* ========== PERSONAL ONES========== */
char    *nk_strrev(char *str);
char    *nk_strcpy(char *dest, char *src);
char    *nk_strcat(char *dest, const char *src);
int     nk_strcmp(char *s1, char *s2);
void    *nk_memccpy(void *dst, const void *src,int c, size_t n);
void    nk_putchar(char c);
void    nk_putstr(char *str);
void    nk_putendl(char *str);
void    nk_putnbr(int nb);
char    *nk_strstr(char *str, char *to_find);
char    *nk_strcapitalize(char *str);

#endif