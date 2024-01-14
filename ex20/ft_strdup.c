/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:59:40 by namra             #+#    #+#             */
/*   Updated: 2024/01/14 18:55:15 by anikoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		++len;
		++str;
	}
	return (len);
}

char	*ft_strcpy(char *src)
{
	char	*dest;

	dest = NULL;
	dest = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (!str)
		return (NULL);
	while (*src)
	{
		*dest = *src;
		++src;
		++dest;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	return (ft_strcpy(src));
}
