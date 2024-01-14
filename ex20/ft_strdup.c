/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:59:40 by namra             #+#    #+#             */
/*   Updated: 2024/01/14 19:34:32 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_createstr(char *src, unsigned int i)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * i);
	if (!dest)
		return (NULL);
	return (ft_strcpy(src, str));
}

char	*ft_strdup(char *src)
{
	unsigned int	i;

	i = ft_strlen(src);
	return (ft_createstr(src, i));
}
