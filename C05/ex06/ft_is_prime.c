/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:31:14 by silndoj           #+#    #+#             */
/*   Updated: 2023/11/07 20:36:37 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	cnt;

	cnt = 11;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0 || nb % 7 == 0)
		return (0);
	while (cnt <= (nb / 7))
	{
		if (!(nb % cnt))
			return (0);
		else
			cnt++;
	}
	return (1);
}
//int main ()
//{
//	printf("%d\n", ft_is_prime(27));
//	return (0);
//}
