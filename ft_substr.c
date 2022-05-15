/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:35:37 by jnevado-          #+#    #+#             */
/*   Updated: 2022/05/06 18:31:17 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	index;
	unsigned int	lengh;
	char			*str;

	str = malloc(sizeof(char) * (len + 1));
	if (!s || !(str))
		return (0);
	index = 0;
	lengh = (unsigned int)ft_strlen((char *)s);
	while ((start < lengh) && (s[start + index] && index < len))
	{
		str[index] = s[start + index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
