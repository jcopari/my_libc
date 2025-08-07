/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:32:39 by jcopari-          #+#    #+#             */
/*   Updated: 2025/08/07 10:07:49 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mylibc.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;
    size_t s_len;
    size_t i;
	
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
    i = 0;
    if (len > (s_len - start))
        len = (s_len - start);
    ptr = malloc((sizeof(char) * (len + 1)));
    if (ptr == NULL)
        return (NULL);
    while (i < len)
    {
        ptr[i] = s[start + i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
