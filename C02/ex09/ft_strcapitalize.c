/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 20:54:04 by silndoj           #+#    #+#             */
/*   Updated: 2023/10/29 11:19:49 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_str_is_lowercase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A') || str[i] > 'z'
			|| (str[i] > 'Z' && str[i] < 'a'))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}
//int main()
//{
//	char str[60] = "heLlo, 8world+bYe!)p2s";
//	ft_strcapitalize(str);
//	write(1, &str, 22);
//	return (0);
//}
