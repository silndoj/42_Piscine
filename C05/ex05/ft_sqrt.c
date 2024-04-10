/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:59:13 by silndoj           #+#    #+#             */
/*   Updated: 2023/11/05 11:14:04 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	base;
	long	a;

	a = nb;
	if (a < 1)
		return (0);
	if (a == 1)
		return (1);
	base = 2;
	if (a >= 2)
	{
		while (base * base <= nb)
		{
			if (base * base == nb)
			{
				return (base);
			}
			base++;
		}
	}
	return (0);
}
//int main()
//{
//	printf("%d\n", ft_sqrt(214748364));
//	return (0);
//}
