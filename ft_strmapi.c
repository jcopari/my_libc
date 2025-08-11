/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcopari- <jcopari-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:00:05 by jcopari-          #+#    #+#             */
/*   Updated: 2025/08/11 14:00:07 by jcopari-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	size_t			s_len;
	unsigned int	i;
	char			*new_string;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	new_string = malloc(s_len + 1);
	i = 0;
	while (s[i])
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}