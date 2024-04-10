/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:49:17 by silndoj           #+#    #+#             */
/*   Updated: 2023/11/08 14:15:00 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dstsize;
	unsigned int	srcsize;
	unsigned int	j;
	unsigned int	i;

	dstsize = 0;
	srcsize = 0;
	j = 0;
	i = 0;
	dstsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	i = dstsize;
	if (size == 0 || dstsize >= size)
		return (srcsize + size);
	while (src[j] != '\0' && j <= size - dstsize - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dstsize + srcsize);
}
