/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnevado- <jnevado-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:43:21 by jnevado-          #+#    #+#             */
/*   Updated: 2022/05/10 16:06:28 by jnevado-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(unsigned char *s1, unsigned char *s2, int n)
{
	int	i;
	int	var;

	i = 0;
	var = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] < 0)
			s1[i] = (-1) * s1[i];
		if (s2[i] < 0)
			s2[i] = (-1) * s2[i];
		if (s1[i] != s2[i])
		{	
			var = (s1[i] - s2[i]);
			return (var);
		}
		i++;
	}
	if (i != n)
	{
		var = (s1[i] - s2[i]);
		return (var);
	}
	return (0);
}
