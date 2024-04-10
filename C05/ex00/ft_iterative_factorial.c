/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silndoj <silndoj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:01:19 by silndoj           #+#    #+#             */
/*   Updated: 2023/11/04 11:26:12 by silndoj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		f = f * nb;
		nb--;
	}
	return (f);
}
//void	main()
//{
//	int	z;
//
//	z = ft_iterative_factorial(1);
//	printf("%d\n", z);
//}
