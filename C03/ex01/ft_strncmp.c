/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42heilbronn.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:47:11 by silndoj           #+#    #+#             */
/*   Updated: 2023/11/08 11:31:21 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
		return (0);
	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

//int main()
//{
//	printf("%d\n", ft_strncmp("Silvi", "silvi", 4));
//}
