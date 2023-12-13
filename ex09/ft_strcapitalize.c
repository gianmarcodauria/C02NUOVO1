/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-auria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:12:25 by gd-auria          #+#    #+#             */
/*   Updated: 2023/12/13 05:24:05 by gd-auria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	char	*t;
	int		c;

	t = str;
	c = 0;
	while (*t)
	{
		c++;
		if ((c == 1) && (*t >= 'a' && *t <= 'z'))
			*t -= 32;
		if ((*t > 31 && *t < 48) || (*t > 57 && *t < 65))
			c = 0;
		if ((*t > 90 && *t < 97) || (*t > 122 && *t < 127))
			c = 0;
		if ((c > 1) && (*t >= 'A' && *t <= 'Z'))
			*t += 32;
		t++;
	}
	return (str);
}