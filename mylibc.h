/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylibc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 10:08:24 by jcopari-          #+#    #+#             */
/*   Updated: 2025/08/11 09:44:31 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYLIBC.H 
# define MYLIBC.H 

# include <unistd.h>
# include <stdlib.h>

int my_isdigit(int c);
int my_isalnum(int c);
int	my_isalpha(int c);
int my_isascii(int c);
void ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *str);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
char *ft_strjoin(char const *s1, char const *s2);
void ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif
